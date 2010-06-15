
//WinAPI_Kernel.h

External_Function WINAPI_GlobalMemoryStatus "GlobalMemoryStatus" Kernel32.Dll ;
                  Pointer lpsMemoryStatus Returns Integer

External_Function WINAPI_GlobalMemoryStatusEx "GlobalMemoryStatusEx" Kernel32.Dll ;
                  Pointer lpsMemoryStatusEx Returns Integer
