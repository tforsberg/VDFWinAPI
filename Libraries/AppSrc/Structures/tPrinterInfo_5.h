
// http://msdn2.microsoft.com/en-us/library/ms535768(VS.85).aspx

//  PRINTER_INFO_5
//  
//  The PRINTER_INFO_5 structure specifies detailed printer information.
//  
//  typedef Struct _PRINTER_INFO_5 {
//    LPTSTR    pPrinterName;
//    LPTSTR    pPortName;
//    DWord     Attributes;
//    DWORD     DeviceNotSelectedTimeout;
//    DWord     TransmissionRetryTimeout;
//  } PRINTER_INFO_5, *PPRINTER_INFO_5; 
//  
//  Members
//  
//  pPrinterName
//      Pointer to a null-terminated String that specifies the name of the printer. 
//  pPortName
//      Pointer to a null-terminated String that identifies the port(s) used to transmit data to the printer. If a printer is connected to more than one port, the names of each port must be separated by commas (for example, "LPT1:,LPT2:,LPT3:").
//  
//      Windows 95/98/Me: This member can specify only one port because multiple ports per printer are not supported. 
//  Attributes
//      Specifies the printer attributes. This member can be any reasonable combination of the following values.
//      Value 	Meaning
//      PRINTER_ATTRIBUTE_ALLOW_EMF 	Windows Vista: Indicates the printer can accept Enhanced Metafile (EMF) data.
//      PRINTER_ATTRIBUTE_DEFAULT 	Windows 95/98/Me: Indicates the printer is the default printer in the system.
//      PRINTER_ATTRIBUTE_DIRECT 	Job is sent directly to the printer (it is not spooled).
//      PRINTER_ATTRIBUTE_DO_COMPLETE_FIRST 	If Set and printer is Set for Print-While-spooling, any jobs that have completed spooling are scheduled to Print before jobs that have not completed spooling.
//      PRINTER_ATTRIBUTE_ENABLE_BIDI 	Windows 95/98/Me: Indicates whether bi-directional communications are enabled for the printer.
//      PRINTER_ATTRIBUTE_ENABLE_DEVQ 	If Set, DevQueryPrint is called. DevQueryPrint may fail If the document and printer setups do not match. Setting this flag causes mismatched documents to be held in the queue.
//      PRINTER_ATTRIBUTE_FAX 	Windows XP: If Set, printer is a fax printer. This can only be Set by AddPrinter, but it can be retrieved by EnumPrinters and GetPrinter.
//      PRINTER_ATTRIBUTE_FRIENDLY_NAME 	Windows Vista: a computer has connected to this printer and given it a friendly name.
//      PRINTER_ATTRIBUTE_HIDDEN 	Reserved.
//      PRINTER_ATTRIBUTE_KEEPPRINTEDJOBS 	If Set, jobs are kept after they are printed. If unset, jobs are deleted.
//      PRINTER_ATTRIBUTE_LOCAL 	Printer is a local printer.
//      PRINTER_ATTRIBUTE_MACHINE 	Windows Vista: Printer is a per-machine connection.
//      PRINTER_ATTRIBUTE_NETWORK 	Printer is a network printer connection.
//      PRINTER_ATTRIBUTE_PUBLISHED 	Windows 2000/XP: Indicates whether the printer is published in the directory service.
//      PRINTER_ATTRIBUTE_PUSHED_USER 	Windows Vista: The printer was was installed by using the Push Printer Connections user policy. See Step-by-Step Guide for Print Management.
//      PRINTER_ATTRIBUTE_PUSHED_MACHINE 	Windows Vista: The printer was installed by using the Push Printer Connections computer policy. See Step-by-Step Guide for Print Management.
//      PRINTER_ATTRIBUTE_QUEUED 	If Set, the printer spools and starts printing after the last page is spooled. If not Set and PRINTER_ATTRIBUTE_DIRECT is not Set, the printer spools and prints While spooling.
//      PRINTER_ATTRIBUTE_RAW_ONLY 	Indicates that only raw data type Print jobs can be spooled.
//      PRINTER_ATTRIBUTE_SHARED 	Printer is shared.
//      PRINTER_ATTRIBUTE_WORK_OFFLINE 	Windows 95/98/Me: Indicates whether the printer is currently connected. If the printer is not currently connected, Print jobs will continue to spool.
//  
//  DeviceNotSelectedTimeout
//      Windows 95/98/Me: Specifies the maximum Time, in milliseconds, allowed to elapse Between attempts to select a device.
//  
//      Windows NT/2000/XP: This value is not used. 
//  TransmissionRetryTimeout
//      Windows 95/98/Me: Specifies the maximum Time, in milliseconds, allowed to elapse Between transmission retries.
//  
//      Windows NT/2000/XP: This value is not used. 
//  
//  Requirements
//  
//    Windows NT/2000/XP/Vista: Included in Windows NT 4.0 and later.
//    Windows 95/98/Me: Included in Windows 95 and later.
//    Header: Declared in Winspool.h; include Windows.h.
//    Unicode: Declared as Unicode and ANSI structures.
//  See Also
//  
//  Printing and Print Spooler Overview, Printing and Print Spooler Structures, EnumPrinters, GetPrinter, SetPrinter, PRINTER_INFO_1, PRINTER_INFO_2, PRINTER_INFO_3, PRINTER_INFO_4

// 

Struct tPrinter_Info_5
  String pPrinterName // LPTSTR
  String pPortName    // LPTSTR
  DWord  dwAttributes // DWORD
  DWord  dwDeviceNotSelectedTimeout // DWORD
  DWord  dwTransmissionRetryTimeout // DWORD
End_Struct

// End of File: tPrinter_Info_5.h
