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
{* ABBREVIA: QUZIP.PAS                                   *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit QUZip;

interface

uses
  {$IFDEF MSWINDOWS}
  Windows,
  {$ENDIF}
  SysUtils, Classes, QForms, QGraphics,
  AbZipper, AbArcTyp, AbZBrows, AbMeter, AbBrowse, AbBase,
  QDialogs, QStdCtrls, QControls, AbQMeter;

type
  TForm1 = class(TForm)
    AbZipper1: TAbZipper;
    Button1: TButton;
    OpenDialog1: TOpenDialog;
    Memo1: TMemo;
    AbMeter1: TAbMeter;
    AbMeter2: TAbMeter;
    Label1: TLabel;
    Label2: TLabel;
    procedure Button1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.xfm}

procedure TForm1.Button1Click(Sender: TObject);
begin
  if OpenDialog1.Execute then
    AbZipper1.AddFiles( OpenDialog1.FileName, 0 );
end;

end.
