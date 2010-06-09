Use Windows.pkg
Use DFClient.pkg

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

External_Function WINAPI_GlobalMemoryStatus "GlobalMemoryStatus" Kernel32.Dll ;
                  Pointer lpsMemoryStatus Returns Integer


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

      Object oForm1 is a Form
        Set Size to 13 100
        Set Location to 16 65
      
          //OnChange is called on every changed character
      
          //Procedure OnChange
          //    String sValue
          //
          //    Get Value to sValue
          //End_Procedure
      
      End_Object

      Object oForm1 is a Form
        Set Size to 13 100
        Set Location to 35 65
      
          //OnChange is called on every changed character
      
          //Procedure OnChange
          //    String sValue
          //
          //    Get Value to sValue
          //End_Procedure
      
      End_Object

      Object oForm1 is a Form
        Set Size to 13 100
        Set Location to 54 66
      
          //OnChange is called on every changed character
      
          //Procedure OnChange
          //    String sValue
          //
          //    Get Value to sValue
          //End_Procedure
      
      End_Object
      Object oForm1 is a Form
        Set Size to 13 100
        Set Location to 72 66
      
          //OnChange is called on every changed character
      
          //Procedure OnChange
          //    String sValue
          //
          //    Get Value to sValue
          //End_Procedure
      
      End_Object
      
      
      
      
    End_Object

    Object oTabPageGlobalMemoryStatusEx is a TabPage
      Set Label to "GlobalMemoryStatusEx"

      Object oButton2 is a Button
        Set Location to 4 232
        Set Label to "Test"
      
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
    End_Object

    Object oTabPage3 is a TabPage
      Set Label to 'oTabPage3'
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
