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
{* ABBREVIA: EXTCAB.PAS                                  *}
{* Copyright (c) TurboPower Software Co 1997             *}
{* All rights reserved.                                  *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit CabExt1;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs, StdCtrls,

  AbArcTyp, AbCBrows, ComCtrls, AbCabExt, AbCabTyp, AbBase, AbBrowse, AbMeter, AbUtils;

type
  TForm1 = class(TForm)
    Button1: TButton;
    OpenDialog1: TOpenDialog;
    Memo1: TMemo;
    Label1: TLabel;
    Button2: TButton;
    AbMeter1: TAbMeter;
    AbCabExtractor1: TAbCabExtractor;
    procedure Button1Click(Sender: TObject);
    procedure AbCabExtractor1ConfirmProcessItem(Sender: TObject;
      Item: TAbArchiveItem; ProcessType: TAbProcessType;
      var Confirm: Boolean);
    procedure Button2Click(Sender: TObject);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
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
  MainCaption = 'Cabinet Extractor';

var
  AbortFlag : Boolean;

procedure TForm1.Button1Click(Sender: TObject);
begin
  if OpenDialog1.Execute then begin
    with AbCabExtractor1 do begin
      FileName := OpenDialog1.FileName;
      BaseDirectory := ExtractFilePath(FileName);
      Cursor := crHourglass;
      try
        ExtractFiles('*.*');
      except  {swallow exception if aborted}
      end;
      Cursor := crDefault;
    end;
  end;
  Caption := MainCaption;
  AbortFlag := False;
end;

procedure TForm1.AbCabExtractor1ConfirmProcessItem(Sender: TObject;
  Item: TAbArchiveItem; ProcessType: TAbProcessType; var Confirm: Boolean);
begin
  Caption := 'Extracting ' + Item.Filename;
  Confirm := not AbortFlag;
end;

procedure TForm1.Button2Click(Sender: TObject);
begin
  AbortFlag := True;
end;

procedure TForm1.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  AbCabExtractor1.FileName := '';
end;

end.
