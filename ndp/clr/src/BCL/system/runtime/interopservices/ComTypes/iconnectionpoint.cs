// ==++==
// 
//   Copyright (c) Microsoft Corporation.  All rights reserved.
// 
// ==--==
/*=============================================================================
**
** Class: IConnectionPoint
**
**
** Purpose: IConnectionPoint interface definition.
**
**
=============================================================================*/

namespace System.Runtime.InteropServices.ComTypes
{
    using System;

    [Guid("B196B286-BAB4-101A-B69C-00AA00341D07")]
    [InterfaceTypeAttribute(ComInterfaceType.InterfaceIsIUnknown)]
    [ComImport]
    public interface IConnectionPoint
    {        
        void GetConnectionInterface(out Guid pIID);
        void GetConnectionPointContainer(out IConnectionPointContainer ppCPC);
        void Advise([MarshalAs(UnmanagedType.Interface)] Object pUnkSink, out int pdwCookie);
        void Unadvise(int dwCookie);
        void EnumConnections(out IEnumConnections ppEnum);
    }
}
