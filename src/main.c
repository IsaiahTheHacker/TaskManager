//
// Created by milkt on 19/07/2025.
//
#include <stdio.h>
#include <sysinfoapi.h>
#include <windows.h>

const char* Arch()
{
    SYSTEM_INFO si;
    GetNativeSystemInfo(&si);

    WORD cool = si.wProcessorArchitecture;
    if (cool == 9) {
        return "x64 AMD / INTEL";
    } else if (cool == 5)
    {
        return "ARM";
    } else if (cool == 12)
    {
        return "ARM64";
    } else if (cool == 6)
    {
        return "Intel Itanium-based";
    } else if (cool == 0)
    {
        return "x86";
    } else {
        return "Unknown";
    }
}

int main()
{


    printf(Arch());
    return 0;
}