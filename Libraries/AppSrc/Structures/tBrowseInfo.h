
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

Type tBrowseInfo  // Defined in cWindowsEx FrameWork
    Field tBrowseInfo.hWndOwner as Handle
    Field tBrowseInfo.pIDLRoot as Pointer
    Field tBrowseInfo.pszDisplayName as Pointer
    Field tBrowseInfo.lpszTitle as Pointer
    Field tBrowseInfo.ulFlags as DWord
    Field tBrowseInfo.lpfnCallback as Pointer
    Field tBrowseInfo.lParam as DWord
    Field tBrowseInfo.iImage as DWord
End_Type  // tBrowseInfo
