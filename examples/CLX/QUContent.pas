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
{* ABBREVIA: QUCONTENT.PAS                               *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit QUContent;



interface

uses
  {$IFDEF MSWINDOWS}
  Windows,
  {$ELSE}
  {$ENDIF}
  SysUtils, Classes, QGraphics, QForms, 
  AbZBrows, AbArcTyp, AbBrowse, AbBase, QDialogs, QStdCtrls,
  QControls;

type
  TForm1 = class(TForm)
    ListBox1: TListBox;
    Button1: TButton;
    OpenDialog1: TOpenDialog;
    AbZipBrowser1: TAbZipBrowser;
    Label1: TLabel;
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
var
  i : Integer;
begin
  ListBox1.Clear;
  if OpenDialog1.Execute then begin
    try
      with AbZipBrowser1 do begin
        FileName := OpenDialog1.FileName;
        if Count > 0 then
          for i := 0 to pred( Count ) do
            ListBox1.Items.Add( Items[i].FileName );
      end;
    except
      ListBox1.Items.Add( OpenDialog1.FileName + ' is not a valid archive.' );
    end;
  end;
end;

end.
