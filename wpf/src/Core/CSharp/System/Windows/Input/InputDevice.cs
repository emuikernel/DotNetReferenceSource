
using System.Windows.Threading;

using System;

namespace System.Windows.Input
{
    /// <summary>
    ///     Provides the base class for all input devices.
    /// </summary>
    public abstract class InputDevice : DispatcherObject
    {
        /// <summary>
        ///     Constructs an instance of the InputDevice class.
        /// </summary>
        protected InputDevice()
        {
            // Only we can create these.
            // 
        }

        /// <summary>
        ///     Returns the element that input from this device is sent to.
        /// </summary>
        public abstract IInputElement Target{get;}

        /// <summary>
        ///     Returns the PresentationSource that is reporting input for this device.
        /// </summary>
        public abstract PresentationSource ActiveSource { get; }
    }
}
