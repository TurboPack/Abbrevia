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
  Response.Buffer = True
  On Error Resume Next

  ' Archive Extraction and Download Example
  '
  ' To use this example, follow these simple steps:
  '
  ' 1. Replace the LicenseKey constant with a valid key.
  ' 
  const LicenseKey = "xxxxxxxx"
%>
<%
  ArchiveName = Server.MapPath(Request("ZIP"))
  ItemName    = Request("File")
  
  ZipKit.License(LicenseKey)
  ZipKit.FileName = ArchiveName
  ItemIndex       = ZipKit.Find(ItemName)
  Set Item = ZipKit.Item(ItemIndex)

  if Item.InternalFileAttributes = 0 then
    Response.ContentType = "application/octet-stream" 
  else
    Response.ContentType = "text/plain" 
  end if

  Response.AddHeader "Content-Disposition", "attachment; filename=" & Mid(ItemName, InStrRev(ItemName, "/")+1)
  Response.AddHeader "Accept-Ranges", "bytes"
  Response.AddHeader "Last-Modified", FormatDateTime(Item.LastModFileDateTime, 1) + " " + FormatDateTime(Item.LastModFileDateTime, 4) + " MST"

  Response.BinaryWrite ZipKit.ExtractToStream(ItemName)
  Response.End
%>
