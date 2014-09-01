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
{* ABBREVIA: QSLFSTBV1.PAS                               *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit QSlfStbV1;

interface

uses
  {$IFDEF WIN32}
  Windows,
  {$ELSE}
  {$ENDIF}
  SysUtils, Classes, QGraphics, QForms, 
  AbZBrows, AbUnzper, AbArcTyp, AbBrowse, AbBase, QControls,
  QStdCtrls;

type
  TForm1 = class(TForm)
    Button1: TButton;
    AbUnZipper1: TAbUnZipper;
    Memo1: TMemo;
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
  AbUnzipper1.FileName := 'abtest.exe';
  AbUnzipper1.ExtractFiles( '*.*' );
end;

end.
