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
{* ABBREVIA: QUCFMAIN.PAS                                *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

{$DEFINE UsingCLX}

unit QuCfMain;

interface

uses
  SysUtils, Classes, QGraphics, QForms, AbQHexVw, AbQCmpnd,
  QDialogs, QMenus, QTypes, QImgList, QExtCtrls, QControls, QComCtrls;

type
  TfmCfMain = class(TForm)
    StatusBar1: TStatusBar;
    tvDirectory: TTreeView;
    tvImages: TImageList;
    OpenDialog1: TOpenDialog;
    mnuMain: TMainMenu;
    mnuFile: TMenuItem;
    mnuFileNew: TMenuItem;
    mnuFileOpen: TMenuItem;
    N6: TMenuItem;
    mnuFileExit: TMenuItem;
    mnuEdit: TMenuItem;
    mnuEditAddFile: TMenuItem;
    mnuEditAddFolder: TMenuItem;
    mnuEditDelete: TMenuItem;
    N1: TMenuItem;
    mnuEditChangeDir: TMenuItem;
    mnuPopupMenu: TPopupMenu;
    puAddFile: TMenuItem;
    puAddFolder: TMenuItem;
    puViewFile: TMenuItem;
    puChangeDir: TMenuItem;
    puViewCompoundFile: TMenuItem;
    puDelete: TMenuItem;
    Rename1: TMenuItem;
    SaveDialog1: TSaveDialog;
    OpenDialog2: TOpenDialog;
    pnlHexView: TPanel;
    procedure mnuFileNewClick(Sender: TObject);
    procedure mnuFileOpenClick(Sender: TObject);
    procedure mnuFileExitClick(Sender: TObject);
    procedure mnuEditAddFileClick(Sender: TObject);
    procedure mnuEditAddFolderClick(Sender: TObject);
    procedure mnuEditDeleteClick(Sender: TObject);
    procedure mnuEditChangeDirClick(Sender: TObject);
    procedure puViewFileClick(Sender: TObject);
    procedure puViewCompoundFileClick(Sender: TObject);
    procedure Rename1Click(Sender: TObject);
    procedure tvDirectoryClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  fmCfMain: TfmCfMain;
  AbCompoundFile1 : TAbCompoundFile;
  HexV : THexView;

implementation

uses QuCfNewDg, QuCfGenDg;

{$R *.xfm}

procedure TfmCfMain.mnuFileNewClick(Sender: TObject);
var
  AllocSize : Integer;
begin
  if SaveDialog1.Execute then begin
    if frmCfNewDlg.ShowModal = mrOK then begin
      if AbCompoundFile1 <> nil then
        AbCompoundFile1.Free;
      AllocSize := StrToInt(frmCfNewDlg.lbAllocSize.
                            Items[frmCfNewDlg.lbAllocSize.ItemIndex]);
      AbCompoundFile1 := TAbCompoundFile.Create(SaveDialog1.FileName,
                                         frmCfNewDlg.edtVolLbl.Text, AllocSize);
      Caption := 'Abbrevia 3 Compound File Example (' + SaveDialog1.FileName + ')';
      HexV := THexView.Create(Self);
      HexV.BlockSize := AllocSize;
      HexV.Parent := pnlHexView;
      HexV.Align := alClient;
      HexV.Stream := AbCompoundFile1.Stream;
      AbCompoundFile1.PopulateTreeView(tvDirectory);
    end;
  end;
end;

procedure TfmCfMain.mnuFileOpenClick(Sender: TObject);
begin
  {OpenExisting compound file}
  if OpenDialog1.Execute then begin
    if AbCompoundFile1 <> nil then
      AbCompoundFile1.Free;
    AbCompoundFile1 := TAbCompoundFile.Create('', '', 512);
    AbCompoundFile1.Open(OpenDialog1.FileName);
    Caption := 'Abbrevia 3 Compound File Example (' + OpenDialog1.FileName + ')';
    HexV := THexView.Create(Self);
    HexV.BlockSize := AbCompoundFile1.AllocationSize;
    HexV.Parent := pnlHexView;
    HexV.Align := alClient;
    HexV.Stream := AbCompoundFile1.Stream;
    AbCompoundFile1.PopulateTreeView(tvDirectory);
  end;
end;

procedure TfmCfMain.mnuFileExitClick(Sender: TObject);
begin
  Application.Terminate;
end;

procedure TfmCfMain.mnuEditAddFileClick(Sender: TObject);
var
  i : Integer;
  Strm : TFileStream;
begin
  if OpenDialog2.Execute then begin
    Strm := TFileStream.Create(OpenDialog2.FileName, fmOpenRead
                               or fmShareDenyNone);
    AbCompoundFile1.AddFile(OpenDialog2.FileName, Strm, Strm.Size);
    Strm.Free;
    AbCompoundFile1.PopulateTreeView(tvDirectory);
    for i := 0 to tvDirectory.Items.Count - 1 do
      tvDirectory.Items.Item[i].Expand(True);
    HexV.Stream := AbCompoundFile1.Stream;
  end;
end;

procedure TfmCfMain.mnuEditAddFolderClick(Sender: TObject);
var
  i : Integer;
begin
  if frmCfGenDlg.ShowModal = mrOK then begin
    AbCompoundFile1.AddFolder(frmCfGenDlg.Edit1.Text);
    AbCompoundFile1.PopulateTreeView(tvDirectory);
    for i := 0 to tvDirectory.Items.Count - 1 do
      tvDirectory.Items.Item[i].Expand(True);
  end;
  HexV.Stream := AbCompoundFile1.Stream;
end;

procedure TfmCfMain.mnuEditDeleteClick(Sender: TObject);
var
  i : Integer;
begin
  if tvDirectory.Selected.ImageIndex = 0 then
    AbCompoundFile1.DeleteFolder(tvDirectory.Selected.Text)
  else
    AbCompoundFile1.DeleteFile(tvDirectory.Selected.Text);
  HexV.Stream := AbCompoundFile1.Stream;
  AbCompoundFile1.PopulateTreeView(tvDirectory);

  for i := 0 to tvDirectory.Items.Count - 1 do
    tvDirectory.Items.Item[i].Expand(True);
end;

procedure TfmCfMain.mnuEditChangeDirClick(Sender: TObject);
begin
  frmCfGenDlg.Caption := AbCompoundFile1.CurrentDirectory;
  if frmCfGenDlg.ShowModal = mrOK then begin
    AbCompoundFile1.CurrentDirectory := frmCfGenDlg.Edit1.Text;
    StatusBar1.SimpleText := '  Current Directory: ' + AbCompoundFile1.CurrentDirectory;
  end;
end;

procedure TfmCfMain.puViewFileClick(Sender: TObject);
var
  Strm : TStream;
begin
  Strm := TMemoryStream.Create;
  AbCompoundFile1.OpenFile(tvDirectory.Selected.Text, Strm);
  Hexv.SetStream(Strm);
  Strm.Free;
end;

procedure TfmCfMain.puViewCompoundFileClick(Sender: TObject);
begin
  HexV.Stream := AbCompoundFile1.Stream;
end;

procedure TfmCfMain.Rename1Click(Sender: TObject);
begin
  frmCfGenDlg.Caption := 'Rename';
  frmCfGenDlg.Label1.Caption := 'New Name';
  if frmCfGenDlg.ShowModal = mrOK then begin
    if tvDirectory.Selected.ImageIndex = 0 then
      AbCompoundFile1.RenameFolder(tvDirectory.Selected.Text, frmCfGenDlg.Edit1.Text)
    else
      AbCompoundFile1.RenameFile(tvDirectory.Selected.Text, frmCfGenDlg.Edit1.Text);
  end;
  frmCfGenDlg.Caption := 'Change Directory';
  frmCfGenDlg.Label1.Caption := 'New Directory';
end;

procedure TfmCfMain.tvDirectoryClick(Sender: TObject);
begin
  if (tvDirectory.Selected.ImageIndex = 0) then begin
    AbCompoundFile1.CurrentDirectory := tvDirectory.Selected.Text;
    StatusBar1.SimpleText := '  Current Directory: ' + AbCompoundFile1.CurrentDirectory;
  end;  
end;

end.
