//------------------------------------------------------------------------------
// <copyright file="DpiHelper.cs" company="Microsoft">
//     Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>
//------------------------------------------------------------------------------
// based on \env\shell\PackageFramework\Current\Shell\UI\Common\DpiHelper.cs
// changes: WPF-related code is removed, class is internal, and initialization is done lazily
using System.Configuration;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Runtime.InteropServices;

#if WINFORMS_NAMESPACE
using System.Windows.Forms.Internal;
using CAPS = System.Windows.Forms.NativeMethods;
#elif DRAWING_NAMESPACE
using CAPS = System.Drawing.SafeNativeMethods;
#elif DRAWINGDESIGN_NAMESPACE
using System.Drawing.Design;
using CAPS = System.Drawing.Design.NativeMethods;
#else
using System.Design;
using CAPS = System.Design.NativeMethods;
#endif

namespace System.Windows.Forms
{
    /// <summary>
    /// Helper class for scaling coordinates and images according to current DPI scaling set in Windows for the primary screen.
    /// </summary>
    internal static class DpiHelper
    {
        private const string EnableHighDpiConfigurationValueName = "EnableWindowsFormsHighDpiAutoResizing";
        private const double LogicalDpi = 96.0;
        private static bool isInitialized = false;
        /// <summary>
        /// The primary screen's (device) current horizontal DPI
        /// </summary>
        private static double deviceDpiX = LogicalDpi;

        /// <summary>
        /// The primary screen's (device) current vertical DPI
        /// </summary>
        private static double deviceDpiY = LogicalDpi;

        private static double logicalToDeviceUnitsScalingFactorX = 0.0;
        private static double logicalToDeviceUnitsScalingFactorY = 0.0;
        private static bool enableHighDpi = false;
        private static InterpolationMode interpolationMode = InterpolationMode.Invalid;

        private static void Initialize()
        {
            if (isInitialized)
            {
                return;
            }
            try
            {
                string value = ConfigurationManager.AppSettings.Get(EnableHighDpiConfigurationValueName);
                if (string.Equals(value, "true", StringComparison.InvariantCultureIgnoreCase))
                {
                    enableHighDpi = true;
                }
            }
            catch
            {
            }
            if (enableHighDpi)
            {
                IntPtr hDC = UnsafeNativeMethods.GetDC(NativeMethods.NullHandleRef);
                if (hDC != IntPtr.Zero)
                {
                    deviceDpiX = UnsafeNativeMethods.GetDeviceCaps(new HandleRef(null, hDC), CAPS.LOGPIXELSX);
                    deviceDpiY = UnsafeNativeMethods.GetDeviceCaps(new HandleRef(null, hDC), CAPS.LOGPIXELSY);

                    UnsafeNativeMethods.ReleaseDC(NativeMethods.NullHandleRef, new HandleRef(null, hDC));
                }
            }
            isInitialized = true;
        }

        private static double LogicalToDeviceUnitsScalingFactorX
        {
            get
            {
                if (logicalToDeviceUnitsScalingFactorX == 0.0)
                {
                    Initialize();
                    logicalToDeviceUnitsScalingFactorX = deviceDpiX / LogicalDpi;
                }
                return logicalToDeviceUnitsScalingFactorX;
            }
        }

        private static double LogicalToDeviceUnitsScalingFactorY
        {
            get
            {
                if (logicalToDeviceUnitsScalingFactorY == 0.0)
                {
                    Initialize();
                    logicalToDeviceUnitsScalingFactorY = deviceDpiY / LogicalDpi;
                }
                return logicalToDeviceUnitsScalingFactorY;
            }
        }

        private static InterpolationMode InterpolationMode
        {
            get 
            {
                if (interpolationMode == InterpolationMode.Invalid) 
                {
                    int dpiScalePercent = (int)Math.Round(LogicalToDeviceUnitsScalingFactorX * 100);

                    // We will prefer NearestNeighbor algorithm for 200, 300, 400, etc zoom factors, in which each pixel become a 2x2, 3x3, 4x4, etc rectangle. 
                    // This produces sharp edges in the scaled image and doesn't cause distorsions of the original image.
                    // For any other scale factors we will prefer a high quality resizing algorith. While that introduces fuzziness in the resulting image, 
                    // it will not distort the original (which is extremely important for small zoom factors like 125%, 150%).
                    // We'll use Bicubic in those cases, except on reducing (zoom < 100, which we shouldn't have anyway), in which case Linear produces better 
                    // results because it uses less neighboring pixels.
                    if ((dpiScalePercent % 100) == 0) 
                    {
                        interpolationMode = InterpolationMode.NearestNeighbor;
                    } 
                    else if (dpiScalePercent < 100) 
                    {
                        interpolationMode = InterpolationMode.HighQualityBilinear;
                    } 
                    else 
                    {
                        interpolationMode = InterpolationMode.HighQualityBicubic;
                    }
                }
                return interpolationMode;
            }
        }

