(* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is TurboPower Abbrevia
 *
 * The Initial Developer of the Original Code is
 * TurboPower Software
 *
 * Portions created by the Initial Developer are Copyright (C) 1997-2002
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * ***** END LICENSE BLOCK ***** *)

{*********************************************************}
{* ABBREVIA: UMAIN.PAS                                   *}
{* Copyright (c) TurboPower Software Co 1997             *}
{* All rights reserved.                                  *}
{*********************************************************}
{* ABBREVIA: TPZip                                       *}
{*********************************************************}

{$I AbDefine.inc}

unit UMain;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  Menus, ExtCtrls, FileCtrl, StdCtrls, Gauges, Buttons, 

  AbArcTyp, AbUtils, AbZipOut, AbMeter, AbBase, AbBrowse;

type
  TForm1 = class(TForm)
    MainMenu1: TMainMenu;
    File1: TMenuItem;
    Open1: TMenuItem;
    Save1: TMenuItem;
    N1: TMenuItem;
    Exit1: TMenuItem;
    Items1: TMenuItem;
    Help1: TMenuItem;
    Contents1: TMenuItem;
    N2: TMenuItem;
    About1: TMenuItem;
    Preferences1: TMenuItem;
    View1: TMenuItem;
    Attributes1: TMenuItem;
    za0: TMenuItem;
    za1: TMenuItem;
    za8: TMenuItem;
    Hierarchy1: TMenuItem;
    Style1: TMenuItem;
    Panel1: TPanel;
    Panel2: TPanel;
    za2: TMenuItem;
    za3: TMenuItem;
    za4: TMenuItem;
    za5: TMenuItem;
    za6: TMenuItem;
    za7: TMenuItem;
    za9: TMenuItem;
    za10: TMenuItem;
    N3: TMenuItem;
    None1: TMenuItem;
    All1: TMenuItem;
    Panel3: TPanel;
    Panel4: TPanel;
    DriveComboBox1: TDriveComboBox;
    FilterComboBox1: TFilterComboBox;
    DirectoryListBox1: TDirectoryListBox;
    FileListBox1: TFileListBox;
    Panel5: TPanel;
    FontDialog1: TFontDialog;
    Font1: TMenuItem;
    Panel6: TPanel;
    OpenDialog1: TOpenDialog;
    CompressionMethodToUse1: TMenuItem;
    Store1: TMenuItem;
    Deflate1: TMenuItem;
    Best1: TMenuItem;
    DeflationOption1: TMenuItem;
    Maximum1: TMenuItem;
    Normal1: TMenuItem;
    Fast1: TMenuItem;
    SuperFast1: TMenuItem;
    ExtractOptions1: TMenuItem;
    CreateDirs1: TMenuItem;
    RestorePath1: TMenuItem;
    Password1: TMenuItem;
    StoreOptions1: TMenuItem;
    RemoveDots1: TMenuItem;
    RecurseTree1: TMenuItem;
    StripPath1: TMenuItem;
    AddFiles1: TMenuItem;
    DeleteFiles1: TMenuItem;
    ExtractFiles1: TMenuItem;
    FreshenFiles1: TMenuItem;
    PopupMenu1: TPopupMenu;
    Delete1: TMenuItem;
    Run1: TMenuItem;
    Move1: TMenuItem;
    Freshen1: TMenuItem;
    Extract1: TMenuItem;
    Confirmations1: TMenuItem;
    Close1: TMenuItem;
    Convert1: TMenuItem;
    N4: TMenuItem;
    Default1: TMenuItem;
    Panel8: TPanel;
    SpeedButton1: TSpeedButton;
    SpeedButton2: TSpeedButton;
    SpeedButton3: TSpeedButton;
    SpeedButton4: TSpeedButton;
    SpeedButton5: TSpeedButton;
    SpeedButton7: TSpeedButton;
    SpeedButton8: TSpeedButton;
    SpeedButton9: TSpeedButton;
    SpeedButton10: TSpeedButton;
    SpeedButton11: TSpeedButton;
    SpeedButton12: TSpeedButton;
    SpeedButton13: TSpeedButton;
    SpeedButton14: TSpeedButton;
    Image1: TImage;
    ArchiveLabel: TLabel;
    Label1: TLabel;
    Label2: TLabel;
    FileComment1: TMenuItem;
    sbNone: TSpeedButton;
    sbAll: TSpeedButton;
    sbDef: TSpeedButton;
    Edit1: TEdit;
    Label3: TLabel;
    N5: TMenuItem;
    OS3: TMenuItem;
    OS4: TMenuItem;
    OS2: TMenuItem;
    OS1: TMenuItem;
    OS6: TMenuItem;
    OS5: TMenuItem;
    AbbreviaontheWeb1: TMenuItem;
    AbMeter1: TAbMeter;
    AbMeter2: TAbMeter;
    ShowEmptyfolders1: TMenuItem;
    TempDirectory1: TMenuItem;
    Logging1: TMenuItem;
    AbZipOutline1: TAbZipOutline;

    procedure AbZipOutline1Change(Sender: TObject);
    procedure AbZipOutline1ConfirmSave(Sender: TObject;
      var Confirm: Boolean);
    procedure AbZipOutline1DblClick(Sender: TObject);
    procedure AbZipOutline1DragDrop(Sender, Source: TObject; X,
      Y: Integer);
    procedure AbZipOutline1DragOver(Sender, Source: TObject; X, Y: Integer;
      State: TDragState; var Accept: Boolean);
    procedure AbZipOutline1MouseDown(Sender: TObject; Button: TMouseButton;
      Shift: TShiftState; X, Y: Integer);
    procedure AbZipOutline1WindowsDrop(Sender: TObject;
      FileName: string);
    procedure All1Click(Sender: TObject);
    procedure Best1Click(Sender: TObject);
    procedure Confirmations1Click(Sender: TObject);
    procedure CreateDirs1Click(Sender: TObject);
    procedure Exit1Click(Sender: TObject);
    procedure FileListBox1DragDrop(Sender, Source: TObject; X, Y: Integer);
    procedure FileListBox1DragOver(Sender, Source: TObject; X, Y: Integer;
      State: TDragState; var Accept: Boolean);
    procedure Font1Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure Hierarchy1Click(Sender: TObject);
    procedure None1Click(Sender: TObject);
    procedure Open1Click(Sender: TObject);
    procedure RestorePath1Click(Sender: TObject);
    procedure Save1Click(Sender: TObject);
    procedure StripPath1Click(Sender: TObject);
    procedure SuperFast1Click(Sender: TObject);
    procedure za10Click(Sender: TObject);

    procedure Delete1Click(Sender: TObject);
    procedure Extract1Click(Sender: TObject);
    procedure Freshen1Click(Sender: TObject);
    procedure Move1Click(Sender: TObject);
    procedure Password1Click(Sender: TObject);
    procedure AddFiles1Click(Sender: TObject);
    procedure FreshenFiles1Click(Sender: TObject);
    procedure SelectBaseDirectory1Click(Sender: TObject);
    procedure AbZipOutline1ArchiveItemProgress(Sender: TObject;
      Item: TAbArchiveItem; Progress: Byte; var Abort: Boolean);
    procedure AbZipOutline1NeedPassword(Sender: TObject;
      var NewPassword: AnsiString);
    procedure DeleteFiles1Click(Sender: TObject);
    procedure ExtractFiles1Click(Sender: TObject);
    procedure FormDestroy(Sender: TObject);
    procedure Close1Click(Sender: TObject);
    procedure AbZipOutline1Load(Sender: TObject);
    procedure Convert1Click(Sender: TObject);
    procedure AbZipOutline1ConfirmOverwrite(var Name: string;
      var Confirm: Boolean);
    procedure Default1Click(Sender: TObject);
    procedure Contents1Click(Sender: TObject);
    procedure About1Click(Sender: TObject);
    procedure FileListBox1DblClick(Sender: TObject);
    procedure AbZipOutline1EndDrag(Sender, Target: TObject; X, Y: Integer);
    procedure FileListBox1MouseDown(Sender: TObject; Button: TMouseButton;
      Shift: TShiftState; X, Y: Integer);
    procedure FileListBox1MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure AbZipOutline1MouseMove(Sender: TObject; Shift: TShiftState;
      X, Y: Integer);
    procedure Edit1Exit(Sender: TObject);
    procedure FormKeyPress(Sender: TObject; var Key: Char);
    procedure OS5Click(Sender: TObject);
    procedure AbZipOutline1ConfirmProcessItem(Sender: TObject;
      Item: TAbArchiveItem; ProcessType: TAbProcessType;
      var Confirm: Boolean);
    procedure AbZipOutline1ProcessItemFailure(Sender: TObject;
      Item: TAbArchiveItem; const ProcessType: TAbProcessType;
      ErrorClass: TAbErrorClass; ErrorCode: Integer);
    procedure TurboPowerontheWeb1Click(Sender: TObject);
    procedure AbbreviaontheWeb1Click(Sender: TObject);
    procedure TempDirectory1Click(Sender: TObject);
    procedure Logging1Click(Sender: TObject);
  private
    { Private declarations }
    OutlineX, OutlineY, FileX, FileY : Integer;
    StubName : string;
    IgnoreDuplicateWarning : Boolean;
    procedure ReadIniSettings;
    procedure SaveIniSettings;
    procedure SetCaption;
    procedure UpdateMenu;
    procedure DoConfirm( Sender : TObject; Item : TAbArchiveItem;
                       var Confirm : Boolean; Caption : string );
    procedure GetMinMaxInfo( var Msg: TWMGetMinMaxInfo );
              message WM_GETMINMAXINFO;
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.DFM}

