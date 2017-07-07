
//Use cWinControl.pkg

Define WM_MOUSELEAVE            for |CI$02A3
Define WM_MOUSEHOVER            for |CI$02A1
Define WM_MOUSEWHEEL            for |CI$020A


Define LVM_FIRST               for |CI$1000      // ListView messages
Define LVN_FIRST               for (-100)        // listview

Define NM_FIRST                for 0
Define NM_SETFOCUS             for (NM_FIRST - 7)
Define NM_KILLFOCUS            for (NM_FIRST - 8)

Define MAXUINT for $FFFFFFFF

Type tLVITEM
    Field tLVITEM.mask as UInteger
    Field tLVITEM.iItem as Integer
    Field tLVITEM.iSubItem as Integer
    Field tLVITEM.state as UInteger
    Field tLVITEM.stateMask as UInteger
    Field tLVITEM.pszText as Pointer
    Field tLVITEM.cchTextMax as Integer
    Field tLVITEM.iImage as Integer
    Field tLVITEM.lParam as DWord
    Field tLVITEM.iIndent as Integer
End_Type

Define LPSTR_TEXTCALLBACKA     for (-1)
Define LPSTR_TEXTCALLBACK      for LPSTR_TEXTCALLBACKA


Define LVM_FIRST               for |CI$1000
Define LVN_FIRST               for -100       // listview
Define LVN_LAST                for -199


Define LVS_ICON                for |CI$0000
Define LVS_REPORT              for |CI$0001
Define LVS_SMALLICON           for |CI$0002
Define LVS_LIST                for |CI$0003
Define LVS_TYPEMASK            for |CI$0003
Define LVS_SINGLESEL           for |CI$0004
Define LVS_SHOWSELALWAYS       for |CI$0008
Define LVS_SORTASCENDING       for |CI$0010
Define LVS_SORTDESCENDING      for |CI$0020
Define LVS_SHAREIMAGELISTS     for |CI$0040
Define LVS_NOLABELWRAP         for |CI$0080
Define LVS_AUTOARRANGE         for |CI$0100
Define LVS_EDITLABELS          for |CI$0200
Define LVS_OWNERDATA           for |CI$1000
Define LVS_NOSCROLL            for |CI$2000
Define LVS_TYPESTYLEMASK       for |CI$FC00
Define LVS_ALIGNTOP            for |CI$0000
Define LVS_ALIGNLEFT           for |CI$0800
Define LVS_ALIGNMASK           for |CI$0c00
Define LVS_OWNERDRAWFIXED      for |CI$0400
Define LVS_NOCOLUMNHEADER      for |CI$4000
Define LVS_NOSORTHEADER        for |CI$8000

Define LVM_SETUNICODEFORMAT    for CCM_SETUNICODEFORMAT
Define LVM_GETUNICODEFORMAT    for CCM_GETUNICODEFORMAT
Define LVM_GETBKCOLOR          for (LVM_FIRST + 0)
Define LVM_SETBKCOLOR          for (LVM_FIRST + 1)
Define LVM_GETIMAGELIST        for (LVM_FIRST + 2)

Define LVSIL_NORMAL            for 0
Define LVSIL_SMALL             for 1
Define LVSIL_STATE             for 2

Define LVM_SETIMAGELIST        for (LVM_FIRST + 3)
Define LVM_GETITEMCOUNT        for (LVM_FIRST + 4)

Define LVIF_TEXT               for |CI$0001
Define LVIF_IMAGE              for |CI$0002
Define LVIF_PARAM              for |CI$0004
Define LVIF_STATE              for |CI$0008
Define LVIF_INDENT             for |CI$0010
Define LVIF_NORECOMPUTE        for |CI$0800
define LVIF_COLUMNS            for |CI$00000200

Define LVIS_FOCUSED            for |CI$0001
Define LVIS_SELECTED           for |CI$0002
Define LVIS_CUT                for |CI$0004
Define LVIS_DROPHILITED        for |CI$0008
Define LVIS_ACTIVATING         for |CI$0020
Define LVIS_OVERLAYMASK        for |CI$0F00
Define LVIS_STATEIMAGEMASK     for |CI$F000

Define I_INDENTCALLBACK        for (-1)

Define LVM_GETCOLUMNA          for (LVM_FIRST + 25)
Define LVM_GETCOLUMN           for LVM_GETCOLUMNA

Define LVM_SETCOLUMNA          for (LVM_FIRST + 26)
Define LVM_SETCOLUMN           for LVM_SETCOLUMNA

