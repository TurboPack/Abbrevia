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
{* ABBREVIA: QUFINDER.PAS                                *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit QuFinder;

interface

uses
  {$IFDEF Win32}
  Windows,
  {$ELSE}
  {$ENDIF}
  SysUtils, Classes, QGraphics, QForms, AbZBrows, AbArcTyp, AbBrowse,
  AbBase, QStdCtrls, QControls;

type
  TForm1 = class(TForm)
    Edit1: TEdit;
    Label1: TLabel;
    Memo1: TMemo;
    AbZipBrowser1: TAbZipBrowser;
    Memo2: TMemo;
    Label2: TLabel;
    Button1: TButton;
    Button2: TButton;
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure Edit1Change(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
  private
    { Private declarations }
    Aborted: Boolean;
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.xfm}

procedure TForm1.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  Aborted := True;
end;

procedure TForm1.Edit1Change(Sender: TObject);
begin
  Button1.Enabled := Length( Edit1.Text ) > 0;
end;

procedure TForm1.Button1Click(Sender: TObject);
var
  CurFile : string;
  sr : TSearchRec;
begin
  Button1.Enabled := False;
  Memo1.Clear;
  try
    Button2.Enabled := True;
    Aborted := False;
    {look in the file list box for the file}
    if FindFirst ('*', faAnyFile, sr) = 0 then
      repeat
        Application.ProcessMessages;
        if Aborted then
          break;
        if CompareText( Edit1.Text, sr.Name ) = 0 then begin
        {$IFDEF MSWINDOWS}
          Memo1.Lines.Add( 'Found in ' + ExtractFilePath(sr.Name));
        {$ENDIF}
        {$IFDEF LINUX}
          Memo1.Lines.Add( 'Found in ' + sr.PathOnly);
        {$ENDIF}
          break;
        end;
        {now add search of zip and self extracting files}
        CurFile := UpperCase( sr.Name );
        if ( Pos( '.zip', CurFile ) > 0 ) or
           ( Pos( '.exe', CurFile ) > 0 ) then begin
          try
            AbZipBrowser1.FileName := sr.Name;
            if AbZipBrowser1.FindFile(Edit1.Text) >= 0 then
              Memo1.Lines.Add( 'Found in ' + sr.Name);
          except
          end;
        end;
      until FindNext (sr) <> 0;
    FindClose (sr);
  finally
    Memo1.Lines.Add( 'Done!' );
    Edit1.Enabled := True;
    Button1.Enabled := True;
    Button2.Enabled := False;
  end;
end;

procedure TForm1.Button2Click(Sender: TObject);
begin
  Aborted := True;
end;

end.