uses
  AbConst,
  AbDlgDir,
  AbDlgPwd,
  AbZBrows,
  AbZipTyp,
  dgAbout,
  IniFiles,
  Outline,
  ShellAPI,
  UBaseDlg,
  UDemoDlg,
  uSplash;

procedure TForm1.All1Click(Sender: TObject);
var
  i : Integer;
begin
  for i := 0 to Ord( High( TAbZipAttribute ) ) do
    Attributes1.Items[i].Checked := True;
  AbZipOutline1.Attributes := [zaCompressedSize, zaCompressionMethod,
                      zaCompressionRatio, zaCRC, zaExternalFileAttributes,
                      zaInternalFileAttributes, zaEncryption, zaTimeStamp,
                      zaUncompressedSize, zaVersionMade, zaVersionNeeded,
                      zaComment];
  AbZipOutline1.Update;
end;

procedure TForm1.Exit1Click(Sender: TObject);
begin
  Close;
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
  ReadIniSettings;
  SetCaption;
  UpdateMenu;
  if ParamCount > 0 then
    try
      AbZipOutline1.FileName := ParamStr( 1 );
    except
    end;

end;

procedure TForm1.Hierarchy1Click(Sender: TObject);
begin
  Hierarchy1.Checked := not Hierarchy1.Checked;
  AbZipOutline1.Hierarchy := Hierarchy1.Checked;
end;

procedure TForm1.None1Click(Sender: TObject);
var
  i : Integer;
begin
  for i := 0 to pred( Attributes1.Count ) do
    Attributes1.Items[i].Checked := False;
  AbZipOutline1.Attributes := [];
  AbZipOutline1.Update;
end;

procedure TForm1.Save1Click(Sender: TObject);
begin
  AbZipOutline1.Save;
end;

procedure TForm1.SetCaption;
begin
  Caption := 'TPZip ' + AbZipOutline1.Version + ' - ' +
             AbZipOutline1.FileName;
end;

procedure TForm1.UpdateMenu;
var
  i : TAbZipAttribute;
begin
  with AbZipOutline1 do begin
    i := Low( TAbZipAttribute );
    while i <> High( TAbZipAttribute ) do begin
      Attributes1.Items[Ord(i)].Checked := i in Attributes;
      i := succ( i );
    end;
    Hierarchy1.Checked := Hierarchy;
//    OS1.Checked := Ord( OutlineStyle ) = 0;
//    OS2.Checked := Ord( OutlineStyle ) = 1;
//    OS3.Checked := Ord( OutlineStyle ) = 2;
//    OS4.Checked := Ord( OutlineStyle ) = 3;
//    OS5.Checked := Ord( OutlineStyle ) = 4;
//    OS6.Checked := Ord( OutlineStyle ) = 5;

    Best1.Checked := CompressionMethodToUse = smBestMethod;
    Deflate1.Checked := CompressionMethodToUse = smDeflated;
    Store1.Checked := CompressionMethodToUse = smStored;
    {deflation options}
    Normal1.Checked := DeflationOption = doNormal;
    Maximum1.Checked := DeflationOption = doMaximum;
    Fast1.Checked := DeflationOption = doFast;
    SuperFast1.Checked := DeflationOption = doSuperFast;
    {extractOptions}
    CreateDirs1.Checked := eoCreateDirs in ExtractOptions;
    RestorePath1.Checked := eoRestorePath in ExtractOptions;
    {StoreOptions}
    RecurseTree1.Checked := soRecurse in StoreOptions;
    StripPath1.Checked := soStripPath in StoreOptions;
    RemoveDots1.Checked := soRemoveDots in StoreOptions;
  end;
