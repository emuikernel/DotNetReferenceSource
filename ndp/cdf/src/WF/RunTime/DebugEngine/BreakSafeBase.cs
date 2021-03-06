// Copyright (c) Microsoft Corp., 2004. All rights reserved.
#region Using directives

using System;
using System.Threading;

#endregion

namespace System.Workflow.Runtime.DebugEngine
{
    //
    // IMPORTANT: Do not edit this file without consulting Break Safe Synchronization.doc!
    //
    internal abstract class BreakSafeBase<T> where T : ICloneable, new()
    {
        #region Data members

        private volatile object currentData; // object because type parameters instances cannot be volatile.
        private T nonEEDataClone;
        private volatile bool nonEEDataConsistent;
        private volatile bool nonEEIgnoreUpdate;
        private Mutex nonEELock;
        private object controllerUpdateObject;
        private int controllerManagedThreadId;

        #endregion

        #region Methods and properties

        protected BreakSafeBase(int controllerManagedThreadId)
        {
            this.currentData = new T();
            this.nonEEDataClone = default(T);
            this.nonEEDataConsistent = false;
            this.nonEEIgnoreUpdate = false;
            this.nonEELock = new Mutex(false);
            this.controllerManagedThreadId = controllerManagedThreadId;
        }

        private bool IsEECall
        {
            get
            {
                return Thread.CurrentThread.ManagedThreadId == this.controllerManagedThreadId;
            }
        }

        protected object GetControllerUpdateObject()
        {
            return this.controllerUpdateObject;
        }

        protected void SetControllerUpdateObject(object updateObject)
        {
            // Ensure that the access to the variable this.controllerUpdateObject is exactly one instruction - StFld in this case.
            this.controllerUpdateObject = updateObject;
        }

        protected T GetReaderData()
        {
            // Ensure that the access to the variable this.currentData is exactly one instruction - LdFld in this case.
            object data = this.currentData;
            return (T)data;
        }

        protected T GetWriterData()
        {
            if (IsEECall)
            {
                if (this.nonEEDataConsistent && this.nonEEIgnoreUpdate == false)
                {
                    // Modify the object referred to by this.currentData directly.
                    return (T)this.currentData;
                }
                else
                {
                    // Clone and discard any non-EE update.
                    this.nonEEIgnoreUpdate = true;
                    return (T)((T)this.currentData).Clone();
                }
            }
            else
            {
                // Reset the flag so that we can keep track of any concurrent EE updates.
                this.nonEEIgnoreUpdate = false;

                // Ensure that the access to the variable this.currentData is exactly one instruction - LdFld in this case.
                object data = this.currentData;
                return (T)((T)data).Clone();
            }
        }

        protected void SaveData(T data)
        {
            if (IsEECall)
                this.currentData = data;
            else
            {
                // The non-EE clone is now in a consistent state.
                this.nonEEDataClone = data;
                this.nonEEDataConsistent = true;

                this.controllerUpdateObject = null;

                // If an EE call has already modified the data, it would have also performed current non-EE update
                // when the debugger entered break mode. So discard the update. Asl ensure that the access to the 
                // variable this.currentData is exactly one instruction - StFld in this case.
                if (this.nonEEIgnoreUpdate == false)
                    this.currentData = data;

                // Clear the flag because we will clear the this.nonEEDataClone.
                this.nonEEDataConsistent = false;
                this.nonEEDataClone = default(T);
            }
        }

        protected void Lock()
        {
            // Serialize non-EE calls and do not invoke synchronization primitives during FuncEval.
            if (!IsEECall)
                this.nonEELock.WaitOne();
        }

        protected void Unlock()
        {
            // Serialize non-EE calls and do not invoke synchronization primitives during FuncEval.
            if (!IsEECall)
                this.nonEELock.ReleaseMutex();
        }

        #endregion
    }
}
