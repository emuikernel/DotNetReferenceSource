//---------------------------------------------------------------------------
//
// <copyright file="RectValueSerializer.cs" company="Microsoft">
//    Copyright (C) Microsoft Corporation.  All rights reserved.
// </copyright>
//
// This file was generated, please do not edit it directly.
//
// Please see http://wiki/default.aspx/Microsoft.Projects.Avalon/MilCodeGen.html for more information.
//
//---------------------------------------------------------------------------

using MS.Internal;
using MS.Internal.WindowsBase;
using System;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics;
using System.Globalization;
using System.Reflection;
using System.Runtime.InteropServices;
using System.ComponentModel.Design.Serialization;
using System.Windows.Markup;
using System.Windows.Converters;
using System.Windows;
#pragma warning disable 1634, 1691  // suppressing PreSharp warnings

namespace System.Windows.Converters
{
    /// <summary>
    /// RectValueSerializer - ValueSerializer class for converting instances of strings to and from Rect instances
    /// This is used by the MarkupWriter class.
    /// </summary>
    public class RectValueSerializer : ValueSerializer 
    {
        /// <summary>
        /// Returns true.
        /// </summary>
        public override bool CanConvertFromString(string value, IValueSerializerContext context)
        {
            return true;
        }

        /// <summary>
        /// Returns true if the given value can be converted into a string
        /// </summary>
        public override bool CanConvertToString(object value, IValueSerializerContext context)
        {

            // Validate the input type
            if (!(value is Rect))
            {
                return false;
            }

            return true;

        }

        /// <summary>
        /// Converts a string into a Rect.
        /// </summary>
        public override object ConvertFromString(string value, IValueSerializerContext context)
        {
            if (value != null)
            {
                return Rect.Parse(value );
            }
            else
            {
                return base.ConvertFromString( value, context );
            }

        }

        /// <summary>
        /// Converts the value into a string.
        /// </summary>
        public override string ConvertToString(object value, IValueSerializerContext context)
        {
            if (value is Rect)
            {
                Rect instance = (Rect) value;


                #pragma warning suppress 6506 // instance is obviously not null
                return instance.ConvertToString(null, System.Windows.Markup.TypeConverterHelper.InvariantEnglishUS);
            }

            return base.ConvertToString(value, context);
        }
    }




}
