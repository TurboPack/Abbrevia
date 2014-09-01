<%@ Language=VBScript %>
<%
  ' Abbrevia Example
  ' Copyright (c) 1999 TurboPower Software Company

  ' This Active Server Page is
  ' for use with Microsoft Internet Information Server

  Response.Buffer = True
%>  
<OBJECT RUNAT="Server" PROGID="Scripting.FileSystemObject" id="FileSystem"></OBJECT>
<OBJECT RUNAT="Server" PROGID="Abbrevia.ZipKit" id="ZipKit"></OBJECT>
<!-- #INCLUDE FILE="abbrevia.inc"-->
<%
  On Error Resume Next

  ' Archive Extraction and Download Example
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
  BaseVDirectoryPath = Mid(Request.ServerVariables("PATH_INFO"), 1, InStrRev(Request.ServerVariables("PATH_INFO"), "/"))

  '* create location for zip files *
  '  - Create Directory based on DATE
  '  - Create file name based on TIME and IP address

  if (Request("Submit") = "Create Archive") then
    ZipKit.License(LicenseKey)
    
    ' You can come up with any filename naming method you.  The one listed below will create a unique
    ' filename in most cases.
    '
    FileName = Hour(Now) & Minute(Now) & Second(Now) & "-" & _
               Replace(Request.ServerVariables("REMOTE_ADDR"), ".", "")
    
    ZipKit.BaseDirectory = Server.MapPath(BaseVDirectoryPath & "files/") 
    ZipKit.FileName = Server.MapPath(BaseVDirectoryPath & FileName & ".ZIP")

    for each item in Request("ProductResource")
      ZipKit.Add(Mid(Server.MapPath(item), Len(ZipKit.BaseDirectory)+2))
    next
    ZipKit.Save

    ' Either send the file directly to the browser
    Response.Redirect FileName & ".ZIP"

    ' OR
    ' Place a link on the page so the user can download it.
    'Response.Write "Download your file <A HREF='" & FileName & ".ZIP'>Here</A>."    

    Response.End
  end if
%>
<HTML><HEAD></HEAD><BODY>

<H1>TurboPower String Resource Translations</H1><BR>
Select the file(s) you wish included in the archive from the lists below.  When finished, click on the
"Create Archive" button.

<FORM NAME="thisForm" METHOD="POST" ACTION="<%=LCase(Request("SCRIPT_NAME"))%>">
<TABLE>
  <TR>
    <TD>
      <TABLE WIDTH="100%" CELLPADDING="0" CELLSPACING="5" BORDER="0">
        <TR ALIGN="CENTER">
          <TD ALIGN="CENTER" VALIGN="MIDDLE">
            <FONT FACE="Verdana, Arial" SIZE="2">
              <B>Abbrevia<B><BR><% ABD = BaseVDirectoryPath & "files/abbrevia/" %>
              <SELECT NAME="ProductResource" SIZE="8" MULTIPLE>
                <% for each item in FileSystem.GetFolder(Server.MapPath(ABD)).Files %>
                <OPTION VALUE="<%=(ABD & item.name)%>"><%= item.name %>
                <% next %>
              </SELECT>
            </FONT>
          </TD>
          <TD ALIGN="CENTER" VALIGN="MIDDLE">
            <FONT FACE="Verdana, Arial" SIZE="2">
              <B>Async Professional<B><BR><% APD = BaseVDirectoryPath & "files/apro/" %>
              <SELECT NAME="ProductResource" SIZE="8" MULTIPLE>
                <% for each item in FileSystem.GetFolder(Server.MapPath(APD)).Files %>
                <OPTION VALUE="<%=(APD & item.name)%>"><%= item.name %>
                <% next %>
              </SELECT>
            </FONT>
          </TD>
          <TD ALIGN="CENTER" VALIGN="MIDDLE">
            <FONT FACE="Verdana, Arial" SIZE="2">
              <B>Essentials,  Vol. I<B><BR><% E1D = BaseVDirectoryPath & "files/essence/" %>
              <SELECT NAME="ProductResource" SIZE="8" MULTIPLE>
                <% for each item in FileSystem.GetFolder(Server.MapPath(E1D)).Files %>
                <OPTION VALUE="<%=(E1D & item.name)%>"><%= item.name %>
                <% next %>
              </SELECT>
            </FONT>
          </TD>
          <TD ALIGN="CENTER" VALIGN="MIDDLE">
            <FONT FACE="Verdana, Arial" SIZE="2">
              <B>FlashFiler<B><BR><% FFD = BaseVDirectoryPath & "files/flash/" %>
              <SELECT NAME="ProductResource" SIZE="8" MULTIPLE>
                <% for each item in FileSystem.GetFolder(Server.MapPath(FFD)).Files %>
                <OPTION VALUE="<%=(FFD & item.name)%>"><%= item.name %>
                <% next %>
              </SELECT>
            </FONT>
          </TD>
        </TR>
        <TR ALIGN="CENTER">
          <TD ALIGN="CENTER" VALIGN="MIDDLE">
            <FONT FACE="Verdana, Arial" SIZE="2">
              <B>OnGuard<B><BR><% OGD = BaseVDirectoryPath & "files/onguard/" %>
              <SELECT NAME="ProductResource" SIZE="8" MULTIPLE>
                <% for each item in FileSystem.GetFolder(Server.MapPath(OGD)).Files %>
                <OPTION VALUE="<%=(OGD & item.name)%>"><%= item.name %>
                <% next %>
              </SELECT>
            </FONT>
          </TD>
          <TD ALIGN="CENTER" VALIGN="MIDDLE">
            <FONT FACE="Verdana, Arial" SIZE="2">
              <B>Orpheus<B><BR><% ORD = BaseVDirectoryPath & "files/orpheus/" %>
              <SELECT NAME="ProductResource" SIZE="8" MULTIPLE>
                <% for each item in FileSystem.GetFolder(Server.MapPath(ORD)).Files %>
                <OPTION VALUE="<%=(ORD & item.name)%>"><%= item.name %>
                <% next %>
              </SELECT>
            </FONT>
          </TD>
          <TD ALIGN="CENTER" VALIGN="MIDDLE">
            <FONT FACE="Verdana, Arial" SIZE="2">
              <B>SysTools<B><BR><% STD = BaseVDirectoryPath & "files/systools/" %>
              <SELECT NAME="ProductResource" SIZE="8" MULTIPLE>
                <% for each item in FileSystem.GetFolder(Server.MapPath(STD)).Files %>
                <OPTION VALUE="<%=(STD & item.name)%>"><%= item.name %>
                <% next %>
              </SELECT>
            </FONT>
          </TD>
          <TD ALIGN="CENTER" VALIGN="MIDDLE">
            <FONT FACE="Verdana, Arial" SIZE="2">
            </FONT>
          </TD>
        </TR>
      </TABLE>
    </TD>
  </TR>
  <TR>
    <TD>
      <INPUT TYPE="Submit" NAME="Submit" VALUE="Create Archive">
    </TD>
  <TD>
  </FORM>
  </TR>
</TABLE>

</BODY>
</HTML>
