#include "precomp.hxx"
#include "util2.h"
#include <wpfvcclr.h>


namespace MS { namespace Internal { namespace FontCache {

   

[System::Security::SecurityCritical]
bool Util2::GetRegistryKeyLastWriteTimeUtc(System::String ^ registryKey, [System::Runtime::InteropServices::Out] System::Int64 % lastWriteTime)
{
    HKEY hkey = NULL;

    pin_ptr<const wchar_t> registryKeyUnmanaged = CriticalPtrToStringChars(registryKey);

    if (::RegOpenKeyExW(HKEY_LOCAL_MACHINE, registryKeyUnmanaged, 0, KEY_QUERY_VALUE, &hkey) == ERROR_SUCCESS)
    {
        try
        {
            ::FILETIME fileTime = { 0 };

            if (::RegQueryInfoKey(hkey, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &fileTime) == ERROR_SUCCESS)
            {
                System::Int64 dt = ((System::Int64)fileTime.dwHighDateTime << 32) | ((System::Int64)fileTime.dwLowDateTime);
                System::DateTime ^ dateTime = System::DateTime::FromFileTimeUtc(dt);
                lastWriteTime = dateTime->Ticks;
                return true;
            }
        }
        finally
        {
            ::RegCloseKey(hkey);
        }
    }
    lastWriteTime = 0;
    return false;
}

}}}
