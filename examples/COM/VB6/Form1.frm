VERSION 5.00
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "COMDLG32.OCX"
Object = "{831FDD16-0C5C-11D2-A9FC-0000F8754DA1}#2.0#0"; "MSCOMCTL.OCX"
Begin VB.Form frmMain 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "TurboPower Zipper"
   ClientHeight    =   5115
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   9075
   ControlBox      =   0   'False
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   341
   ScaleMode       =   3  'Pixel
   ScaleWidth      =   605
   StartUpPosition =   2  'CenterScreen
   Begin VB.CommandButton Command1 
      Caption         =   "E&xit"
      Height          =   390
      Left            =   7800
      TabIndex        =   7
      Top             =   4275
      Width           =   1230
   End
   Begin MSComctlLib.StatusBar StatusBar1 
      Align           =   2  'Align Bottom
      Height          =   360
      Left            =   0
      TabIndex        =   5
      Top             =   4755
      Width           =   9075
      _ExtentX        =   16007
      _ExtentY        =   635
      Style           =   1
      SimpleText      =   "TurboPower Zipper - A demonstration of Abbrevia 2 COM Automation. Read more about it at www.turbopower.com/abbrevia."
      _Version        =   393216
      BeginProperty Panels {8E3867A5-8586-11D1-B16A-00C0F0283628} 
         NumPanels       =   1
         BeginProperty Panel1 {8E3867AB-8586-11D1-B16A-00C0F0283628} 
         EndProperty
      EndProperty
   End
   Begin VB.CommandButton btnAdd 
      Caption         =   "&Add Files..."
      Enabled         =   0   'False
      Height          =   390
      Left            =   5190
      TabIndex        =   4
      Top             =   4275
      Width           =   1230
   End
   Begin VB.CommandButton btnExtract 
      Caption         =   "&Extract Files..."
      Enabled         =   0   'False
      Height          =   390
      Left            =   6495
      TabIndex        =   3
      Top             =   4275
      Width           =   1230
   End
   Begin MSComctlLib.ListView ListView1 
      Height          =   3645
      Left            =   75
      TabIndex        =   2
      Top             =   525
      Width           =   8955
      _ExtentX        =   15796
      _ExtentY        =   6429
      View            =   3
      LabelEdit       =   1
      MultiSelect     =   -1  'True
      LabelWrap       =   -1  'True
      HideSelection   =   0   'False
      AllowReorder    =   -1  'True
      FullRowSelect   =   -1  'True
      HoverSelection  =   -1  'True
      _Version        =   393217
      ForeColor       =   -2147483640
      BackColor       =   -2147483643
      BorderStyle     =   1
      Appearance      =   1
      NumItems        =   5
      BeginProperty ColumnHeader(1) {BDD1F052-858B-11D1-B16A-00C0F0283628} 
         Text            =   "FileName"
         Object.Width           =   6615
      EndProperty
      BeginProperty ColumnHeader(2) {BDD1F052-858B-11D1-B16A-00C0F0283628} 
         SubItemIndex    =   1
         Text            =   "Comp Size"
         Object.Width           =   1984
      EndProperty
      BeginProperty ColumnHeader(3) {BDD1F052-858B-11D1-B16A-00C0F0283628} 
         SubItemIndex    =   2
         Text            =   "Uncomp Size"
         Object.Width           =   1984
      EndProperty
      BeginProperty ColumnHeader(4) {BDD1F052-858B-11D1-B16A-00C0F0283628} 
         SubItemIndex    =   3
         Text            =   "Comp Ratio"
         Object.Width           =   1984
      EndProperty
      BeginProperty ColumnHeader(5) {BDD1F052-858B-11D1-B16A-00C0F0283628} 
         SubItemIndex    =   4
         Text            =   "CRC"
         Object.Width           =   2646
      EndProperty
   End
   Begin MSComctlLib.ProgressBar ProgressBar1 
      Height          =   315
      Left            =   3240
      TabIndex        =   1
      Top             =   105
      Width           =   5745
      _ExtentX        =   10134
      _ExtentY        =   556
      _Version        =   393216
      Appearance      =   1
   End
   Begin MSComDlg.CommonDialog CommonDialog1 
      Left            =   120
      Top             =   4215
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
      CancelError     =   -1  'True
      DefaultExt      =   "zip"
   End
   Begin VB.CommandButton btnSelect 
      Caption         =   "Select &File..."
      Height          =   375
      Left            =   90
      TabIndex        =   0
      Top             =   90
      Width           =   1125
   End
   Begin VB.Label Label1 
      Caption         =   "Progress:"
      Height          =   240
      Left            =   2475
      TabIndex        =   6
      Top             =   180
      Width           =   795
   End
End
Attribute VB_Name = "frmMain"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
' **********************************************************************
'
'   TurboPower Zipper
'   A Microsoft Visual Basic demonstration project for Abbrevia 2
'
'   (C) Copyright 1999, TurboPower Software Company
'   All Rights Reserved.
'
' **********************************************************************

Option Explicit

Const ProgramTitle = "TurboPower Zipper"
Dim WithEvents ZipKit As Abbrevia3.ZipKit
Attribute ZipKit.VB_VarHelpID = -1

