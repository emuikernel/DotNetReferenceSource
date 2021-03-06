//------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
//------------------------------------------------------------
namespace System.Runtime.DurableInstancing
{
    using System;
    using System.Runtime.Serialization;
    using System.Security;
    using System.Xml.Linq;

    [Serializable]
    public class InstanceCompleteException : InstancePersistenceCommandException
    {
        public InstanceCompleteException()
            : this(SRCore.InstanceCompleteDefault, null)
        {
        }

        public InstanceCompleteException(string message)
            : this(message, null)
        {
        }

        public InstanceCompleteException(string message, Exception innerException)
            : base(message, innerException)
        {
        }

        public InstanceCompleteException(XName commandName, Guid instanceId)
            : this(commandName, instanceId, null)
        {
        }

        public InstanceCompleteException(XName commandName, Guid instanceId, Exception innerException)
            : this(commandName, instanceId, ToMessage(instanceId), innerException)
        {
        }

        public InstanceCompleteException(XName commandName, Guid instanceId, string message, Exception innerException)
            : base(commandName, instanceId, message, innerException)
        {
        }

        [SecurityCritical]
        protected InstanceCompleteException(SerializationInfo info, StreamingContext context)
            : base(info, context)
        {
        }

        static string ToMessage(Guid instanceId)
        {
            if (instanceId != Guid.Empty)
            {
                return SRCore.InstanceCompleteSpecific(instanceId);
            }
            return SRCore.InstanceCompleteDefault;
        }
    }
}
