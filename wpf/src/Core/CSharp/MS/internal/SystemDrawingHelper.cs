//---------------------------------------------------------------------------
//
// <copyright file="SystemDrawingHelper.cs" company="Microsoft">
//    Copyright (C) Microsoft Corporation.  All rights reserved.
// </copyright>
//
// Description: Helper methods for code that uses types from System.Drawing.
//
//---------------------------------------------------------------------------

using System;
using System.IO;
using System.Security;

namespace MS.Internal
{
    internal static class SystemDrawingHelper
    {
        // return true if the data is a bitmap
        internal static bool IsBitmap(object data)
        {
            SystemDrawingExtensionMethods extensions = AssemblyHelper.ExtensionsForSystemDrawing();
            return (extensions != null) ? extensions.IsBitmap(data) : false;
        }

        // return true if the data is an Image
        internal static bool IsImage(object data)
        {
            SystemDrawingExtensionMethods extensions = AssemblyHelper.ExtensionsForSystemDrawing();
            return (extensions != null) ? extensions.IsImage(data) : false;
        }

        // return true if the data is a graphics metafile
        internal static bool IsMetafile(object data)
        {
            SystemDrawingExtensionMethods extensions = AssemblyHelper.ExtensionsForSystemDrawing();
            return (extensions != null) ? extensions.IsMetafile(data) : false;
        }

        // return the handle from a metafile
        /// <SecurityNote>
        ///     Critical:  This code returns a handle to an unmanaged object
        /// </SecurityNote>
        [SecurityCritical]
        internal static IntPtr GetHandleFromMetafile(Object data)
        {
            SystemDrawingExtensionMethods extensions = AssemblyHelper.ExtensionsForSystemDrawing();
            return (extensions != null) ? extensions.GetHandleFromMetafile(data) : IntPtr.Zero;
        }

        // Get the metafile from the handle of the enhanced metafile.
        internal static Object GetMetafileFromHemf(IntPtr hMetafile)
        {
            SystemDrawingExtensionMethods extensions = AssemblyHelper.ExtensionsForSystemDrawing(force:true);
            return (extensions != null) ? extensions.GetMetafileFromHemf(hMetafile) : null;
        }

        // Get a bitmap from the given data (either BitmapSource or Bitmap)
        internal static object GetBitmap(object data)
        {
            SystemDrawingExtensionMethods extensions = AssemblyHelper.ExtensionsForSystemDrawing(force:true);
            return (extensions != null) ? extensions.GetBitmap(data) : null;
        }

        // Get a bitmap handle from the given data (either BitmapSource or Bitmap)
        // Also return its width and height.
        /// <SecurityNote>
        ///     Critical:  This code returns a handle to an unmanaged object
        /// </SecurityNote>
        [SecurityCritical]
        internal static IntPtr GetHBitmap(object data, out int width, out int height)
        {
            SystemDrawingExtensionMethods extensions = AssemblyHelper.ExtensionsForSystemDrawing(force:true);
            if (extensions != null)
            {
                return extensions.GetHBitmap(data, out width, out height);
            }

            width = height = 0;
            return IntPtr.Zero;
        }

        // Get a bitmap handle from a Bitmap
        /// <SecurityNote>
        ///     Critical:  This code returns a handle to an unmanaged object
        /// </SecurityNote>
        [SecurityCritical]
        internal static IntPtr GetHBitmapFromBitmap(object data)
        {
            SystemDrawingExtensionMethods extensions = AssemblyHelper.ExtensionsForSystemDrawing();
            return (extensions != null) ? extensions.GetHBitmapFromBitmap(data) : IntPtr.Zero;
        }

        // Convert a metafile to HBitmap
        /// <SecurityNote>
        ///     Critical:  This code returns a handle to an unmanaged object
        /// </SecurityNote>
        [SecurityCritical]
        internal static IntPtr ConvertMetafileToHBitmap(IntPtr handle)
        {
            SystemDrawingExtensionMethods extensions = AssemblyHelper.ExtensionsForSystemDrawing(force:true);
            return (extensions != null) ? extensions.ConvertMetafileToHBitmap(handle) : IntPtr.Zero;
        }

        // return a stream for the ExifUserComment in the given Gif
        internal static Stream GetCommentFromGifStream(Stream stream)
        {
            SystemDrawingExtensionMethods extensions = AssemblyHelper.ExtensionsForSystemDrawing(force:true);
            return (extensions != null) ? extensions.GetCommentFromGifStream(stream) : null;
        }

        // return a new safe-printing permission
        internal static CodeAccessPermission NewSafePrintingPermission()
        {
            SystemDrawingExtensionMethods extensions = AssemblyHelper.ExtensionsForSystemDrawing(force:true);
            return (extensions != null) ? extensions.NewSafePrintingPermission() : null;
        }

        // return a new default-printing permission
        internal static CodeAccessPermission NewDefaultPrintingPermission()
        {
            SystemDrawingExtensionMethods extensions = AssemblyHelper.ExtensionsForSystemDrawing(force:true);
            return (extensions != null) ? extensions.NewDefaultPrintingPermission() : null;
        }

        // write a metafile stream to the output stream in PNG format
        internal static void SaveMetafileToImageStream(MemoryStream metafileStream, Stream imageStream)
        {
            SystemDrawingExtensionMethods extensions = AssemblyHelper.ExtensionsForSystemDrawing(force:true);
            if (extensions != null)
            {
                extensions.SaveMetafileToImageStream(metafileStream, imageStream);
            }
        }

        //returns bitmap snapshot of selected area
        //this code takes a BitmapImage and converts it to a Bitmap so it can be put on the clipboard
        /// <SecurityNote>
        ///    Critical: This calls into copy pixels which is link demand protected. It initially had a demand and this
        ///              code did not work in PT
        /// </SecurityNote>
        [SecurityCritical]
        internal static object GetBitmapFromBitmapSource(object source)
        {
            SystemDrawingExtensionMethods extensions = AssemblyHelper.ExtensionsForSystemDrawing(force:true);
            return (extensions != null) ? extensions.GetBitmapFromBitmapSource(source) : null;
        }
    }
}
