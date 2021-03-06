// ==++==
// 
//   Copyright (c) Microsoft Corporation.  All rights reserved.
// 
// ==--==
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//
// MemberTypes is an bit mask marking each type of Member that is defined as
// 
// <OWNER>WESU</OWNER>
//    a subclass of MemberInfo.  These are returned by MemberInfo.MemberType and 
//    are useful in switch statements.
//
// <EMAIL>Author: darylo</EMAIL>
// Date: July 99
//
namespace System.Reflection {
    
    using System;
    // This Enum matchs the CorTypeAttr defined in CorHdr.h
    [Serializable]
    [Flags()]
    [System.Runtime.InteropServices.ComVisible(true)]
    public enum MemberTypes
    {
        // The following are the known classes which extend MemberInfo
        Constructor     = 0x01,
        Event           = 0x02,
        Field           = 0x04,
        Method          = 0x08,
        Property        = 0x10,
        TypeInfo        = 0x20,
        Custom          = 0x40,
        NestedType      = 0x80,
        All             = Constructor | Event | Field | Method | Property | TypeInfo | NestedType,
    }
}