Define LVM_INSERTCOLUMNA       for (LVM_FIRST + 27)
Define LVM_INSERTCOLUMN        for LVM_INSERTCOLUMNA

Define LVM_DELETECOLUMN        for (LVM_FIRST + 28)
Define LVM_GETCOLUMNWIDTH      for (LVM_FIRST + 29)

Define LVSCW_AUTOSIZE              for -1
Define LVSCW_AUTOSIZE_USEHEADER    for -2
Define LVM_SETCOLUMNWIDTH          for (LVM_FIRST + 30)

Define LVM_GETHEADER           for (LVM_FIRST + 31)
Define LVM_CREATEDRAGIMAGE     for (LVM_FIRST + 33)
Define LVM_GETVIEWRECT         for (LVM_FIRST + 34)
Define LVM_GETTEXTCOLOR        for (LVM_FIRST + 35)
Define LVM_SETTEXTCOLOR        for (LVM_FIRST + 36)
Define LVM_GETTEXTBKCOLOR      for (LVM_FIRST + 37)
Define LVM_SETTEXTBKCOLOR      for (LVM_FIRST + 38)
Define LVM_GETTOPINDEX         for (LVM_FIRST + 39)
Define LVM_GETCOUNTPERPAGE     for (LVM_FIRST + 40)
Define LVM_GETORIGIN           for (LVM_FIRST + 41)
Define LVM_UPDATE              for (LVM_FIRST + 42)
Define LVM_SETITEMSTATE        for (LVM_FIRST + 43)
Define LVM_GETITEMSTATE        for (LVM_FIRST + 44)
Define LVM_GETITEMTEXTA        for (LVM_FIRST + 45)
Define LVM_GETITEMTEXT         for LVM_GETITEMTEXTA
Define LVM_SETITEMTEXTA        for (LVM_FIRST + 46)
Define LVM_SETITEMTEXT         for LVM_SETITEMTEXTA

Define LVM_SETITEMCOUNT        for (LVM_FIRST + 47)
Define LVM_SORTITEMS           for (LVM_FIRST + 48)
Define LVM_SETITEMPOSITION32   for (LVM_FIRST + 49)
Define LVM_GETSELECTEDCOUNT    for (LVM_FIRST + 50)
Define LVM_GETITEMSPACING      for (LVM_FIRST + 51)
Define LVM_GETISEARCHSTRINGA   for (LVM_FIRST + 52)
Define LVM_GETISEARCHSTRING    for LVM_GETISEARCHSTRINGA
Define LVM_SETICONSPACING      for (LVM_FIRST + 53)
Define LVM_SETEXTENDEDLISTVIEWSTYLE for (LVM_FIRST + 54)   // optional wParam == mask
Define LVM_GETEXTENDEDLISTVIEWSTYLE for (LVM_FIRST + 55)

Define LVM_GETSUBITEMRECT      for (LVM_FIRST + 56)
Define LVM_SUBITEMHITTEST      for (LVM_FIRST + 57)
Define LVM_SETCOLUMNORDERARRAY for (LVM_FIRST + 58)
Define LVM_GETCOLUMNORDERARRAY for (LVM_FIRST + 59)
Define LVM_SETHOTITEM          for (LVM_FIRST + 60)
Define LVM_GETHOTITEM          for (LVM_FIRST + 61)
Define LVM_SETHOTCURSOR        for (LVM_FIRST + 62)
Define LVM_GETHOTCURSOR        for (LVM_FIRST + 63)
Define LVM_APPROXIMATEVIEWRECT for (LVM_FIRST + 64)

Define LV_MAX_WORKAREAS         for 16                          
Define LVM_SETWORKAREAS         for (LVM_FIRST + 65)
Define LVM_GETWORKAREAS         for (LVM_FIRST + 70)
Define LVM_GETNUMBEROFWORKAREAS for (LVM_FIRST + 73)
Define LVM_GETSELECTIONMARK     for (LVM_FIRST + 66)
Define LVM_SETSELECTIONMARK     for (LVM_FIRST + 67)
Define LVM_SETHOVERTIME         for (LVM_FIRST + 71)
Define LVM_GETHOVERTIME         for (LVM_FIRST + 72)
Define LVM_SETTOOLTIPS          for (LVM_FIRST + 74)
Define LVM_GETTOOLTIPS          for (LVM_FIRST + 78)
Define LVM_GETGROUPSTATE        for (LVM_FIRST + 92)
Define LVM_GETFOCUSEDGROUP      for (LVM_FIRST + 93)
Define LVSICF_NOINVALIDATEALL   for |CI$00000001
Define LVSICF_NOSCROLL          for |CI$00000002

