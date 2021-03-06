#ifndef __NATIVE_POINTER_WRAPPER_H
#define __NATIVE_POINTER_WRAPPER_H

#include "Common.h"

using namespace System::Runtime::InteropServices;
using namespace System::Runtime::ConstrainedExecution;

namespace MS { namespace Internal { namespace Text { namespace TextInterface { namespace Generics
{
    template <class T>
    private ref class NativePointerCriticalHandle abstract : public CriticalHandle
    {
        public:
            [SecurityCritical]
            NativePointerCriticalHandle(void* pNativePointer);

            virtual property bool IsInvalid
            {
                [SecuritySafeCritical]
                [ReliabilityContract(Consistency::WillNotCorruptState, Cer::Success)]
                bool get() override;
            }

            property T* Value
            {
                [SecurityCritical]
                T* get();
            }
    };

    template <class T>
    private ref class NativeIUnknownWrapper : public NativePointerCriticalHandle<T>
    {
        protected:

            [SecuritySafeCritical]
            [ReliabilityContract(Consistency::WillNotCorruptState, Cer::Success)]
            virtual bool ReleaseHandle() override;

        public:
            [SecurityCritical]
            NativeIUnknownWrapper(IUnknown* pNativePointer);
    };

    template <class T>
    private ref class NativePointerWrapper : public NativePointerCriticalHandle<T>
    {
        protected:

            [SecuritySafeCritical]
            [ReliabilityContract(Consistency::WillNotCorruptState, Cer::Success)]
            virtual bool ReleaseHandle() override;

        public:
            [SecurityCritical]
            NativePointerWrapper(T* pNativePointer);
    };

}}}}}//MS::Internal::Text::TextInterface::Generics

#endif //__NATIVE_POINTER_WRAPPER_H
