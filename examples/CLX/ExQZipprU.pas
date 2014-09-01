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
{* ABBREVIA: EXQZIPPRU.PAS                               *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit ExQZipprU;

interface

uses
  SysUtils, Classes, QGraphics, QForms, AbArcTyp, AbZipOut, AbZBrows, AbZipper,
  AbBrowse, AbBase, AbMeter, AbUtils, QDialogs, QStdCtrls, QControls, AbQMeter,
  QButtons;

type
  TForm1 = class(TForm)
    Button1: TButton;
    Button2: TButton;
    OpenDialog1: TOpenDialog;
    Label1: TLabel;
    AbZipper1: TAbZipper;
    Button3: TButton;
    AbMeter1: TAbMeter;
    edtDirectory1: TEdit;
    SpeedButton1: TSpeedButton;
    OpenDialog2: TOpenDialog;
    procedure Button1Click(Sender: TObject);
    procedure DirectoryListBox1Change(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure AbZipper1ConfirmProcessItem(Sender: TObject;
      Item: TAbArchiveItem; ProcessType: TAbProcessType;
      var Confirm: Boolean);
    procedure Button3Click(Sender: TObject);
    procedure SpeedButton1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.xfm}

procedure TForm1.FormCreate(Sender: TObject);
begin
  DirectoryListBox1Change(nil);
end;

procedure TForm1.DirectoryListBox1Change(Sender: TObject);
begin
  AbZipper1.BaseDirectory := edtDirectory1.Text;
end;

procedure TForm1.Button1Click(Sender: TObject);
begin
  OpenDialog1.Filename := '*.zip';
  OpenDialog1.InitialDir := edtDirectory1.Text;
  if OpenDialog1.Execute then
    AbZipper1.Filename := OpenDialog1.Filename;
end;

procedure TForm1.Button2Click(Sender: TObject);
begin
  AbZipper1.AddFiles('*.*', 0);
  Caption := 'ExZipper';
end;

procedure TForm1.AbZipper1ConfirmProcessItem(Sender: TObject;
  Item: TAbArchiveItem; ProcessType: TAbProcessType; var Confirm: Boolean);
begin
  Caption := 'adding ' + Item.Filename;
end;

procedure TForm1.Button3Click(Sender: TObject);
begin
  Cursor := crHourGlass;
  AbZipper1.CloseArchive;
  Cursor := crDefault;
end;
 procedure TForm1.SpeedButton1Click(Sender: TObject);
begin
  if OpenDialog2.Execute then
    edtDirectory1.Text := ExtractFilePath (OpenDialog2.FileName);
end;


end.