//**************Extended ListView Styles***************************
Define LVS_EX_GRIDLINES        for |CI$00000001
Define LVS_EX_SUBITEMIMAGES    for |CI$00000002
Define LVS_EX_CHECKBOXES       for |CI$00000004
Define LVS_EX_TRACKSELECT      for |CI$00000008
Define LVS_EX_HEADERDRAGDROP   for |CI$00000010
Define LVS_EX_FULLROWSELECT    for |CI$00000020 // applies to report mode only
Define LVS_EX_ONECLICKACTIVATE for |CI$00000040
Define LVS_EX_TWOCLICKACTIVATE for |CI$00000080
Define LVS_EX_FLATSB           for |CI$00000100
Define LVS_EX_REGIONAL         for |CI$00000200
Define LVS_EX_WHAT             for |CI$00000300
Define LVS_EX_INFOTIP          for |CI$00000400 // listview does InfoTips for you
Define LVS_EX_UNDERLINEHOT     for |CI$00000800
Define LVS_EX_UNDERLINECOLD    for |CI$00001000
Define LVS_EX_MULTIWORKAREAS   for |CI$00002000

Define LVS_EX_JUSTIFYCOLUMNS        for |CI$00200000  // Icons are lined up in columns that use up the whole view area.
Define LVS_EX_TRANSPARENTBKGND      for |CI$00400000  // Background is painted by the parent via WM_PRINTCLIENT
Define LVS_EX_TRANSPARENTSHADOWTEXT for |CI$00800000  // Enable shadow text on transparent backgrounds only (useful with bitmaps)
Define LVS_EX_AUTOAUTOARRANGE       for |CI$01000000  // Icons automatically arrange if no icon positions have been set
Define LVS_EX_HEADERINALLVIEWS      for |CI$02000000  // Display column header in all view modes
Define LVS_EX_AUTOCHECKSELECT       for |CI$08000000
Define LVS_EX_AUTOSIZECOLUMNS       for |CI$10000000
Define LVS_EX_COLUMNSNAPPOINTS      for |CI$40000000
Define LVS_EX_COLUMNOVERFLOW        for |CI$80000000

Define LVS_EX_LABELTIP         for |CI$00004000 // listview unfolds partly hidden labels if it does not have infotip text
Define LVS_EX_BORDERSELECT     for |CI$00008000 // border selection style instead of highlight

Define LVS_EX_DOUBLEBUFFER     for |CI$00010000
Define LVS_EX_HIDELABELS       for |CI$00020000
Define LVS_EX_SINGLEROW        for |CI$00040000
Define LVS_EX_SNAPTOGRID       for |CI$00080000  // Icons automatically snap to grid.
Define LVS_EX_SIMPLESELECT     for |CI$00100000  // Also changes overlay ren

Define LVM_FINDITEMA           for (LVM_FIRST + 13)
Define LVM_FINDITEM           for LVM_FINDITEMA
Define LVIR_BOUNDS             for 0
Define LVIR_ICON               for 1
Define LVIR_LABEL              for 2
Define LVIR_SELECTBOUNDS       for 3

Define LVM_GETITEMRECT         for (LVM_FIRST + 14)
Define LVM_SETITEMPOSITION     for (LVM_FIRST + 15)
Define LVM_GETITEMPOSITION     for (LVM_FIRST + 16)
Define LVM_GETSTRINGWIDTHA     for (LVM_FIRST + 17)
Define LVM_GETSTRINGWIDTH     for LVM_GETSTRINGWIDTHA

Define LVHT_NOWHERE            for |CI$0001
Define LVHT_ONITEMICON         for |CI$0002
Define LVHT_ONITEMLABEL        for |CI$0004
Define LVHT_ONITEMSTATEICON    for |CI$0008
Define LVHT_ONITEM             for (LVHT_ONITEMICON ior LVHT_ONITEMLABEL ior LVHT_ONITEMSTATEICON)

Define LVHT_ABOVE              for |CI$0008
Define LVHT_BELOW              for |CI$0010
Define LVHT_TORIGHT            for |CI$0020
Define LVHT_TOLEFT             for |CI$0040

