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
{* ABBREVIA: QUCOMPPAD.PAS                               *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit QuCompPad;

interface

uses
  {$IFDEF MSWINDOWS}
  Windows,
  {$ELSE}
  {$ENDIF}
  SysUtils, Classes, QGraphics, QForms, AbZBrows, AbZipper, AbZipKit,
  AbArcTyp, AbBrowse, AbBase, QControls, QExtCtrls, QStdCtrls;

type
  TForm1 = class(TForm)
    Memo1: TMemo;
    AbZipKit1: TAbZipKit;
    Panel1: TPanel;
    Memo2: TMemo;
    procedure FormCreate(Sender: TObject);
    procedure FormDestroy(Sender: TObject);
  private
    { Private declarations }
    ZnfName : string;
    TxtName : string;
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.xfm}

procedure TForm1.FormCreate(Sender: TObject);
begin
  ZnfName := ChangeFileExt(Application.ExeName, '.zip');
  TxtName := ExtractFileName( ChangeFileExt(Application.ExeName, '.txt') );
  with AbZipKit1 do begin
    BaseDirectory := ExtractFilePath( Application.ExeName );
    ChDir( BaseDirectory );
    FileName := ZnfName;
    if Count > 0 then begin
      ExtractFiles( TxtName );
      Memo1.Lines.LoadFromFile( TxtName );
    end;
  end;
end;

procedure TForm1.FormDestroy(Sender: TObject);
begin
  Memo1.Lines.SaveToFile( TxtName );
  with AbZipKit1 do begin
    if Count = 0 then
      AddFiles( TxtName, 0 )
    else
      FreshenFiles( TxtName );
    Save;
  end;
  DeleteFile( TxtName );
end;

end.