end;

procedure TForm1.za10Click(Sender: TObject);
var
  Item : TMenuItem;
begin
  Item := (Sender as TMenuItem);
  Item.Checked := not Item.Checked;
  with AbZipOutline1 do
    if Item.Checked then
      Attributes := Attributes + [TAbZipAttribute( Item.Tag )]
    else
      Attributes := Attributes - [TAbZipAttribute( Item.Tag )];
  AbZipOutline1.Update;
end;

procedure TForm1.Font1Click(Sender: TObject);
begin
  if FontDialog1.Execute then
    with FontDialog1 do begin
      AbZipOutline1.Font := Font;
      DirectoryListBox1.Font := Font;
      FileListBox1.Font := Font;
      DriveComboBox1.Font := Font;
      FilterComboBox1.Font := Font;
    end;
end;

procedure TForm1.Open1Click(Sender: TObject);
begin
  if OpenDialog1.Execute then begin
    AbZipOutline1.FileName := OpenDialog1.FileName;
  end;
end;

procedure TForm1.AbZipOutline1DragOver(Sender, Source: TObject; X,
  Y: Integer; State: TDragState; var Accept: Boolean);
begin
  Accept := Source is TFileListBox;
end;

procedure TForm1.AbZipOutline1DragDrop(Sender, Source: TObject; X,
  Y: Integer);
var
  i, j : Integer;
  ZB : TAbZipBrowser;
  IsZip : Boolean;
  ZipName : string;
