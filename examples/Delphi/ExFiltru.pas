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
{* ABBREVIA: EXFILTRU.PAS                                *}
{* Copyright (c) TurboPower Software Co 1997             *}
{* All rights reserved.                                  *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit Exfiltru;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, Gauges, Grids, ExtCtrls, FileCtrl,

  AbZipper, AbArcTyp, AbZBrows, AbMeter, AbZipKit, AbView, AbZView, AbBrowse,
  AbBase, AbUtils;
type
  TForm1 = class(TForm)
    OpenDialog1: TOpenDialog;
    OpenBtn: TButton;
    AbZipView1: TAbZipView;
    CloseBtn: TButton;
    AddGroup: TGroupBox;
    Label1: TLabel;
    FileMask1: TEdit;
    Label2: TLabel;
    FilterMask1: TEdit;
    AddBtn: TButton;
    Label3: TLabel;
    DirectoryListBox1: TDirectoryListBox;
    Bevel1: TBevel;
    Label4: TLabel;
    DeleteGroup: TGroupBox;
    Label5: TLabel;
    FileMask2: TEdit;
    Label6: TLabel;
    FilterMask2: TEdit;
    DeleteBtn: TButton;
    Bevel2: TBevel;
    AbortBtn: TButton;
    ExitBtn: TButton;
    ExtractGroup: TGroupBox;
    Label7: TLabel;
    Label8: TLabel;
    Label9: TLabel;
    Bevel3: TBevel;
    FileMask3: TEdit;
    FilterMask3: TEdit;
    ExtractBtn: TButton;
    DirectoryListBox2: TDirectoryListBox;
    AbZipKit1: TAbZipKit;
    AbMeter1: TAbMeter;
    procedure AddBtnClick(Sender: TObject);
    procedure OpenBtnClick(Sender: TObject);
    procedure DeleteBtnClick(Sender: TObject);
    procedure CloseBtnClick(Sender: TObject);
    procedure AbortBtnClick(Sender: TObject);
    procedure ExitBtnClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure ExtractBtnClick(Sender: TObject);
    procedure AbZipKit1ConfirmProcessItem(Sender: TObject;
      Item: TAbArchiveItem; ProcessType: TAbProcessType;
      var Confirm: Boolean);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.DFM}

const
  MainCaption = ' ExFilter : Exception list example';
  AddCaption  = ' Add files to zip archive ';
  DeleteCaption = ' Delete files from zip archive ';
  ExtractCaption = ' Extract files from zip archive ';

var
  AbortFlag : Boolean;

procedure TForm1.OpenBtnClick(Sender: TObject);
begin
  AbZipKit1.Filename := '';
  AddBtn.Enabled := False;
  DeleteBtn.Enabled := False;
  OpenDialog1.Filename := '*.zip';
  if OpenDialog1.Execute then begin
    AbZipKit1.Filename := OpenDialog1.Filename;
    OpenBtn.Enabled := False;
    CloseBtn.Enabled := True;
    AddBtn.Enabled := True;
    DeleteBtn.Enabled := True;
    ExtractBtn.Enabled := True;
    AbZipView1.Enabled := True;
    Caption := ' ' + AbZipKit1.Filename;
  end;
end;

procedure TForm1.CloseBtnClick(Sender: TObject);
begin
  Screen.Cursor := crHourglass;
  Caption := 'Saving ' + AbZipKit1.Filename;
  AbZipKit1.CloseArchive;
  Screen.Cursor := crDefault;
  OpenBtn.Enabled := True;
  CloseBtn.Enabled := False;
  AddBtn.Enabled := False;
  DeleteBtn.Enabled := False;
  ExtractBtn.Enabled := False;
  AbZipView1.Enabled := False;
  Caption := MainCaption;
end;

procedure TForm1.AddBtnClick(Sender: TObject);
var
  SavedColor : TColor;
begin
  AbortFlag := False;
  AbZipKit1.BaseDirectory := DirectoryListBox1.Directory;
  SavedColor := AddGroup.Font.Color;
  AddGroup.Font.Color := clRed;
  try
    AbZipKit1.AddFilesEx(FileMask1.Text, FilterMask1.Text, 0 );
    AbZipKit1.Save;
  finally
    AddGroup.Font.Color := SavedColor;
    AddGroup.Caption := AddCaption;
  end;
end;

procedure TForm1.DeleteBtnClick(Sender: TObject);
var
  SavedColor : TColor;
begin
  AbortFlag := False;
  SavedColor := DeleteGroup.Font.Color;
  DeleteGroup.Font.Color := clRed;
  try
    AbZipKit1.DeleteFilesEx(FileMask2.Text, FilterMask2.Text);
    AbZipKit1.Save;
  finally
    DeleteGroup.Font.Color := SavedColor;
    DeleteGroup.Caption := DeleteCaption;
  end;
end;

procedure TForm1.ExtractBtnClick(Sender: TObject);
var
  SavedColor : TColor;
begin
  AbortFlag := False;
  AbZipKit1.BaseDirectory := DirectoryListBox2.Directory;
  SavedColor := ExtractGroup.Font.Color;
  ExtractGroup.Font.Color := clRed;
  try
    AbZipKit1.ExtractFilesEx(FileMask3.Text, FilterMask3.Text);
  finally
    ExtractGroup.Font.Color := SavedColor;
    ExtractGroup.Caption := ExtractCaption;
  end;
end;

procedure TForm1.AbortBtnClick(Sender: TObject);
begin
  AbortFlag := True;
end;

procedure TForm1.ExitBtnClick(Sender: TObject);
begin
  AbZipKit1.CloseArchive;
  Close;
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
  Caption := MainCaption;
  AddGroup.Caption := AddCaption;
  DeleteGroup.Caption := DeleteCaption;
  ExtractGroup.Caption := ExtractCaption;
end;

procedure TForm1.AbZipKit1ConfirmProcessItem(Sender: TObject;
  Item: TAbArchiveItem; ProcessType: TAbProcessType; var Confirm: Boolean);
begin
  case ProcessType of
    ptAdd    : AddGroup.Caption := ' Adding ' + Item.Filename + ' ';
    ptDelete : DeleteGroup.Caption := ' Deleting ' + Item.Filename + ' ';
    ptExtract : ExtractGroup.Caption := ' Extracting ' + Item.Filename + ' ';
  end;
  Confirm := not AbortFlag;
end;

end.
