<%@ Language=VBScript %>
<%
  ' Abbrevia Example
  ' Copyright (c) 1999 TurboPower Software Company

  ' This Active Server Page is
  ' for use with Microsoft Internet Information Server
%>  
<OBJECT RUNAT="Server" PROGID="Abbrevia.ZipKit" id="ZipKit"></OBJECT>
<!-- #INCLUDE FILE="abbrevia.inc"-->
<%
  On Error Resume Next

  ' Archive Viewing Example
  '
  ' To use this example, follow these simple steps:
  '
  ' 1. Replace the LicenseKey constant with a valid key.
  ' 2. Have a .ZIP file on the web site that can be opened. If the ZipKit is unable to open
  '    the file, first check to make sure it does not have the "read-only" attribute set.
  '  
  ' An example ZIP file called TEST.ZIP is included in the \abbrvia\com\examples\asp directory.

  const LicenseKey = "xxxxxxxx"
%>
<%
  ViewingArchive = False
  if (Request("ViewArchive") = "TRUE") and (Trim(Request("FileName")) <> "") then
    ViewingArchive = True
    BaseVDirectoryPath = Mid(Request.ServerVariables("PATH_INFO"), 1, InStrRev(Request.ServerVariables("PATH_INFO"), "/"))
    ZipKit.License(LicenseKey)
    ZipKit.FileName = Server.MapPath(BaseVDirectoryPath & Request("FileName"))
    ViewingArchive = (Err.Number = 0)
  end if
%>
<HTML>
<HEAD>
</HEAD>
<BODY>

<H1>ZIP Archive Contents View</H1><BR>
This example shows how to display the contents of a ZIP file .. the "extract.asp" example will take this 
a step further and show you one method of extracting an item contained in the archive.
<P>

<% 
  if ViewingArchive then
  
    ' initialize the totals
    TotalUnCompSize = 0
    TotalCompSize   = 0
    TotalCompRatio  = 0
    VerNeededToEx   = 0

    ' set up the header of the view    
    Response.Write "<PRE><BR>"
    Response.Write "Archive:  " & BaseVDirectoryPath & Request("Filename") & "<BR>"
    Response.Write " <BR>"
    Response.Write "Name                     Length         Method   SF   Size now   Mod Date      Time          CRC" & "<BR>"
    Response.Write "======================  ========  ============  ====  ========  ==========  ===========  ========"

    ' iterate through each item in the archive
    for each item in ZipKit  
      Response.Write "<BR>" 
      Response.Write Mid(Item.FileName, 1, 22) & Space(22-Len(Mid(Item.FileName, 1, 22))) & "  "
      Response.Write Space(8-Len(CStr(Item.UnCompressedSize))) & CStr(Item.UnCompressedSize) & "  "
      Response.Write Space(12-Len(CStr(cmNames(Item.CompressionMethod)))) & CStr(cmNames(Item.CompressionMethod)) & "  "
      Response.Write Space(3-Len(CStr(FormatNumber(Item.CompressionRatio, 0)))) & CStr(FormatNumber(Item.CompressionRatio, 0)) & "%  "
      Response.Write Space(8-Len(CStr(Item.CompressedSize))) & CStr(Item.CompressedSize) & "  "
      Response.Write Space(10-Len(FormatDateTime(Item.LastModFileDateTime, vbShortDate))) & FormatDateTime(Item.LastModFileDateTime, vbShortDate) & "  "
      Response.Write Space(11-Len(FormatDateTime(Item.LastModFileDateTime, vbLongTime))) & FormatDateTime(Item.LastModFileDateTime, vbLongTime) & "  "
      Response.Write Item.CRC32St
      
      ' Increase Totals
      TotalUnCompSize = TotalUnCompSize + Item.UnCompressedSize
      TotalCompSize   = TotalCompSize   + Item.CompressedSize
      if Item.VersionNeededToExtract > VerNeededToEx then
        VerNeededToEx = Item.VersionNeededToExtract
      end if
    next
    
    ' display the totals row
    TotalCompRatio = FormatNumber((100 * (1-(TotalCompSize / TotalUnCompSize))), 0)
    Response.Write "<BR>"
    Response.Write "======================  ========  ============  ====  ========  ==========  ===========  ========" & "<BR>"
    Response.Write "*total             "                       
    Response.Write Space(3-Len(CStr(ZipKit.Count))) & ZipKit.Count & "  "
    Response.Write Space(8-Len(CStr(TotalUnCompSize))) & TotalUnCompSize & "  "
    Response.Write "    ZIP " & FormatNumber(VerNeededToEx/1000, 2) & "  "
    Response.Write Space(3-Len(CStr(TotalCompRatio))) & CStr(TotalCompRatio) & "%  "
    Response.Write Space(8-Len(CStr(TotalCompSize))) & TotalCompSize & "  "
    Response.Write "<BR>"
    Response.Write "</PRE><BR>"
  end if 
%>     
 
<FORM NAME="ZipView" METHOD="POST" ACTION="<%=Request.ServerVariables("PATH_INFO")%>">
  Select a ZIP file name that you wish to view* -
  <INPUT TYPE="TEXT" NAME="FILENAME" VALUE="<%=Request("FileName")%>">
  <INPUT TYPE="SUBMIT" NAME="Submit" VALUE="View Archive">
  <INPUT TYPE="HIDDEN" NAME="ViewArchive" VALUE="TRUE">
</FORM>

<P>
*Note: The file should be located in the same directory as this ASP page.


</BODY>
</HTML>
