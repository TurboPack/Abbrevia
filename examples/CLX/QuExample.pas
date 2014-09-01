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
{* ABBREVIA: QUEXAMPLE.PAS                               *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit QuExample;

interface                

uses
  {$IFDEF WIN32}
  Windows,
  {$ELSE}
  {$ENDIF}
  SysUtils, Classes, QGraphics, QForms,
  AbArcTyp, AbBase, AbUtils, QMenus, QDialogs, QTypes, AbQZpOut,
  QStdCtrls, QControls, AbQMeter, QExtCtrls;

type
  TForm1 = class(TForm)
    BottomStatus: TPanel;
    MainMenu1: TMainMenu;
    File1: TMenuItem;
    Open1: TMenuItem;
    N1: TMenuItem;
    Exit1: TMenuItem;
    OpenDialog1: TOpenDialog;
    TopStatus: TPanel;
    PopupMenu1: TPopupMenu;
    Add1: TMenuItem;
    Delete1: TMenuItem;
    Extract1: TMenuItem;
    Freshen1: TMenuItem;
    Move1: TMenuItem;
    Panel1: TPanel;
    Memo1: TMemo;
    AbMeter1: TAbMeter;
    AbMeter2: TAbMeter;
    Label1: TLabel;
    Label2: TLabel;
    AbZipOutline1: TAbZipOutline;
    procedure Open1Click(Sender: TObject);
    procedure Exit1Click(Sender: TObject);
    procedure AbZipOutline1Load(Sender: TObject);
    procedure AbZipOutline1MouseDown(Sender: TObject; Button: TMouseButton;
      Shift: TShiftState; X, Y: Integer);
    procedure Delete1Click(Sender: TObject);
    procedure Extract1Click(Sender: TObject);
    procedure Freshen1Click(Sender: TObject);
    procedure Add1Click(Sender: TObject);
    procedure Move1Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure AbZipOutline1ProcessItemFailure(Sender: TObject;
      Item: TAbArchiveItem; ProcessType: TAbProcessType;
      ErrorClass: TAbErrorClass; ErrorCode: Integer);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

uses QuDemoDlg;

{$R *.xfm}

procedure TForm1.Open1Click(Sender: TObject);
begin
  if OpenDialog1.Execute then begin
    AbZipOutline1.OpenArchive(OpenDialog1.FileName);
  end;
end;

procedure TForm1.Exit1Click(Sender: TObject);
begin
  Close;
end;

procedure TForm1.AbZipOutline1Load(Sender: TObject);
begin
  TopStatus.Caption := '  ' + AbZipOutline1.FileName;
end;


procedure TForm1.AbZipOutline1MouseDown(Sender: TObject;
  Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
var
  i : LongInt;
begin
  if Button = mbRight then begin
    {prepare popup menu}
    if AbZipOutline1.Count > 0 then begin
      {there are items in the outline - select the item under the mouse}
      i := AbZipOutline1.GetOutlineItem( X, Y );
      if i <> -1 then
        AbZipOutline1.SelectedItem := i;
    end;
    if AbZipOutline1.FileName <> '' then
      Add1.Enabled := True
    else
      {archive has to be initialized before we can add to it}
      Add1.Enabled := False;
    if AbZipOutline1.SelectedZipItem <> nil then begin
      {pointing at a file - allow file operations}
      Delete1.Enabled := True;
      Extract1.Enabled := True;
      Freshen1.Enabled := True;
      Move1.Enabled := True;
    end
    else begin
      {pointing at a directory - don't allow file operations}
      Delete1.Enabled := False;
      Extract1.Enabled := False;
      Freshen1.Enabled := False;
      Move1.Enabled := False;
    end;
  end;
end;

procedure TForm1.Delete1Click(Sender: TObject);
begin
  AbZipOutline1.DeleteFiles(AbZipOutline1.SelectedZipItem.FileName);
end;

procedure TForm1.Extract1Click(Sender: TObject);
begin
  AbZipOutline1.ExtractFiles(AbZipOutline1.SelectedZipItem.FileName);
end;

procedure TForm1.Freshen1Click(Sender: TObject);
begin
  AbZipOutline1.FreshenFiles(AbZipOutline1.SelectedZipItem.FileName);
end;

procedure TForm1.Add1Click(Sender: TObject);
begin
  DemoDlg.Caption := 'Add Files with FileMask';
  DemoDlg.Edit1.Text := '*.*';
  DemoDlg.ShowModal;
  if DemoDlg.ModalResult = mrOK then
    AbZipOutline1.AddFiles(DemoDlg.Edit1.Text, 0);
end;

procedure TForm1.Move1Click(Sender: TObject);
begin
  DemoDlg.Caption := 'Move File to New Name';
  DemoDlg.Edit1.Text := AbZipOutline1.SelectedZipItem.FileName;
  DemoDlg.ShowModal;
  if DemoDlg.ModalResult = mrOK then
    AbZipOutline1.Move(AbZipOutline1.SelectedZipItem, DemoDlg.Edit1.Text);
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
  AbZipOutline1.BaseDirectory := ExtractFilePath( Application.ExeName );
end;

procedure TForm1.AbZipOutline1ProcessItemFailure(Sender: TObject;
  Item: TAbArchiveItem; ProcessType: TAbProcessType;
  ErrorClass: TAbErrorClass; ErrorCode: Integer);
begin
  case ProcessType of
    ptAdd : ShowMessage( 'Failed to add ' + Item.Filename );
    ptExtract : ShowMessage('Failed to extract ' + Item.Filename);
    ptFreshen : ShowMessage('Failed to freshen ' + Item.Filename);
  end;
end;


end.
