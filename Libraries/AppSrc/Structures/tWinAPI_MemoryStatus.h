

Struct tWINAPI_MEMORYSTATUS
  DWord dwLength         // sizeof(MEMORYSTATUS)
  DWord dwMemoryLoad     // percent Of memory in use
  DWord dwTotalPhys      // bytes Of physical memory
  DWord dwAvailPhys      // free physical memory bytes
  DWord dwTotalPageFile  // bytes Of paging file
  DWord dwAvailPageFile  // free bytes Of paging file
  DWord dwTotalVirtual   // user bytes Of address space
  DWord dwAvailVirtual   // free user bytes
End_Struct // tWINAPI_MEMORYSTATUS