Define LVM_GETITEMA            for (LVM_FIRST + 5)
Define LVM_GETITEM             for LVM_GETITEMA

Define LVM_SETITEMA            for (LVM_FIRST + 6)
Define LVM_SETITEM             for LVM_SETITEMA

Define LVM_INSERTITEMA         for (LVM_FIRST + 7)
Define LVM_INSERTITEM          for LVM_INSERTITEMA

Define LVM_DELETEITEM          for (LVM_FIRST + 8)
Define LVM_DELETEALLITEMS      for (LVM_FIRST + 9)
Define LVM_GETCALLBACKMASK     for (LVM_FIRST + 10)
Define LVM_SETCALLBACKMASK     for (LVM_FIRST + 11)

Define LVNI_ALL                for |CI$0000
Define LVNI_FOCUSED            for |CI$0001
Define LVNI_SELECTED           for |CI$0002
Define LVNI_CUT                for |CI$0004
Define LVNI_DROPHILITED        for |CI$0008
Define LVNI_ABOVE              for |CI$0100
Define LVNI_BELOW              for |CI$0200
Define LVNI_TOLEFT             for |CI$0400
Define LVNI_TORIGHT            for |CI$0800

Define LVM_GETNEXTITEM         for (LVM_FIRST + 12)

Define LVFI_PARAM              for |CI$0001
Define LVFI_STRING             for |CI$0002
Define LVFI_PARTIAL            for |CI$0008
Define LVFI_WRAP               for |CI$0020
Define LVFI_NEARESTXY          for |CI$0040

Type tLVFINDINFO
    Field tLVFINDINFO.flags as UInteger
    Field tLVFINDINFO.psz as Pointer
    Field tLVFINDINFO.lParam as DWord
    Field tLVFINDINFO.pt.x as Integer
    Field tLVFINDINFO.pt.y as Integer
    Field tLVFINDINFO.vkDirection as UInteger
End_Type


TYPE LV_FINDINFO
  Field LV_FINDINFO.flags       as Integer
  Field LV_FINDINFO.psz         as Pointer
  Field LV_FINDINFO.lParam      as Integer
  Field LV_FINDINFO.x           as DWord
  Field LV_FINDINFO.y           as DWord
  Field LV_FINDINFO.vkDirection as Integer
END_TYPE

Struct tVDFD_LVFINDINFO 
  UInteger flags
  Pointer psz
  Integer lParam
  DWord ptx
  DWord pty
  UInteger vkDirection
End_Struct

Type tLVHITTESTINFO
    Field tLVHITTESTINFO.pt.x as Integer
    Field tLVHITTESTINFO.pt.y as Integer
    Field tLVHITTESTINFO.flags as UInteger
    Field tLVHITTESTINFO.iItem as Integer
    Field tLVHITTESTINFO.iSubItem as Integer
End_Type

Define LVM_HITTEST             for (LVM_FIRST + 18)
Define LVM_ENSUREVISIBLE       for (LVM_FIRST + 19)
Define LVM_SCROLL              for (LVM_FIRST + 20)
Define LVM_REDRAWITEMS         for (LVM_FIRST + 21)

Define LVA_DEFAULT             for |CI$0000
Define LVA_ALIGNLEFT           for |CI$0001
Define LVA_ALIGNTOP            for |CI$0002
Define LVA_SNAPTOGRID          for |CI$0005

Define LVM_ARRANGE             for (LVM_FIRST + 22)
Define LVM_EDITLABELA          for (LVM_FIRST + 23)
Define LVM_EDITLABELW          for (LVM_FIRST + 118)
Define LVM_EDITLABEL           for LVM_EDITLABELA
Define LVM_GETEDITCONTROL      for (LVM_FIRST + 24)

Type tLVCOLUMN
    Field tLVCOLUMN.mask as UInteger
    Field tLVCOLUMN.fmt as Integer
    Field tLVCOLUMN.cx as Integer
    Field tLVCOLUMN.pszText as Pointer
    Field tLVCOLUMN.cchTextMax as Integer
    Field tLVCOLUMN.iSubItem as Integer
    Field tLVCOLUMN.iImage as Integer
    Field tLVCOLUMN.iOrder as Integer
    Field tLVCOLUMN.cxMin as Integer 
    Field tLVCOLUMN.cxDefault as Integer
    Field tLVCOLUMN.cxIdeal as Integer 
End_Type

