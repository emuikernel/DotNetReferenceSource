//------------------------------------------------------------------------------
// <copyright file="TimersDescriptionAttribute.cs" company="Microsoft">
//     Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>                                                                
//------------------------------------------------------------------------------

namespace System.Timers{


    using System;
    using System.ComponentModel;   

    /// <devdoc>
    ///     DescriptionAttribute marks a property, event, or extender with a
    ///     description. Visual designers can display this description when referencing
    ///     the member.
    /// </devdoc>
    [AttributeUsage(AttributeTargets.All)]
    public class TimersDescriptionAttribute : DescriptionAttribute {

        private bool replaced = false;

        /// <devdoc>
        ///     Constructs a new sys description.
        /// </devdoc>
        public TimersDescriptionAttribute(string description) : base(description) {
        }

        /// <devdoc>
        ///     Retrieves the description text.
        /// </devdoc>
        public override string Description {
            get {
                if (!replaced) {
                    replaced = true;
                    DescriptionValue = SR.GetString(base.Description);
                }
                return base.Description;
            }
        }
    }
}
