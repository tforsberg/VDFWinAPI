Use Windows.pkg
Use DFClient.pkg


Use cWinAPI_Kernel32_GlobalMemoryStatus.pkg

Deferred_View Activate_oKernel32_VW for ;
Object oKernel32_VW is a View

  Set Border_Style to Border_Thick
  Set Size to 223 300
  Set Location to 2 2
  Set Label to "Kernel32.dll"

  Object oTabDialog1 is a TabDialog
    Set Size to 200 292
    Set Location to 5 4
    Set MultiLine_State to True

    Object oTabPageGlobalMemoryStatus is a TabPage
      Set Label to "GlobalMemoryStatus"

      Object oButton2 is a Button
        Set Location to 4 232
        Set Label to "Test"
      
        // fires when the button is clicked
        Procedure OnClick
          Integer iVoid
          Handle hMem
          DWord dwMemoryLoad dwTotalPhys dwAvailPhys dwTotalPageFile       
          DWord dwAvailPageFile dwTotalVirtual dwAvailVirtual      
          tWINAPI_MEMORYSTATUS MyMemory

          Get Create (RefClass(cWinAPI_Kernel32_GlobalMemoryStatus)) to hMem
          Get ptGlobalMemoryStatus of hMem to MyMemory
          
          Set Value of oFormMemoryLoad    to MyMemory.dwMemoryLoad          // fires when the button is clicked
          Set Value of oFormTotalPhys     to MyMemory.dwTotalPhys      
          Set Value of oFormAvailPhys     to MyMemory.dwAvailPhys              
          Set Value of oFormTotalPageFile to MyMemory.dwTotalPageFile          
          Set Value of oFormAvailPageFile to MyMemory.dwAvailPageFile      
          Set Value of oFormTotalVirtual  to MyMemory.dwTotalVirtual     
          Set Value of oFormAvailVirtual  to MyMemory.dwAvailVirtual

          Send Destroy of hMem
          
        End_Procedure
      
      End_Object

      Object oFormMemoryLoad is a Form
        Set Size to 13 100
        Set Location to 16 65
        Set Label to "MemoryLoad"
      End_Object

      Object oFormTotalPhys is a Form
        Set Size to 13 100
        Set Location to 33 65
        Set Label to "TotalPhys"
      End_Object

      Object oFormAvailPhys is a Form
        Set Size to 13 100
        Set Location to 50 65
        Set Label to "AvailPhys"
      End_Object
      
      Object oFormTotalPageFile is a Form
        Set Size to 13 100
        Set Location to 67 65
        Set Label to "TotalPageFile"
      End_Object

      Object oFormAvailPageFile is a Form
        Set Size to 13 100
        Set Location to 84 65
        Set Label to "AvailPageFile"
      End_Object

      Object oFormTotalVirtual is a Form
        Set Size to 13 100
        Set Location to 101 65
        Set Label to "TotalVirtual"
      End_Object

      Object oFormAvailVirtual is a Form
        Set Size to 13 100
        Set Location to 118 65
        Set Label to "AvailVirtual"
      End_Object

    End_Object

    Object oTabPageGlobalMemoryStatusEx is a TabPage
      Set Label to "GlobalMemoryStatusEx"

      Object oButton2 is a Button
        Set Location to 4 232
        Set Label to "Test"
        Set Enabled_State to False
      
        // fires when the button is clicked
        Procedure OnClick
          Integer iVoid
          DWord dwMemoryLoad dwTotalPhys dwAvailPhys dwTotalPageFile       
          DWord dwAvailPageFile dwTotalVirtual dwAvailVirtual      
          tWINAPI_MEMORYSTATUS MyMemory
          
          //ZeroType WINAPI_MEMORYSTATUS to sMemoryStatus      
          
                 
          Move (WINAPI_GlobalMemoryStatus (AddressOf (MyMemory))) to iVoid    
          
          Showln MyMemory.dwMemoryLoad          // fires when the button is clicked
          Showln MyMemory.dwTotalPhys      
          Showln MyMemory.dwAvailPhys              
          Showln MyMemory.dwTotalPageFile          
          Showln MyMemory.dwAvailPageFile      
          Showln MyMemory.dwTotalVirtual     
          Showln MyMemory.dwAvailVirtual
          
            
        End_Procedure
      
      End_Object

      Object oFormMemoryLoad is a Form
        Set Size to 13 100
        Set Location to 16 65
        Set Label to "MemoryLoad"
      End_Object
      Object oFormTotalPhys is a Form
        Set Size to 13 100
        Set Location to 33 65
        Set Label to "TotalPhys"
      End_Object
      Object oFormAvailPhys is a Form
        Set Size to 13 100
        Set Location to 50 65
        Set Label to "AvailPhys"
      End_Object
      Object oFormTotalPageFile is a Form
        Set Size to 13 100
        Set Location to 67 65
        Set Label to "TotalPageFile"
      End_Object
      Object oFormAvailPageFile is a Form
        Set Size to 13 100
        Set Location to 84 65
        Set Label to "AvailPageFile"
      End_Object
      Object oFormTotalVirtual is a Form
        Set Size to 13 100
        Set Location to 101 65
        Set Label to "TotalVirtual"
      End_Object
      Object oFormAvailVirtual is a Form
        Set Size to 13 100
        Set Location to 118 65
        Set Label to "AvailVirtual"
      End_Object
    End_Object

    Object oTabPage3 is a TabPage
      Set Label to 'oTabPage3'

      Object oButton3 is a Button
        Set Location to 26 42
        Set Label to 'oButton3'
      
        // fires when the button is clicked
        Function VDFRootDir Returns String
          Handle hoRegistry
          Boolean bKeyOpened
          String sRegKey sRootDir
          UInteger iAccessRights
          
          Get Create U_cRegistry to hoRegistry
          If (hoRegistry > 0) Begin
            Get pfAccessRights of hoRegistry to iAccessRights
            Set pfAccessRights of hoRegistry to KEY_ALL_ACCESS
            Set phRootKey of hoRegistry to HKEY_LOCAL_MACHINE
            Move ("Software\Data Access Worldwide\Visual DataFlex\" + Sysconf (SYSCONF_DATAFLEX_REV) + "\Defaults") to sRegKey
            Get OpenKey of hoRegistry sRegKey to bKeyOpened
            If (bKeyOpened) Begin
              Get ReadString of hoRegistry "VDFRootDir" to sRootDir
              If (sRootDir <> "") Begin
                If (Right (sRootDir, 1) <> SysConf (SYSCONF_DIR_SEPARATOR)) Begin
                  Move (sRootDir + SysConf (SYSCONF_DIR_SEPARATOR)) to sRootDir
                End
                Move (sRootDir + "Bin") to sRootDir
              End
            End
            Set pfAccessRights of hoRegistry to iAccessRights
            Send Destroy of hoRegistry
          End
          Function_Return sRootDir
        End_Function

        Procedure OnClick
          //04/17/2010 GAF changed to use cRegistry Class
          
          Showln (VDFRootDir(Self))
        End_Procedure
      
      End_Object
    End_Object

    Object oTabPage4 is a TabPage
      Set Label to 'oTabPage4'
    End_Object

    Object oTabPage5 is a TabPage
      Set Label to 'oTabPage5'
    End_Object

    Object oTabPage6 is a TabPage
      Set Label to 'oTabPage6'

      Object oButton1 is a Button
        Set Location to 53 84
        Set Label to 'oButton1'
      
          // fires when the button is clicked
          Procedure OnClick
              
          End_Procedure
      
      End_Object
    End_Object

    Object oTabPage7 is a TabPage
      Set Label to 'oTabPage7'
    End_Object

    Object oTabPage8 is a TabPage
      Set Label to 'oTabPage8'
    End_Object
    
  End_Object

Cd_End_Object