        private static Bitmap ScaleBitmapToSize(Bitmap logicalImage, Size deviceImageSize)
        {
            Bitmap deviceImage;
            deviceImage = new Bitmap(deviceImageSize.Width, deviceImageSize.Height, logicalImage.PixelFormat);

            using (Graphics graphics = Graphics.FromImage(deviceImage))
            {
                graphics.InterpolationMode = InterpolationMode;

                RectangleF sourceRect = new RectangleF(0, 0, logicalImage.Size.Width, logicalImage.Size.Height);
                RectangleF destRect = new RectangleF(0, 0, deviceImageSize.Width, deviceImageSize.Height);

                // Specify a source rectangle shifted by half of pixel to account for GDI+ considering the source origin the center of top-left pixel
                // Failing to do so will result in the right and bottom of the bitmap lines being interpolated with the graphics' background color,
                // and will appear black even if we cleared the background with transparent color. 
                // The apparition of these artifacts depends on the interpolation mode, on the dpi scaling factor, etc.
                // E.g. at 150% DPI, Bicubic produces them and NearestNeighbor is fine, but at 200% DPI NearestNeighbor also shows them.
                sourceRect.Offset(-0.5f, -0.5f);

                graphics.DrawImage(logicalImage, destRect, sourceRect, GraphicsUnit.Pixel);
            }

            return deviceImage;
        }

        private static Bitmap CreateScaledBitmap(Bitmap logicalImage) 
        {
            Size deviceImageSize = DpiHelper.LogicalToDeviceUnits(logicalImage.Size);
            return ScaleBitmapToSize(logicalImage, deviceImageSize);
        }

        /// <summary>
        /// Returns whether scaling is required when converting between logical-device units,
        /// if the application opted in the automatic scaling in the .config file.
        /// </summary>
        public static bool IsScalingRequired
        {
            get
            {
                Initialize();
                return deviceDpiX != LogicalDpi || deviceDpiY != LogicalDpi;
            }
        }

        /// <summary>
        /// Transforms a horizontal integer coordinate from logical to device units
        /// by scaling it up  for current DPI and rounding to nearest integer value
        /// Note: this method should be called only inside an if (DpiHelper.IsScalingRequired) clause
        /// </summary>
        /// <param name="value">The horizontal value in logical units</param>
        /// <returns>The horizontal value in device units</returns>
        public static int LogicalToDeviceUnitsX(int value) {
            return (int)Math.Round(LogicalToDeviceUnitsScalingFactorX * (double)value);
        }

        /// <summary>
        /// Transforms a vertical integer coordinate from logical to device units
        /// by scaling it up  for current DPI and rounding to nearest integer value
        /// Note: this method should be called only inside an if (DpiHelper.IsScalingRequired) clause
        /// </summary>
        /// <param name="value">The vertical value in logical units</param>
        /// <returns>The vertical value in device units</returns>
        public static int LogicalToDeviceUnitsY(int value) {
            return (int)Math.Round(LogicalToDeviceUnitsScalingFactorY * (double)value);
        }

        /// <summary>
        /// Returns a new Size with the input's
        /// dimensions converted from logical units to device units.
        /// Note: this method should be called only inside an if (DpiHelper.IsScalingRequired) clause
        /// </summary>
        /// <param name="logicalSize">Size in logical units</param>
        /// <returns>Size in device units</returns>
        public static Size LogicalToDeviceUnits(Size logicalSize)
        {
            return new Size(LogicalToDeviceUnitsX(logicalSize.Width),
                            LogicalToDeviceUnitsY(logicalSize.Height));
        }

        /// <summary>
        /// Create and return a new bitmap scaled to the specified size.
        /// Note: this method should be called only inside an if (DpiHelper.IsScalingRequired) clause
        /// </summary>
        /// <param name="logicalImage">The image to scale from logical units to device units</param>
        /// <param name="targetImageSize">The size to scale image to</param>
        public static Bitmap CreateResizedBitmap(Bitmap logicalImage, Size targetImageSize)
        {
            if (logicalImage == null)
            {
                return null;
            }

            return ScaleBitmapToSize(logicalImage, targetImageSize);
        }

        /// <summary>
        /// Create a new bitmap scaled for the device units.
        /// When displayed on the device, the scaled image will have same size as the original image would have when displayed at 96dpi.
        /// Note: this method should be called only inside an if (DpiHelper.IsScalingRequired) clause
        /// </summary>
        /// <param name="logicalBitmap">The image to scale from logical units to device units</param>
        public static void ScaleBitmapLogicalToDevice(ref Bitmap logicalBitmap)
        {
            if (logicalBitmap == null) 
            {
                return;
            }
            Bitmap deviceBitmap = CreateScaledBitmap(logicalBitmap);
            if (deviceBitmap != null)
            {
                logicalBitmap.Dispose();
                logicalBitmap = deviceBitmap;
            }
        }

        // This method is used only in System.Design, thus excluding the rest.
        // This is particularly important for System.Drawing, which should not depend 
        // on System.Windows.Forms assembly, where "Button" type is defined. 
#if (!DRAWING_NAMESPACE && !DRAWINGDESIGN_NAMESPACE && !WINFORMS_NAMESPACE)
        /// <summary>
        /// Create a new button bitmap scaled for the device units. 
        /// Note: original image might be disposed.
        /// Note: this method should be called only inside an if (DpiHelper.IsScalingRequired) clause
        /// </summary>
        /// <param name="button">button with an image, image size is defined in logical units</param>
        public static void ScaleButtonImageLogicalToDevice(Button button)
        {
            if (button == null)
            {
                return;
            }
            Bitmap buttonBitmap = button.Image as Bitmap;
            if (buttonBitmap == null)
            {
                return;
            }
            Bitmap deviceBitmap = CreateScaledBitmap(buttonBitmap);
            button.Image.Dispose();
            button.Image = deviceBitmap;
        }
#endif
    }
}