Struct tVDFD_LVCOLUMN  
    UInteger mask 
    Integer fmt 
    Integer cx 
    Pointer pszText 
    Integer cchTextMax 
    Integer iSubItem 
    Integer iImage
    Integer iOrder
    Integer cxMin
    Integer cxDefault
    Integer cxIdeal
End_Struct

Define LVCF_FMT                for |CI$0001
Define LVCF_WIDTH              for |CI$0002
Define LVCF_TEXT               for |CI$0004
Define LVCF_SUBITEM            for |CI$0008
Define LVCF_IMAGE              for |CI$0010
Define LVCF_ORDER              for |CI$0020

Define LVCFMT_LEFT             for |CI$0000
Define LVCFMT_RIGHT            for |CI$0001
Define LVCFMT_CENTER           for |CI$0002
Define LVCFMT_JUSTIFYMASK      for |CI$0003
Define LVCFMT_IMAGE            for |CI$0800
Define LVCFMT_BITMAP_ON_RIGHT  for |CI$1000
Define LVCFMT_COL_HAS_IMAGES   for |CI$8000


Type tLVBKIMAGE
    Field tLVBKIMAGE.ulFlags as UInteger
    Field tLVBKIMAGE.hbm as Handle
    Field tLVBKIMAGE.pszImage as Pointer
    Field tLVBKIMAGE.cchImageMax as Integer
    Field tLVBKIMAGE.xOffsetPercent as Integer
    Field tLVBKIMAGE.yOffsetPercent as Integer
End_Type

Struct VDFD_LVBKIMAGE 
  Integer ulFlags
  Handle hbm
  Pointer pszImage
  UInteger cchImageMax
  Integer xOffsetPercent
  Integer yOffsetPercent
End_Struct

Define LVBKIF_SOURCE_NONE      for |CI$00000000
Define LVBKIF_SOURCE_HBITMAP   for |CI$00000001
Define LVBKIF_SOURCE_URL       for |CI$00000002
Define LVBKIF_SOURCE_MASK      for |CI$00000003
Define LVBKIF_STYLE_NORMAL     for |CI$00000000
Define LVBKIF_STYLE_TILE       for |CI$00000010
Define LVBKIF_STYLE_MASK       for |CI$00000010

Define LVM_SETBKIMAGEA         for (LVM_FIRST + 68)
Define LVM_GETBKIMAGEA         for (LVM_FIRST + 69)
Define LVM_SETBKIMAGE          for LVM_SETBKIMAGEA
Define LVM_GETBKIMAGE          for LVM_GETBKIMAGEA

Type tNM_LISTVIEW
  Field tNM_LISTVIEW.NMHDR.hwndFrom as Handle
  Field tNM_LISTVIEW.NMHDR.idFrom   as Integer
  Field tNM_LISTVIEW.NMHDR.code     as Integer
  Field tNM_LISTVIEW.iItem as Integer
  Field tNM_LISTVIEW.iSubItem as Integer
  Field tNM_LISTVIEW.uNewState as UInteger
  Field tNM_LISTVIEW.uOldState as UInteger
  Field tNM_LISTVIEW.uChanged as UInteger
  Field tNM_LISTVIEW.pt.x as Integer
  Field tNM_LISTVIEW.pt.y as Integer
  Field tNM_LISTVIEW.lParam as DWord
End_Type

// NMITEMACTIVATE is used instead of NMLISTVIEW in IE >= for |CI$400
// therefore all the fields are the same except for extra uKeyFlags
// they are used to store key flags at the time of the single click with
// delayed activation - because by the time the timer goes off a user may
// not hold the keys (shift, ctrl) any more
Type tNMITEMACTIVATE
  Field tNMITEMACTIVATE.NMHDR.hwndFrom as Handle
  Field tNMITEMACTIVATE.NMHDR.idFrom   as Integer
  Field tNMITEMACTIVATE.NMHDR.code     as Integer
  Field tNMITEMACTIVATE.iItem as Integer
  Field tNMITEMACTIVATE.iSubItem as Integer
  Field tNMITEMACTIVATE.uNewState as UInteger
  Field tNMITEMACTIVATE.uOldState as UInteger
  Field tNMITEMACTIVATE.uChanged as UInteger
  Field tNMITEMACTIVATE.pt.x as Integer
  Field tNMITEMACTIVATE.pt.y as Integer
  Field tNMITEMACTIVATE.lParam as DWord
  Field tNMITEMACTIVATE.uKeyFlags as UInteger
End_Type