Private Sub btnSelect_Click()
  On Error GoTo ErrorHandler
  
  CommonDialog1.Flags = cdlOFNExplorer
  CommonDialog1.DialogTitle = "Open a ZIP file"
  CommonDialog1.Filter = "Zip Files (*.zip)|*.zip|All Files (*.*)|*.*"
  CommonDialog1.ShowOpen
  
  ' Setting the ZipKit Filename property automatically opens the Zip file
  ' and that triggers the ZipKit_OnLoad() event, below.
  ZipKit.FileName = CommonDialog1.FileName
  If ZipKit.Count = 0 Then
    ListView1.ListItems.Clear
  End If
    
  frmMain.Caption = ProgramTitle + " - " + CommonDialog1.FileName
  btnAdd.Enabled = True
  
  If ListView1.ListItems.Count > 0 Then
    btnExtract.Enabled = True
  Else
    btnExtract.Enabled = False
  End If
  
ErrorHandler:
  Exit Sub
End Sub

Private Sub btnExtract_Click()
  Dim ExtractLocation As String
  Dim ListItem As ListItem
  
  ExtractLocation = InputBox("Extract to what folder:", "Extract")
  If Len(ExtractLocation) <> 0 Then
    ZipKit.BaseDirectory = ExtractLocation
    For Each ListItem In ListView1.ListItems
      'If ListItem.Selected Then
      If ListItem.Selected Then
        ZipKit.TagItems (ListItem.Text)
      End If
    Next
    
    frmMain.MousePointer = 11       ' Change the mouse pointer to an hourglass
    ZipKit.ExtractTaggedItems
    ProgressBar1.Value = 0
    frmMain.MousePointer = 0        ' Set the mouse pointer back to the default
  End If
End Sub

Private Sub btnAdd_Click()
  Dim FilesToAdd() As String        ' An array to hold multiple file selections
  Dim ArraySize, Counter As Integer
  
  On Error GoTo ErrorHandler
  
  CommonDialog1.Filter = "All Files (*.*)|*.*"
  CommonDialog1.FileName = ""
  CommonDialog1.Flags = cdlOFNAllowMultiselect Or cdlOFNExplorer
  CommonDialog1.DialogTitle = "Add Files to the ZIP"
  CommonDialog1.ShowOpen
  
  FilesToAdd = Split(CommonDialog1.FileName, Chr$(0))
  
  frmMain.MousePointer = 11         ' Change the mouse pointer to an hourglass
  ArraySize = UBound(FilesToAdd)
  If ArraySize = 0 Then             ' If only one file was selected,
    ZipKit.Add (FilesToAdd(0))      '  add it!
  Else                              ' Otherwise, parse the list of file names to add them all.
    For Counter = 1 To ArraySize
      ZipKit.Add (FilesToAdd(0) & "\" & FilesToAdd(Counter))
    Next
  End If
  
  ZipKit.Save                       ' No file operations take place until we call the Save method.
  DisplayArchive
  frmMain.MousePointer = 0          ' Set the mouse pointer back to the default
  
  If ListView1.ListItems.Count > 0 Then
    btnExtract.Enabled = True
  End If
    
ErrorHandler:
  Exit Sub
End Sub

Private Sub Command1_Click()
  Unload Me
End Sub

Private Sub Form_Load()
' Fired at the start of the application.

' Note that the Abbrevia DLL must be registered on your system before the call to
' CreateObject will succeed.
  Set ZipKit = CreateObject("Abbrevia3.ZipKit")
  
' You will also need to supply a valid serial number/COM key in the call to License
  ZipKit.License ("ABD2003346092F1C06F")
  
' By setting the ZipKit's AutoSave to false, all operations will be postponed until we
' explicitly call the ZipKit's Save method.
  ZipKit.AutoSave = False
  ZipKit.StoreOptions = soFreshen
  
  
  
'  Set ZipKit.OnLoad = Nothing 'GetReference("ZipKit_OnLoad")
End Sub

Private Sub Form_Unload(Cancel As Integer)
' Frees the reference to the ZipKit
  Set ZipKit = Nothing
End Sub

Private Sub ZipKit_OnArchiveProgress(ByVal Progress As Byte, Abort As Boolean)
' Automatically updates the progress meter during any archive operations
  ProgressBar1.Value = Progress
End Sub

Private Sub DisplayArchive()
' Fills in the listview with the contents of the Zip file.
  Dim ListItem As ListItem
  Dim Item As Abbrevia3.ZipItem
  Dim i As Integer
  
  ListView1.ListItems.Clear
  For Each Item In ZipKit
  'For i = 0 To ZipKit.Count - 1
    'Set Item = ZipKit.Item(i)
    Set ListItem = ListView1.ListItems.Add(, , Item.FileName)
    ListItem.SubItems(1) = CStr(Item.CompressedSize)
    'ListItem.SubItems(2) = CStr(Item.UnCompressedSize)
    ListItem.SubItems(3) = CStr(FormatNumber(Item.CompressionRatio, 0))
    ListItem.SubItems(4) = CStr(Item.CRC32St)
  Next
  ProgressBar1.Value = 0
End Sub

Private Sub ZipKit_OnLoad()
' Fired as soon as the archive file name is set.
  DisplayArchive
End Sub