begin
  if Source is TFileListBox then
    with (Source as TFileListBox ) do
      if SelCount = 1 then begin
        for i := 0 to pred( Items.Count ) do
          if FileListBox1.Selected[i] then begin
            IsZip := False;
            ZB := TAbZipBrowser.Create( Self );
            try
              try
                ZB.FileName := Directory + '\' + Items[i];
                IsZip := True;
              except
              end;
            finally
              ZB.Free;
            end;
            if IsZip then
              {only one file, and it is a zip file}
              AbZipOutline1.FileName := Directory + '\' + Items[i]
            else if AbZipOutline1.FileName <> '' then
              {only one file, and it's not a zip file}
              AbZipOutline1.AddFiles( Directory + '\' + Items[i], 0 )
            else begin
              if OpenDialog1.Execute then begin
                AbZipOutline1.FileName := OpenDialog1.FileName;
                AbZipOutline1.AddFiles( Directory + '\' + Items[i], 0 );
              end;
            end;
            break;
          end;
      end
      else begin
        {multiple files dropped...}
        IsZip := False;
        ZB := TAbZipBrowser.Create( Self );
        try
          for i := 0 to pred( Items.Count ) do
            if FileListBox1.Selected[i] then begin
              try
                ZB.FileName := Directory + '\' + Items[i];
                IsZip := True;
                ZipName := ZB.FileName;
                break;
              except
              end;
            end;
        finally
          ZB.Free;
        end;
        if IsZip and ( Application.MessageBox( 
                     'One of the dropped files is a Zip Archive. Open it?',
                     'Open or Add Files?',
                     MB_YESNO ) = IDYES ) then
            AbZipOutline1.FileName := ZipName
        else begin
          if AbZipOutline1.FileName <> '' then begin
            for i := 0 to pred( Items.Count ) do
              if FileListBox1.Selected[i] then
                AbZipOutline1.AddFiles( Directory + '\' + Items[i], 0 );
          end
          else begin
            if OpenDialog1.Execute then begin
              AbZipOutline1.FileName := OpenDialog1.FileName;
              for j := 0 to pred( Items.Count ) do
                if FileListBox1.Selected[j] then
                  AbZipOutline1.AddFiles( Directory + '\' + Items[j], 0 )
            end;
          end;
        end;
      end;
end;

procedure TForm1.AbZipOutline1DblClick(Sender: TObject);
var
  Restoring : Boolean;
  zFileName : array[0..79] of Char;
  TempDir, SaveDir : string;
  TempPath : array [0..255] of Char;
  TempName : string;
begin
  GetTempPath( sizeof( TempPath ), TempPath );
  SaveDir := StrPas( TempPath );
  if SaveDir[Length(SaveDir)] = '\' then
    Delete( SaveDir, Length(SaveDir), 1 );
  StrPCopy( TempPath, SaveDir );

  with AbZipOutline1 do begin
    if SelectedZipItem <> nil then begin
      TempDir := BaseDirectory;
      Restoring := eoRestorePath in ExtractOptions;
      ExtractOptions := ExtractOptions - [eoRestorePath];
      BaseDirectory := SaveDir;
      try
        ExtractFiles( SelectedZipItem.FileName );
        TempName := SelectedZipItem.FileName;
        AbUnfixName( TempName );
        ShellExecute( Application.MainForm.Handle, nil,
                      StrPCopy( zFileName, ExtractFileName( TempName ) ),
                      '', TempPath, SW_SHOWNORMAL );
      finally
        BaseDirectory := TempDir;
        if Restoring then
          ExtractOptions := ExtractOptions + [eoRestorePath];
      end;
    end;
  end;
end;

procedure TForm1.AbZipOutline1MouseDown(Sender: TObject;
  Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
var
  i : Integer;
  PS, PC : TPoint;
begin
  if Button = mbLeft then begin
    OutlineX := X;
    OutlineY := Y;
  end
  else if Button = mbRight then begin
    {enable appropriate popup menu items.}
    {prepare popup menu}
    if AbZipOutline1.Count > 0 then begin
      {there are items in the outline - select the item under the mouse}
      i := AbZipOutline1.GetOutlineItem( X, Y );
      if i <> -1 then
        AbZipOutline1.SelectedItem := i;
    end;
    if AbZipOutline1.SelectedZipItem <> nil then begin
      PC.X := X;
      PC.Y := Y;
      PS := AbZipOutline1.ClientToScreen( PC );
      AbZipOutline1.PopupMenu.Popup( PS.X, PS.Y );
    end;
  end;
end;

procedure TForm1.FileListBox1DragOver(Sender, Source: TObject; X,
  Y: Integer; State: TDragState; var Accept: Boolean);
begin
  Accept := Source is TAbZipOutline;
end;

procedure TForm1.FileListBox1DragDrop(Sender, Source: TObject; X,
  Y: Integer);
var
  TempDir : string;
begin
  if Source is TAbZipOutline then
    with (Source as TAbZipOutline ) do begin
      TempDir := BaseDirectory;
      BaseDirectory := FileListBox1.Directory;
      try
        ExtractFiles( SelectedZipItem.FileName );
        FileListBox1.Update;
      finally
        BaseDirectory := TempDir;
      end;
    end;
end;

procedure TForm1.AbZipOutline1WindowsDrop(Sender: TObject;
  FileName: string);
var
  ZB : TAbZipBrowser;
  IsZip : Boolean;
begin
  IsZip := False;
  ZB := TAbZipBrowser.Create( Self );
  try
    try
      ZB.FileName := FileName;
      IsZip := True;
    except
    end;
  finally
    ZB.Free;
  end;

  if IsZip and ( AbZipOutline1.FileName = '' ) then
    AbZipOutline1.FileName := FileName
  else if AbZipOutline1.FileName = '' then begin
    if OpenDialog1.Execute then begin
      AbZipOutline1.FileName := OpenDialog1.FileName;
      AbZipOutline1.AddFiles( FileName, 0 );
    end;
  end
  else begin
    {This is a Zip file, but there's already an open archive}
    if Application.MessageBox( 'Open this file as an archive?',
                   'Open or Add File', MB_YESNO ) = IDYES then
      AbZipOutline1.FileName := FileName
    else
      AbZipOutline1.AddFiles( FileName, 0 );
  end;
end;

procedure TForm1.Best1Click(Sender: TObject);
var
  Item : TMenuItem;
begin
  Store1.Checked := False;
  Deflate1.Checked := False;
  Best1.Checked := False;
  Item := (Sender as TMenuItem);
  Item.Checked := True;
  AbZipOutline1.CompressionMethodToUse := TAbZipSupportedMethod( Item.Tag );
end;

procedure TForm1.SuperFast1Click(Sender: TObject);
var
  Item : TMenuItem;
begin
  Normal1.Checked := False;
  Maximum1.Checked := False;
  Fast1.Checked := False;
  SuperFast1.Checked := False;
  Item := (Sender as TMenuItem);
  Item.Checked := True;
  AbZipOutline1.DeflationOption := TAbZipDeflationOption( Item.Tag );
end;

procedure TForm1.CreateDirs1Click(Sender: TObject);
var
  Item : TMenuItem;
begin
  Item := Sender as TMenuItem;
  Item.Checked := not Item.Checked;
  if Item.Checked then
    AbZipOutline1.ExtractOptions := AbZipOutline1.ExtractOptions +
                                    [eoCreateDirs]
  else
    AbZipOutline1.ExtractOptions := AbZipOutline1.ExtractOptions -
                                    [eoCreateDirs];
end;

procedure TForm1.RestorePath1Click(Sender: TObject);
var
  Item : TMenuItem;
begin
  Item := Sender as TMenuItem;
  Item.Checked := not Item.Checked;
  if Item.Checked then
    AbZipOutline1.ExtractOptions := AbZipOutline1.ExtractOptions +
                                    [eoRestorePath]
  else
    AbZipOutline1.ExtractOptions := AbZipOutline1.ExtractOptions -
                                    [eoRestorePath];
end;

procedure TForm1.StripPath1Click(Sender: TObject);
var
  Item : TMenuItem;
begin
  Item := Sender as TMenuItem;
  Item.Checked := not Item.Checked;
  if Item.Checked then
    AbZipOutline1.StoreOptions := AbZipOutline1.StoreOptions +
                                  [TAbStoreOption(Item.Tag)]
  else
    AbZipOutline1.StoreOptions := AbZipOutline1.StoreOptions -
                                  [TAbStoreOption(Item.Tag)];
end;

procedure TForm1.AbZipOutline1Change(Sender: TObject);
begin
  if AbZipOutline1.FileName <> '' then
    ArchiveLabel.Caption := Format( 'Archive %s contains %d items.',
                              [AbZipOutline1.FileName, AbZipOutline1.Count] )
  else
    ArchiveLabel.Caption := 'No Archive Open';
end;

procedure TForm1.Confirmations1Click(Sender: TObject);
begin
  Confirmations1.Checked := not Confirmations1.Checked;
  SpeedButton7.Down := Confirmations1.Checked;
end;

procedure TForm1.DoConfirm( Sender : TObject; Item : TAbArchiveItem;
                            var Confirm : Boolean; Caption : string );
var
  pMessage : array [0..255] of Char;
  pCaption : array [0..80] of Char;
begin
  if Confirmations1.Checked then
    Confirm :=  MessageBox( 0,
                            StrPCopy( pMessage,
                                      Format( '%s %s?',
                                      [Caption, Item.FileName] ) ),
                            StrPCopy( pCaption, 'Confirmation' ),
                            MB_ICONQUESTION or MB_OKCANCEL ) = IDOK;
end;

procedure TForm1.AbZipOutline1ConfirmSave(Sender: TObject;
  var Confirm: Boolean);
var
  pMessage : array [0..255] of Char;
  pCaption : array [0..80] of Char;
begin
  if Confirmations1.Checked then
    Confirm :=  MessageBox( 0,
                            StrPCopy( pMessage,
                                      Format( 'Save %s?',
                                      [TAbZipOutline(Sender).FileName] ) ),
                            StrPCopy( pCaption, 'Confirmation' ),
                            MB_ICONQUESTION or MB_OKCANCEL ) = IDOK;
end;

procedure TForm1.Delete1Click(Sender: TObject);
begin
  if AbZipOutline1.SelectedZipItem <> nil then
    with AbZipOutline1 do begin
      AbZipOutline1.ClearTags;
      SelectedZipItem.Tagged := True;
      try
        DeleteTaggedItems;
      finally
        ClearTags;
      end;
    end;
end;

procedure TForm1.Extract1Click(Sender: TObject);
begin
  if AbZipOutline1.SelectedZipItem <> nil then begin
    BaseDirDlg := TBaseDirDlg.Create( Application );
    try
      with BaseDirDlg, AbZipOutline1 do begin
        Caption := 'Extract Selected File';
        Edit1.Text := SelectedZipItem.FileName;
        Edit1.Enabled := False;
        ActionLabel.Caption := 'Target Directory:';
        if BaseDirectory <> '' then
          DLB.Directory := BaseDirectory;
        CheckBox1.Caption := 'Restore Path';
        CheckBox1.Checked := eoRestorePath in ExtractOptions;
        CheckBox2.Caption := 'Create Directories';
        CheckBox2.Checked := eoCreateDirs in ExtractOptions;
        ShowModal;
        if ModalResult = mrOK then begin
          BaseDirectory := DirLabel.Caption;
          if CheckBox1.Checked then
            ExtractOptions := ExtractOptions + [eoRestorePath]
          else
            ExtractOptions := ExtractOptions - [eoRestorePath];
          if CheckBox2.Checked then
            ExtractOptions := ExtractOptions + [eoCreateDirs]
          else
            ExtractOptions := ExtractOptions - [eoCreateDirs];
          ClearTags;
          SelectedZipItem.Tagged := True;
          try
            ExtractTaggedItems;
          finally
            ClearTags;
          end;
          FileListBox1.Update;
        end;
      end;
    finally
      BaseDirDlg.Free;
    end;
  end;
end;

procedure TForm1.Freshen1Click(Sender: TObject);
begin
  if AbZipOutline1.SelectedZipItem <> nil then begin
    BaseDirDlg := TBaseDirDlg.Create( Application );
    try
      with BaseDirDlg, AbZipOutline1 do begin
        Caption := 'Freshen Selected File';
        Edit1.Text := SelectedZipItem.FileName;
        Edit1.Enabled := False;
        ActionLabel.Caption := 'Source Directory:';
        if BaseDirectory <> '' then
          DLB.Directory := BaseDirectory;
        CheckBox1.Caption := 'Recurse';
        CheckBox1.Checked := soRecurse in StoreOptions;
        CheckBox2.Caption := 'Strip Path';
        CheckBox2.Checked := soStripPath in StoreOptions;

        ShowModal;
        if ModalResult = mrOK then begin
          if CheckBox1.Checked then
            StoreOptions := StoreOptions + [soRecurse]
          else
            StoreOptions := StoreOptions - [soRecurse];
          if CheckBox2.Checked then
            StoreOptions := StoreOptions + [soStripPath]
          else
            StoreOptions := StoreOptions - [soStripPath];
          BaseDirectory := DirLabel.Caption;

          ClearTags;
          SelectedZipItem.Tagged := True;
          try
            FreshenTaggedItems;
          finally
            ClearTags;
          end;
          FileListBox1.Update;
        end;
      end;
    finally
      BaseDirDlg.Free;
    end;
  end;
end;

procedure TForm1.Move1Click(Sender: TObject);
begin
  DemoDlg := TDemoDlg.Create( Application );
  try
    with DemoDlg do begin
      Caption := 'Move File to New Path';
      Edit1.Text := AbZipOutline1.SelectedZipItem.FileName;
      ShowModal;
      if ModalResult = mrOK then
        AbZipOutline1.Move( AbZipOutline1.SelectedZipItem, Edit1.Text );
    end;
  finally
    DemoDlg.Free;
  end;
end;

procedure TForm1.Password1Click(Sender: TObject);
var
  Dlg : TPassWordDlg;
begin
  Dlg := TPassWordDlg.Create( Application );
  try
    Dlg.Edit1.Text := string(AbZipOutline1.Password);
    Dlg.ShowModal;
    if Dlg.ModalResult = mrOK then
      AbZipOutline1.Password := AnsiString(Dlg.Edit1.Text);
  finally
    Dlg.Free;
  end;
  if Length( AbZipOutline1.Password ) > 0 then
    Image1.Visible := True
  else
    Image1.Visible := False;
end;

procedure TForm1.AddFiles1Click(Sender: TObject);
begin
  BaseDirDlg := TBaseDirDlg.Create( Application );
  try
    with BaseDirDlg, AbZipOutline1 do begin
      Caption := 'Add Files with FileMask';
      Edit1.Text := '*.*';
      ActionLabel.Caption := 'Source Directory';
      CheckBox1.Caption := 'Recurse';
      CheckBox1.Checked := soRecurse in StoreOptions;
      CheckBox2.Caption := 'Strip Path';
      CheckBox2.Checked := soStripPath in StoreOptions;

      if BaseDirectory <> '' then
        DLB.Directory := BaseDirectory;

      ShowModal;
      if ModalResult = mrOK then begin
        if CheckBox1.Checked then
          StoreOptions := StoreOptions + [soRecurse]
        else
          StoreOptions := StoreOptions - [soRecurse];
        if CheckBox2.Checked then
          StoreOptions := StoreOptions + [soStripPath]
        else
          StoreOptions := StoreOptions - [soStripPath];
        BaseDirectory := DirLabel.Caption;
        AddFiles( Edit1.Text, 0 );
      end;
    end;
  finally
    BaseDirDlg.Free;
  end;
end;

procedure TForm1.FreshenFiles1Click(Sender: TObject);
begin
  BaseDirDlg := TBaseDirDlg.Create( Application );
  try
    with BaseDirDlg, AbZipOutline1 do begin
      Caption := 'Freshen Files with FileMask';
      Edit1.Text := '*.*';
      ActionLabel.Caption := 'Source Directory';
      CheckBox1.Caption := 'Recurse';
      CheckBox1.Checked := soRecurse in StoreOptions;
      CheckBox2.Caption := 'Strip Path';
      CheckBox2.Checked := soStripPath in StoreOptions;
      if BaseDirectory <> '' then
        DLB.Directory := BaseDirectory;

      ShowModal;
      if ModalResult = mrOK then begin
        if CheckBox1.Checked then
          StoreOptions := StoreOptions + [soRecurse]
        else
          StoreOptions := StoreOptions - [soRecurse];
        if CheckBox2.Checked then
          StoreOptions := StoreOptions + [soStripPath]
        else
          StoreOptions := StoreOptions - [soStripPath];
        BaseDirectory := DirLabel.Caption;
        FreshenFiles( Edit1.Text );
      end;
    end;
  finally
    BaseDirDlg.Free;
  end;
end;

procedure TForm1.SelectBaseDirectory1Click(Sender: TObject);
begin
  with TAbDirDlg.Create(Self) do begin
    Caption := 'Directory';
    AdditionalText := 'Select folder to extract into';
    if Execute then
      AbZipOutline1.BaseDirectory := SelectedFolder;
    Free;
  end;
end;

procedure TForm1.AbZipOutline1ArchiveItemProgress(Sender: TObject;
  Item: TAbArchiveItem; Progress: Byte; var Abort: Boolean);
var
  ActionString : string;
begin
  case Item.Action of
    aaAdd : ActionString := 'Adding  ';
    aaFreshen : ActionString := 'Freshening  ';
  else
    ActionString :='Extracting  ';
  end;
  Panel5.Caption := ActionString + Item.FileName + '   ';
  if Progress = 100 then begin
    Panel5.Caption := 'Finished   ';
  end;
end;

procedure TForm1.AbZipOutline1NeedPassword(Sender: TObject;
  var NewPassword: AnsiString);
var
  Dlg : TPassWordDlg;
begin
  Dlg := TPassWordDlg.Create( Application );
  try
    Dlg.ShowModal;
    if Dlg.ModalResult = mrOK then
      NewPassword := AnsiString(Dlg.Edit1.Text);
  finally
    Dlg.Free;
  end;
  if Length( NewPassword ) > 0 then
    Image1.Visible := True;
end;

procedure TForm1.DeleteFiles1Click(Sender: TObject);
begin
  DemoDlg := TDemoDlg.Create( Application );
  try
    with DemoDlg do begin
      Caption := 'Delete Files with FileMask';
      Edit1.Text := '*.*';
      ShowModal;
      if ModalResult = mrOK then
        AbZipOutline1.DeleteFiles( Edit1.Text );
    end;
  finally
    DemoDlg.Free;
  end;
end;

procedure TForm1.ExtractFiles1Click(Sender: TObject);
begin
  BaseDirDlg := TBaseDirDlg.Create( Application );
  try
    with BaseDirDlg, AbZipOutline1 do begin
      Caption := 'Extract Files with FileMask';
      Edit1.Text := '*.*';
      ActionLabel.Caption := 'Target Directory:';
      if BaseDirectory <> '' then
        DLB.Directory := BaseDirectory;
      CheckBox1.Caption := 'Restore Path';
      CheckBox1.Checked := eoRestorePath in ExtractOptions;
      CheckBox2.Caption := 'Create Directories';
      CheckBox2.Checked := eoCreateDirs in ExtractOptions;
      ShowModal;
      if ModalResult = mrOK then begin
        BaseDirectory := BaseDirDlg.DLB.Directory;
        if CheckBox1.Checked then
          ExtractOptions := ExtractOptions + [eoRestorePath]
        else
          ExtractOptions := ExtractOptions - [eoRestorePath];
        if CheckBox2.Checked then
          ExtractOptions := ExtractOptions + [eoCreateDirs]
        else
          ExtractOptions := ExtractOptions - [eoCreateDirs];
        ExtractFiles( Edit1.Text );
        FileListBox1.Update;
      end;
    end;
  finally
    BaseDirDlg.Free;
  end;
end;

procedure TForm1.FormDestroy(Sender: TObject);
begin
  AbZipOutline1.Save;
  SaveIniSettings;
end;

procedure TForm1.ReadIniSettings;
var
  Value : Integer;
  Exists : Boolean;
begin
  with TIniFile.Create( ChangeFileExt( Application.ExeName, '.INI' ) ) do begin
    try
      {view menu}
      Exists := ReadBool( 'General', 'Exists', False );
      if Exists then begin
        AbZipOutline1.Attributes := [];
        if ReadBool( 'View', 'CSize', False ) then
          AbZipOutline1.Attributes := AbZipOutline1.Attributes +
                                      [zaCompressedSize];
        if ReadBool( 'View', 'CMethod', False ) then
          AbZipOutline1.Attributes := AbZipOutline1.Attributes +
                                      [zaCompressionMethod];
        if ReadBool( 'View', 'CRatio', False ) then
          AbZipOutline1.Attributes := AbZipOutline1.Attributes +
                                      [zaCompressionRatio];
        if ReadBool( 'View', 'CRC', False ) then
          AbZipOutline1.Attributes := AbZipOutline1.Attributes +
                                      [zaCRC];
        if ReadBool( 'View', 'EFA', False ) then
          AbZipOutline1.Attributes := AbZipOutline1.Attributes +
                                      [zaExternalFileAttributes];
        if ReadBool( 'View', 'IFA', False ) then
          AbZipOutline1.Attributes := AbZipOutline1.Attributes +
                                      [zaInternalFileAttributes];
        if ReadBool( 'View', 'Encryption', False ) then
          AbZipOutline1.Attributes := AbZipOutline1.Attributes +
                                      [zaEncryption];
        if ReadBool( 'View', 'TimeStamp', False ) then
          AbZipOutline1.Attributes := AbZipOutline1.Attributes +
                                      [zaTimeStamp];
        if ReadBool( 'View', 'USize', False ) then
          AbZipOutline1.Attributes := AbZipOutline1.Attributes +
                                      [zaUnCompressedSize];
        if ReadBool( 'View', 'MadeBy', False ) then
          AbZipOutline1.Attributes := AbZipOutline1.Attributes +
                                      [zaVersionMade];
        if ReadBool( 'View', 'Needed', False ) then
          AbZipOutline1.Attributes := AbZipOutline1.Attributes +
                                      [zaVersionNeeded];
        if ReadBool( 'View', 'Comment', False ) then
          AbZipOutline1.Attributes := AbZipOutline1.Attributes +
                                      [zaComment];

        AbZipOutline1.Hierarchy := ReadBool( 'View', 'Hierarchy', True );

//        Value := ReadInteger( 'View', 'OutlineStyle', -1 );
//        if Value <> -1 then
//          AbZipOutline1.OutlineStyle := TOutlineStyle( Value );
        {preferences menu}
        AbZipOutline1.BaseDirectory := ReadString( 'Preferences',
                                       'BaseDirectory',
                                       ExtractFilePath( Application.ExeName ) );
        if not DirectoryExists( AbZipOutline1.BaseDirectory ) then
          AbZipOutline1.BaseDirectory := ExtractFilePath( Application.ExeName );
        Confirmations1.Checked := ReadBool( 'Preferences',
                                            'Confirmations', False );
        SpeedButton7.Down := Confirmations1.Checked;
        Value := ReadInteger( 'Preferences',
                              'CompressionMethodToUse',
                              Ord( smBestMethod ) );
        AbZipOutline1.CompressionMethodToUse := TAbZipSupportedMethod( Value );
        Value := ReadInteger( 'Preferences', 'DeflationOption', Ord( doNormal));
        AbZipOutline1.DeflationOption := TAbZipDeflationOption( Value );
        AbZipOutline1.ExtractOptions := [];
        if ReadBool( 'Preferences', 'CreateDirs', False ) then
          AbZipOutline1.ExtractOptions := AbZipOutline1.ExtractOptions +
                                          [eoCreateDirs];
        if ReadBool( 'Preferences', 'RestorePath', False ) then
          AbZipOutline1.ExtractOptions := AbZipOutline1.ExtractOptions +
                                          [eoRestorePath];
        AbZipOutline1.StoreOptions := [];
        if ReadBool( 'Preferences', 'StripPath', False ) then
          AbZipOutline1.StoreOptions := AbZipOutline1.StoreOptions +
                                        [soStripPath];
        if ReadBool( 'Preferences', 'RemoveDots', False ) then
          AbZipOutline1.StoreOptions := AbZipOutline1.StoreOptions +
                                        [soRemoveDots];
        if ReadBool( 'Preferences', 'Recurse', False ) then
          AbZipOutline1.StoreOptions := AbZipOutline1.StoreOptions +
                                        [soRecurse];
        StubName := ReadString( 'Self Extracting', 'StubName', 'selfex.exe' );
        FilterComboBox1.Filter := ReadString( 'Navigator', 'Filter',
        'All files (*.*)|*.*|Zip Files (*.ZIP)|*.ZIP|' +
        'Executable Files (*.EXE)|*.EXE|Text files (*.TXT)|*.TXT|' +
        'Pascal files (*.PAS)|*.PAS' );
      end;
    finally
      Free;
    end;
  end;
end;

procedure TForm1.SaveIniSettings;
begin
  with TIniFile.Create( ChangeFileExt( Application.ExeName, '.INI' ) ) do begin
    try
      {view menu}
      WriteBool( 'General', 'Exists', True );
      with AbZipOutline1 do begin
        WriteBool( 'View', 'CSize', zaCompressedSize in Attributes );
        WriteBool( 'View', 'CMethod', zaCompressionMethod in Attributes );
        WriteBool( 'View', 'CRatio', zaCompressionRatio in Attributes );
        WriteBool( 'View', 'CRC', zaCRC in Attributes );
        WriteBool( 'View', 'EFA', zaExternalFileAttributes in Attributes );
        WriteBool( 'View', 'IFA', zaInternalFileAttributes in Attributes );
        WriteBool( 'View', 'Encryption', zaEncryption in Attributes );
        WriteBool( 'View', 'TimeStamp', zaTimeStamp in Attributes );
        WriteBool( 'View', 'USize', zaUnCompressedSize in Attributes );
        WriteBool( 'View', 'MadeBy', zaVersionMade in Attributes );
        WriteBool( 'View', 'Needed', zaVersionNeeded in Attributes );
        WriteBool( 'View', 'Comment', zaComment in Attributes );

        WriteBool( 'View', 'Hierarchy', Hierarchy );
//        WriteInteger( 'View', 'OutlineStyle', Ord( OutlineStyle ) );
        {preferences menu}
        WriteString( 'Preferences', 'BaseDirectory', BaseDirectory );
        WriteBool( 'Preferences', 'Confirmations', Confirmations1.Checked );
        WriteInteger( 'Preferences', 'CompressionMethodToUse',
                      Ord( CompressionMethodToUse ) );
        WriteInteger( 'Preferences', 'DeflationOption',
                      Ord( DeflationOption ));

        WriteBool( 'Preferences', 'CreateDirs',
                   eoCreateDirs in ExtractOptions );
        WriteBool( 'Preferences', 'RestorePath',
                   eoRestorePath in ExtractOptions );
        WriteBool( 'Preferences', 'StripPath', soStripPath in StoreOptions );
        WriteBool( 'Preferences', 'RemoveDots', soRemoveDots in StoreOptions );
        WriteBool( 'Preferences', 'Recurse', soRecurse in StoreOptions );
      end;
    finally
      Free;
    end;
  end;
end;

procedure TForm1.Close1Click(Sender: TObject);
begin
  AbZipOutline1.FileName := '';
  AbZipOutline1.Color := clBtnFace;
end;

procedure TForm1.AbZipOutline1Load(Sender: TObject);
begin
  IgnoreDuplicateWarning := False;
  AbZipOutline1.Color := clWindow;
  SetCaption;
end;

procedure TForm1.Convert1Click(Sender: TObject);
var
  ZipName : string;
  ExeName : string;
  StubSpec : string;
  StubStream, ZipStream, SelfExtractingStream : TStream;
begin
  AbZipOutline1.Save;
  ZipName := ExpandFileName( AbZipOutline1.FileName );
  AbZipOutline1.FileName := '';

  ExeName := ChangeFileExt( ZipName, '.exe' );
  StubSpec := ExtractFilePath( Application.ExeName ) + StubName;

  StubStream := TFileStream.Create( StubSpec, fmOpenRead or fmShareDenyWrite );
  ZipStream := TFileStream.Create( ZipName , fmOpenRead or fmShareDenyWrite );
  SelfExtractingStream := TFileStream.Create( ExeName,
                                              fmCreate or fmShareExclusive );
  try
    MakeSelfExtracting( StubStream, ZipStream, SelfExtractingStream );
  finally
    SelfExtractingStream.Free;
    StubStream.Free;
    ZipStream.Free;
  end;
  {and reload...}
  AbZipOutline1.FileName := ExeName;
end;

procedure TForm1.GetMinMaxInfo( var Msg: TWMGetMinMaxInfo );
begin
  with Msg.MinMaxInfo^ do begin
    ptMinTrackSize := Point( 700, 400 );
    ptMaxTrackSize := Point( 1600, 1200 );
  end;
end;

procedure TForm1.AbZipOutline1ConfirmOverwrite(var Name: string;
  var Confirm: Boolean);
var
  pMessage : array [0..255] of Char;
  pCaption : array [0..80] of Char;
begin
  Confirm :=  MessageBox( 0,
                          StrPCopy( pMessage,
                                    Format( 'Overwrite %s?',
                                    [Name] ) ),
                          StrPCopy( pCaption, 'Confirmation' ),
                          MB_ICONQUESTION or MB_OKCANCEL ) = IDOK;
end;

procedure TForm1.Default1Click(Sender: TObject);
var
  i : Integer;
begin
  AbZipOutline1.Attributes := AbDefZipAttributes;
  for i := 0 to Ord( High( TAbZipAttribute ) ) do
    Attributes1.Items[i].Checked := TAbZipAttribute(i) in AbDefZipAttributes;
  AbZipOutline1.Update;
end;

procedure TForm1.Contents1Click(Sender: TObject);
begin
  Application.HelpCommand(HELP_CONTENTS, 0);
end;

procedure TForm1.About1Click(Sender: TObject);
begin
  dlgAboutBox := TDlgAboutBox.Create( Self );
  try
    dlgAboutBox.ShowModal;
  finally
    dlgAboutBox.Free;
  end;
end;

procedure TForm1.FileListBox1DblClick(Sender: TObject);
var
  Browser : TAbZipBrowser;
  Filename : string;
  OK : Boolean;
begin
  Filename := IncludeTrailingPathDelimiter(DirectoryListBox1.Directory) +
    FileListBox1.Items[FileListBox1.ItemIndex];
  if AbZipOutline1.FileName = '' then
    try
      AbZipOutline1.FileName := Filename;
    except
      AbZipOutline1.FileName := '';
    end
  else begin
    Browser := TAbZipBrowser.Create( Self );
    OK := True;
    try
      try
        Browser.FileName := Filename;
      except
        OK := False;
      end;
    finally
      Browser.Free;
    end;
    if OK then
      AbZipOutline1.FileName := Filename;
  end;
end;

procedure TForm1.AbZipOutline1EndDrag(Sender, Target: TObject; X,
  Y: Integer);
begin
  FileListBox1.Update;
end;

procedure TForm1.FileListBox1MouseDown(Sender: TObject;
  Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
begin
  if Button = mbLeft then begin
    FileX := X;
    FileY := Y;
  end;
end;

procedure TForm1.FileListBox1MouseMove(Sender: TObject; Shift: TShiftState;
  X, Y: Integer);
begin
  if ssLeft in Shift then
    if ( ( X - FileX ) * ( X - FileX ) +
         ( Y - FileY ) * ( Y - FileY ) > 100 ) then
      if FileListBox1.SelCount > 0 then
        if ( not FileListBox1.Dragging ) then
          FileListBox1.BeginDrag( True );
end;

procedure TForm1.AbZipOutline1MouseMove(Sender: TObject;
  Shift: TShiftState; X, Y: Integer);
begin
  if ssLeft in Shift then
    if ( ( X - OutlineX ) * ( X - OutlineX ) +
         ( Y - OutlineY ) * ( Y - OutlineY ) > 100 ) then
      if AbZipOutline1.SelectedZipItem <> nil then
        if ( not FileListBox1.Dragging ) then
          AbZipOutline1.BeginDrag( True );
end;

procedure TForm1.Edit1Exit(Sender: TObject);
begin
  FileListBox1.ApplyFilePath(Edit1.Text);
end;

procedure TForm1.FormKeyPress(Sender: TObject; var Key: Char);
begin
  if Key = #13 then
    Edit1Exit( Self );
end;

procedure TForm1.OS5Click(Sender: TObject);
var
  Item : TMenuItem;
begin
  OS1.Checked := False;
  OS2.Checked := False;
  OS3.Checked := False;
  OS4.Checked := False;
  OS5.Checked := False;
  OS6.Checked := False;

  Item := (Sender as TMenuItem);
  Item.Checked := True;
//  AbZipOutline1.OutlineStyle := TOutlineStyle( Item.Tag );
end;

procedure TForm1.AbZipOutline1ConfirmProcessItem(Sender: TObject;
  Item: TAbArchiveItem; ProcessType: TAbProcessType;
  var Confirm: Boolean);
var
  Process : string;
begin
  Confirm := True;
  case ProcessType of
    ptAdd : Process := 'Add';
    ptDelete : Process := 'Delete';
    ptExtract : Process := 'Extract';
    ptFreshen : Process := 'Freshen';
    ptMove : Process := 'Move';
  end;
  DoConfirm( Sender, Item, Confirm, Process );
end;

procedure TForm1.AbZipOutline1ProcessItemFailure(Sender: TObject;
  Item: TAbArchiveItem; const ProcessType: TAbProcessType;
  ErrorClass: TAbErrorClass; ErrorCode: Integer);
var
  S : string;
  pMessage : array [0..128] of Char;
begin
  if ( ErrorClass = ecAbbrevia ) and
     ( ErrorCode = AbDuplicateName ) then begin
    if not IgnoreDuplicateWarning then begin
      if ProcessType = ptAdd then
        s := 'Cannot add '
      else
        s := 'Cannot move ';
      s := s + Item.FileName +
           '. Would create a duplicate name. Ignore future warnings?';
      if (Application.MessageBox( StrPCopy( pMessage, s ), 'Warning',
         MB_YESNO ) = IDYES ) then
        IgnoreDuplicateWarning := True;
    end;
    Exit;
  end;

  case ProcessType of
    ptAdd :
      ShowMessage( 'Cannot add ' + Item.FileName + ' to ' +
                   TAbZipOutline(Sender).FileName );
    ptExtract :
      ShowMessage( 'Cannot extract ' + Item.FileName + ' from ' +
                   TAbZipOutline(Sender).FileName );
    ptFreshen :
      ShowMessage( 'Cannot freshen ' + Item.FileName + ' in ' +
                   TAbZipOutline(Sender).FileName );
    ptMove :
      ShowMessage( 'Cannot move ' + Item.FileName + ' to ' +
                   TAbZipOutline(Sender).FileName );
  end;
  if ErrorClass = ecAbbrevia then
    ShowMessage( AbStrRes(ErrorCode) );
end;

procedure TForm1.TurboPowerontheWeb1Click(Sender: TObject);
begin
  if ShellExecute(0, 'open', 'http://www.turbopower.com', '', '', SW_SHOWNORMAL) <= 32 then
    ShowMessage('Unable to start web browser. Make sure you have it properly set-up on your system.');
end;

procedure TForm1.AbbreviaontheWeb1Click(Sender: TObject);
begin
  if ShellExecute(0, 'open', 'http://sf.net/projects/tpabbrevia', '', '', SW_SHOWNORMAL) <= 32 then
    ShowMessage('Unable to start web browser. Make sure you have it properly set-up on your system.');
end;

procedure TForm1.TempDirectory1Click(Sender: TObject);
begin
  with TAbDirDlg.Create(Self) do begin
    Caption := 'Directory';
    AdditionalText := 'Select temporary directory';
    if Execute then
      AbZipOutline1.TempDirectory := SelectedFolder;
    Free;
  end;
end;

procedure TForm1.Logging1Click(Sender: TObject);
var
  E, F : string;
begin
  AbZipOutline1.Logging := False;
  Logging1.Checked := not Logging1.Checked;
  if Logging1.Checked then with OpenDialog1 do begin
    Title := 'Select Text File for Logging';
    E := DefaultExt;
    DefaultExt := '';
    F := Filter;
    Filter := '';
    Filename := AbZipOutline1.LogFile;
    if Execute then begin
      AbZipOutline1.LogFile := Filename;
      AbZipOutline1.Logging := True;
    end;
    DefaultExt := E;
    Filter := F;
  end;
  Logging1.Checked := AbZipOutline1.Logging;
end;

end.