// key flags stored in uKeyFlags
Define LVKF_ALT       for |CI$0001
Define LVKF_CONTROL   for |CI$0002
Define LVKF_SHIFT     for |CI$0004

Type tNMLVCACHEHINT
    Field tNMLVCACHEHINT.NMHDR.hwndFrom as Handle
    Field tNMLVCACHEHINT.NMHDR.idFrom   as Integer
    Field tNMLVCACHEHINT.NMHDR.code     as Integer
    Field tNMLVCACHEHINT.iFrom as Integer
    Field tNMLVCACHEHINT.iTo as Integer
End_Type

Type tNMLVFINDITEM
    Field tNMLVFINDITEM.NMHDR.hwndFrom as Handle
    Field tNMLVFINDITEM.NMHDR.idFrom   as Integer
    Field tNMLVFINDITEM.NMHDR.code     as Integer
    Field tNMLVFINDITEM.iState as Integer
    Field tNMLVFINDITEM.tLVFINDINFO.flags as UInteger
    Field tNMLVFINDITEM.tLVFINDINFO.psz as Pointer
    Field tNMLVFINDITEM.tLVFINDINFO.lParam as DWord
    Field tNMLVFINDITEM.tLVFINDINFO.pt.x as Integer
    Field tNMLVFINDITEM.tLVFINDINFO.pt.y as Integer
    Field tNMLVFINDITEM.tLVFINDINFO.vkDirection as UInteger
End_Type


Type tNMLVODSTATECHANGE
    Field tNMLVODSTATECHANGE.NMHDR.hwndFrom as Handle
    Field tNMLVODSTATECHANGE.NMHDR.idFrom   as Integer
    Field tNMLVODSTATECHANGE.NMHDR.code     as Integer
    Field tNMLVODSTATECHANGE.iFrom as Integer
    Field tNMLVODSTATECHANGE.iTo as Integer
    Field tNMLVODSTATECHANGE.uNewState as UInteger
    Field tNMLVODSTATECHANGE.uOldState as UInteger
End_Type

Define LVN_ITEMCHANGING        for (LVN_FIRST-0)
Define LVN_ITEMCHANGED         for (LVN_FIRST-1)
Define LVN_INSERTITEM          for (LVN_FIRST-2)
Define LVN_DELETEITEM          for (LVN_FIRST-3)
Define LVN_DELETEALLITEMS      for (LVN_FIRST-4)
Define LVN_BEGINLABELEDITA     for (LVN_FIRST-5)
Define LVN_BEGINLABELEDITW     for (LVN_FIRST-75)
Define LVN_ENDLABELEDITA       for (LVN_FIRST-6)
Define LVN_ENDLABELEDITW       for (LVN_FIRST-76)
Define LVN_COLUMNCLICK         for (LVN_FIRST-8)
Define LVN_BEGINDRAG           for (LVN_FIRST-9)
Define LVN_BEGINRDRAG          for (LVN_FIRST-11)
Define LVN_ODCACHEHINT         for (LVN_FIRST-13)
Define LVN_ODFINDITEMA         for (LVN_FIRST-52)
Define LVN_ODFINDITEMW         for (LVN_FIRST-79)
Define LVN_ITEMACTIVATE        for (LVN_FIRST-14)
Define LVN_ODSTATECHANGED      for (LVN_FIRST-15)
Define LVN_ODFINDITEM          for LVN_ODFINDITEMA
Define LVN_HOTTRACK            for (LVN_FIRST-21)
Define LVN_GETDISPINFOA        for (LVN_FIRST-50)
Define LVN_GETDISPINFOW        for (LVN_FIRST-77)
Define LVN_SETDISPINFOA        for (LVN_FIRST-51)
Define LVN_SETDISPINFOW        for (LVN_FIRST-78)
Define LVN_BEGINLABELEDIT      for LVN_BEGINLABELEDITA
Define LVN_ENDLABELEDIT        for LVN_ENDLABELEDITA
Define LVN_GETDISPINFO         for LVN_GETDISPINFOA
Define LVN_SETDISPINFO         for LVN_SETDISPINFOA

Define LVIF_DI_SETITEM         for |CI$1000

