
Use VDFD_Commands.pkg

#COMMAND WinAPI_External_Function
  External_Function efWinApi_!1 "!1" !2 !3 !4 !5 !6 !7 !8 !9
#ENDCOMMAND


WinApi_External_Function SHBrowseForFolder shell32.dll ;
                         Pointer lpdWord Returns DWord
                       
WinApi_External_Function SHGetPathFromIDList shell32.dll ;
                         Pointer pidList Pointer lpBuffer Returns DWord

// C-Structure
//typedef struct _browseinfo {
//    HWND hwndOwner;
//    LPCITEMIDLIST pidlRoot;
//    LPSTR pszDisplayName;
//    LPCSTR lpszTitle;
//    UINT ulFlags;
//    BFFCALLBACK lpfn;
//    LPARAM lParam;
//    int iImage;
//} BROWSEINFO, *PBROWSEINFO, *LPBROWSEINFO;

//declare C structure struct_browseinfo
//as documented in MSDN under Windows Shell API

// old style structure
//Type tBrowseInfo  // Defined in cWindowsEx FrameWork
//    Field tBrowseInfo.hWndOwner as Handle
//    Field tBrowseInfo.pIDLRoot as Pointer
//    Field tBrowseInfo.pszDisplayName as Pointer
//    Field tBrowseInfo.lpszTitle as Pointer
//    Field tBrowseInfo.ulFlags as DWord
//    Field tBrowseInfo.lpfnCallback as Pointer
//    Field tBrowseInfo.lParam as DWord
//    Field tBrowseInfo.iImage as DWord
//End_Type  // tBrowseInfo

// New Structure
Struct tWinAPI_BrowseInfo
  Handle hWndOwner
  Pointer pIDLRoot
  Pointer pszDisplayName
  Pointer lpszTitle
  DWord ulFlags
  Pointer lpfnCallback
  DWord lParam
  DWord iImage
End_Struct