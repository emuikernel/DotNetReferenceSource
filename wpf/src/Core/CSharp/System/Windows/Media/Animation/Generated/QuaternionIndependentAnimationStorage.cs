//---------------------------------------------------------------------------
//
// <copyright file="QuaternionIndependentAnimationStorage.cs" company="Microsoft">
//    Copyright (C) Microsoft Corporation.  All rights reserved.
// </copyright>
//
// This file was generated, please do not edit it directly.
// 
// This file was generated from the codegen template located at:
//     wpf\src\Graphics\codegen\mcg\generators\AnimationResourceTemplate.cs
//
// Please see http://wiki/default.aspx/Microsoft.Projects.Avalon/MilCodeGen.html for more information.
//
//---------------------------------------------------------------------------

using System;
using MS.Internal;
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Threading;

using System.Windows.Media;
using System.Windows.Media.Composition;
using System.Windows.Media.Media3D;
using System.Security;
using System.Security.Permissions;

namespace System.Windows.Media.Animation
{
    internal class QuaternionIndependentAnimationStorage : IndependentAnimationStorage
    {
        //
        // Method which returns the DUCE type of this class.
        // The base class needs this type when calling CreateOrAddRefOnChannel.
        // By providing this via a virtual, we avoid a per-instance storage cost.
        //
        protected override DUCE.ResourceType ResourceType
        {
            get
            {
                return DUCE.ResourceType.TYPE_QUATERNIONRESOURCE;
            }
        }

        /// <SecurityNote>
        ///    Critical: This code is critical because it has unsafe code blocks
        ///    TreatAsSafe: This call is ok to expose. Channels can handle bad pointers
        ///  </SecurityNote>
        [SecurityCritical,SecurityTreatAsSafe]
        protected override void UpdateResourceCore(DUCE.Channel channel)
        {
            Debug.Assert(_duceResource.IsOnChannel(channel));
            DependencyObject dobj = ((DependencyObject) _dependencyObject.Target);

            // The dependency object was GCed, nothing to do here
            if (dobj == null)
            {
                return;
            }

            Quaternion tempValue = (Quaternion)dobj.GetValue(_dependencyProperty);

            DUCE.MILCMD_QUATERNIONRESOURCE data;
            data.Type = MILCMD.MilCmdQuaternionResource;
            data.Handle = _duceResource.GetHandle(channel);
            data.Value = CompositionResourceManager.QuaternionToMilQuaternionF(tempValue);

            unsafe
            {
                channel.SendCommand(
                    (byte*)&data,
                    sizeof(DUCE.MILCMD_QUATERNIONRESOURCE));
            }
        }
    }
}