Type tNMLVDISPINFO
  Field tNMLVDISPINFO.NMHDR.hwndFrom as Handle
  Field tNMLVDISPINFO.NMHDR.idFrom   as Integer
  Field tNMLVDISPINFO.NMHDR.code     as Integer
  Field tNMLVDISPINFO.LVITEM.mask as UInteger
  Field tNMLVDISPINFO.LVITEM.iItem as Integer
  Field tNMLVDISPINFO.LVITEM.iSubItem as Integer
  Field tNMLVDISPINFO.LVITEM.state as UInteger
  Field tNMLVDISPINFO.LVITEM.stateMask as UInteger
  Field tNMLVDISPINFO.LVITEM.pszText as Pointer
  Field tNMLVDISPINFO.LVITEM.cchTextMax as Integer
  Field tNMLVDISPINFO.LVITEM.iImage as Integer
  Field tNMLVDISPINFO.LVITEM.lParam as DWord
  Field tNMLVDISPINFO.LVITEM.iIndent as Integer
End_Type

Define LVN_KEYDOWN             for (LVN_FIRST-55)

Type tNMLVKEYDOWN
  Field tNMLVKEYDOWN.NMHDR.hwndFrom as Handle
  Field tNMLVKEYDOWN.NMHDR.idFrom   as Integer
  Field tNMLVKEYDOWN.NMHDR.code     as Integer
  Field tNMLVKEYDOWN.wVKey as WORD
  Field tNMLVKEYDOWN.flags as UInteger
End_Type

Define LVN_MARQUEEBEGIN        for (LVN_FIRST-56)

Type tNMLVGETINFOTIP
  Field tNMLVGETINFOTIP.NMHDR.hwndFrom as Handle
  Field tNMLVGETINFOTIP.NMHDR.idFrom   as Integer
  Field tNMLVGETINFOTIP.NMHDR.code     as Integer
  Field tNMLVGETINFOTIP.dwFlags as DWord
  Field tNMLVGETINFOTIP.pszText as Pointer
  Field tNMLVGETINFOTIP.cchTextMax as Integer
  Field tNMLVGETINFOTIP.iItem as Integer
  Field tNMLVGETINFOTIP.iSubItem as Integer
  Field tNMLVGETINFOTIP.lParam as DWord
End_Type

Define LVGIT_UNFOLDED  for |CI$0001

Define LVN_GETINFOTIPA         for (LVN_FIRST-57)
Define LVN_GETINFOTIP          for LVN_GETINFOTIPA

// Added TRF 2008-08-31
// ListView Group Constants
Define LVM_INSERTGROUP        for (LVM_FIRST + 145)
Define LVM_SETGROUPINFO       for (LVM_FIRST + 147)
Define LVM_GETGROUPINFO       for (LVM_FIRST + 149)
Define LVM_REMOVEGROUP        for (LVM_FIRST + 150)
Define LVM_MOVEGROUP          for (LVM_FIRST + 151)
Define LVM_GETGROUPCOUNT      For (LVM_FIRST + 152)
Define LVM_MOVEITEMTOGROUP    for (LVM_FIRST + 154)
Define LVM_SETGROUPMETRICS    for (LVM_FIRST + 155)
Define LVM_ENABLEGROUPVIEW    for (LVM_FIRST + 157)
Define LVM_ISGROUPVIEWENABLED for (LVM_FIRST + 175)

Define LVM_GETOUTLINECOLOR    for (LVM_FIRST + 176)
Define LVM_SETOUTLINECOLOR    for (LVM_FIRST + 177)

//Added GAF 05/07/09 2:00AM Way to Late for this Bullshit
Define LVM_SORTGROUPS         for (LVM_FIRST + 158)
Define LVM_INSERTGROUPSORTED  for (LVM_FIRST + 159)
Define LVM_REMOVEALLGROUPS    for (LVM_FIRST + 160)
Define LVM_HASGROUP           for (LVM_FIRST + 161)


Define LVIF_GROUPID for |CI$0100
Define LVGF_HEADER  for |CI$00000001
Define LVGF_FOOTER  for |CI$00000002
Define LVGF_ALIGN   for |CI$00000008
Define LVGF_GROUPID for |CI$00000010
Define LVGF_STATE   for |CI$00000004

Define LVGF_SUBTITLE          for |CI$00000100  // pszSubtitle is valid
Define LVGF_TASK              for |CI$00000200  // pszTask is valid
Define LVGF_DESCRIPTIONTOP    for |CI$00000400  // pszDescriptionTop is valid
Define LVGF_DESCRIPTIONBOTTOM for |CI00000800  // pszDescriptionBottom is valid
Define LVGF_TITLEIMAGE        for |CI00001000  // iTitleImage is valid
Define LVGF_EXTENDEDIMAGE     for |CI00002000  // iExtendedImage is valid
Define LVGF_ITEMS             for |CI00004000  // iFirstItem and cItems are valid
Define LVGF_SUBSET            for |CI00008000  // pszSubsetTitle is valid
Define LVGF_SUBSETITEMS       for |CI00010000  // readonly, cItems holds count of items in visible subset, iFirstItem is valid


