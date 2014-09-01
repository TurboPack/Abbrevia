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

unit ExQBinHxU;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls;

type
  TfrmExBinHex = class(TForm)
    btnEncode: TButton;
    OpenDialog1: TOpenDialog;
    btnDecode: TButton;
    procedure btnEncodeClick(Sender: TObject);
    procedure btnDecodeClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  frmExBinHex: TfrmExBinHex;

implementation

{$R *.xfm}

uses
  AbBinHex;


procedure TfrmExBinHex.btnEncodeClick(Sender: TObject);
var
  SF, DF : string;
begin
  SF := '';
  DF := '';
  if OpenDialog1.Execute then begin
    SF := OpenDialog1.FileName;
    DF := ChangeFileExt(SF, '.hqx');
    if InputQuery(Caption, 'Destination file name', DF) then begin
      Screen.Cursor := crHourGlass;
      AbBin2Hex(SF, DF);
      Screen.Cursor := crDefault;
    end;
  end;
end;

procedure TfrmExBinHex.btnDecodeClick(Sender: TObject);
var
  SF, DF : string;
begin
  SF := '';
  DF := '';
  if OpenDialog1.Execute then begin
    SF := OpenDialog1.FileName;
    DF := ChangeFileExt(SF, '.bin');
    if InputQuery(Caption, 'Destination file name', DF) then begin
      Screen.Cursor := crHourGlass;
      AbHex2Bin(SF, DF);
      Screen.Cursor := crDefault;
    end;
  end;
end;

end.
