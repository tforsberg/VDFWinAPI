
// http://msdn.microsoft.com/en-us/library/aa366770(v=VS.85).aspx

Use VDFWinApi.h

Struct tWinAPI_MemoryStatusEx
  DWord     dwLength
  DWord     dwMemoryLoad
  DWORDLONG ullTotalPhys
  DWORDLONG ullAvailPhys
  DWORDLONG ullTotalPageFile
  DWORDLONG ullAvailPageFile
  DWORDLONG ullTotalVirtual
  DWORDLONG ullAvailVirtual
  DWORDLONG ullAvailExtendedVirtual
End_Struct //MEMORYSTATUSEX, *LPMEMORYSTATUSEX;