//*****ListView Group Header Alignment*****
Define LVGA_HEADER_LEFT   for |CI$00000001
Define LVGA_HEADER_CENTER for |CI$00000002
Define LVGA_HEADER_RIGHT  for |CI$00000004  // Don't forget to validate exclusivity
Define LVGA_FOOTER_LEFT   for |CI$00000008
Define LVGA_FOOTER_CENTER for |CI$00000010
Define LVGA_FOOTER_RIGHT  for |CI$00000020  // Don't forget to validate exclusivity


// TRF 2008-08-31
Define LVGMF_NONE        for  0
Define LVGMF_BORDERSIZE  for  1
Define LVGMF_BORDERCOLOR for  2
Define LVGMF_TEXTCOLOR   for  4

Define LVGS_NORMAL for 0
Define LVGS_COLLAPSED for 1 
Define LVGS_HIDDEN for 2 
Define LVGS_NOHEADER for 4
Define LVGS_COLLAPSIBLE for 8
Define LVGS_FOCUSED for 10
Define LVGS_SELECTED for 20
Define LVGS_SUBSETED for 40
Define LVGS_SUBSETLINKFOCUSED for 80

Define LVHT_EX_GROUP_HEADER      for |CI$10000000
Define LVHT_EX_GROUP_FOOTER      for |CI$20000000
Define LVHT_EX_GROUP_COLLAPSE    for |CI$40000000
Define LVHT_EX_GROUP_BACKGROUND  for |CI$80000000
Define LVHT_EX_GROUP_STATEICON   for |CI$01000000
Define LVHT_EX_GROUP_SUBSETLINK  for |CI$02000000
Define LVHT_EX_GROUP             for (LVHT_EX_GROUP_BACKGROUND iOr LVHT_EX_GROUP_COLLAPSE iOr LVHT_EX_GROUP_FOOTER iOr LVHT_EX_GROUP_HEADER iOr LVHT_EX_GROUP_STATEICON iOr LVHT_EX_GROUP_SUBSETLINK)
Define LVHT_EX_ONCONTENTS        for |CI$04000000 // On item AND not on the background
Define LVHT_EX_FOOTER            for |CI$08000000

Struct tTS_LVGROUPMETRICS  
  UInteger cbSize // UINT
  UInteger mask // UINT
  UInteger Left // UINT
  UInteger Top // UINT
  UInteger Right // UINT
  UInteger Bottom // UINT
  Integer crLeft // COLORREF    // Not Implemented.
  Integer crTop // COLORREF     // Not Implemented.
  Integer crRight // COLORREF   // Not Implemented.
  Integer crBottom // COLORREF  // Not Implemented.
  Integer crHeader // COLORREF  // Not Implemented.
  Integer crFooter // COLORREF  // Not Implemented.
End_Struct

Struct tVDFD_LVITEM
  UInteger mask 
  Integer  iItem  
  Integer  iSubItem
  UInteger state 
  UInteger stateMask
  Pointer  pszText 
  Integer  cchTextMax 
  Integer  iImage 
  DWord    lParam 
  Integer  iIndent 
  Integer  iGroupId
  UInteger cColumns
  Pointer  puColumns  
End_Struct

Struct tVDFD_LVGROUP 
  UInteger cbSize 
  UInteger mask   
  Pointer  pszHeader  
  Integer  cchHeader
  Pointer  pszFooter  
  Integer  cchFooter
  Integer  iGroupId
  UInteger stateMask  
  UInteger state  
  UInteger uAlign   
  Pointer pszSubtitle
  UInteger cchSubtitle
  Pointer  pszTask
  UInteger  cchTask
  Pointer  pszDescriptionTop
  UInteger cchDescriptionTop
  Pointer pszDescriptionBottom
  UInteger cchDescriptionBottom
  Integer  iTitleImage
  Integer  iExtendedImage
  Integer  iFirstItem         // Read only
  Integer  cItems             // Read only
  Pointer  pszSubsetTitle     
  UInteger cchSubsetTitle
End_Struct

// End of File: cWinAPI_ListView.h
