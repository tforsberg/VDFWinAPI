
//WinAPI_Kernel.h



External_Function WINAPI_GlobalMemoryStatus "GlobalMemoryStatus" Kernel32.Dll ;
    Pointer lpsMemoryStatus ;
    Returns Integer

External_Function WINAPI_GlobalMemoryStatusEx "GlobalMemoryStatusEx" Kernel32.Dll ;
    Pointer lpsMemoryStatusEx ;
    Returns Integer

External_Function WINAPI_GetTickCount "GetTickCount"  Kernel32.dll ;
    Returns DWord

External_Function WINAPI_GlobalAddAtom "GlobalAddAtomA" KERNEL32.DLL ;
    String sAtom ;
    Returns Integer

External_Function WINAPI_GlobalFindAtom "GlobalFindAtomA" KERNEL32.DLL ;
    String sAtom ;
    Returns Integer

External_Function WINAPI_GlobalDeleteAtom "GlobalDeleteAtom" KERNEL32.DLL ;
    Handle hAtom ;
    Returns Integer


Define MAX_COMPUTERNAME_LENGTH for 15

External_Function WINAPI_GetComputerNameA "GetComputerNameA" Kernel32.Dll ;
    Pointer lpComputerName ;
    DWord nNameSize ;
    Returns Integer

////  MBCS and Unicode Translation Flags.
//
Define WinAPI_MB_PRECOMPOSED       for     $00000001  // use precomposed chars
Define WinAPI_MB_COMPOSITE         for     $00000002  // use composite chars
Define WinAPI_MB_USEGLYPHCHARS     for     $00000004  // use glyph chars, not ctrl chars
Define WinAPI_MB_ERR_INVALID_CHARS for     $00000008  // error for invalid chars


Define WinAPI_WC_COMPOSITECHECK    for     $00000200  // convert composite to precomposed
Define WinAPI_WC_DISCARDNS         for     $00000010  // discard non-spacing chars
Define WinAPI_WC_SEPCHARS          for     $00000020  // generate separate chars
Define WinAPI_WC_DEFAULTCHAR       for     $00000040  // replace w/ default char

// http://msdn.microsoft.com/en-us/library/windows/desktop/dd319072%28v=vs.85%29.aspx
External_Function WinAPI_MultiByteToWideChar "MultiByteToWideChar" kernel32.dll ;
    Integer CodePage ;
    DWord   dwFlags ;
    Pointer lpMultiByte ;
    Integer cbMultiByte ;
    Pointer lpWideCharStr ;
    Integer cchWideChar ;
    Returns Integer


