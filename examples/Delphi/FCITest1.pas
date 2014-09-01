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

unit FCITest1;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, AbCabKit{, TestCab};

type
  TForm1 = class(TForm)
    Button1: TButton;
    Button2: TButton;
    Button3: TButton;
    OpenDialog1: TOpenDialog;
    Memo1: TMemo;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button3Click(Sender: TObject);
  private
    { Private declarations }
  public
  end;

var
  Form1: TForm1;

implementation

{$R *.DFM}

procedure TForm1.Button1Click(Sender: TObject);
begin
  OpenDialog1.Filename := '*.cab';
  if OpenDialog1.Execute then begin
    Memo1.Clear;
    MakeCab(OpenDialog1.Filename);
    Memo1.Lines.Assign(TestCab.AuditTrail);
  end;
end;

procedure TForm1.Button2Click(Sender: TObject);
var
  i : Integer;
begin
  OpenDialog1.Filename := '*.*';
  if OpenDialog1.Execute then
    if OpenDialog1.Files.Count > 0 then
      for i := 0 to Pred(OpenDialog1.Files.Count) do begin
        try
          AddFile(OpenDialog1.Files[i]);
        finally
        end;
      end;
  Memo1.Lines.Assign(TestCab.AuditTrail);
end;

procedure TForm1.Button3Click(Sender: TObject);
begin
  CloseArchive;
  Memo1.Lines.Assign(TestCab.AuditTrail);
end;

end.
