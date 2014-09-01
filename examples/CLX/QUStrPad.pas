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
{* ABBREVIA: SUSTRPAD.PAS                                *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit QUStrPad;

interface

uses
  {$IFDEF WIN32}
  Windows,
  {$ELSE}
  {$ENDIF}
  SysUtils, Classes, QGraphics, QForms, QControls, QExtCtrls, QStdCtrls;

type
  TForm1 = class(TForm)
    Memo1: TMemo;
    Panel1: TPanel;
    Memo2: TMemo;
    procedure FormCreate(Sender: TObject);
    procedure FormDestroy(Sender: TObject);
  private
    { Private declarations }
    ZnfName : string;
    TxtName : string;
    ZnfStream : TFileStream;
    TxtStream : TStream;
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

uses
  AbUnzPrc,
  AbZipPrc;

{$R *.xfm}

procedure TForm1.FormCreate(Sender: TObject);
begin
  ZnfName := ChangeFileExt(Application.ExeName, '.zst');
  TxtName := ExtractFileName( ChangeFileExt(Application.ExeName, '.pad') );
  ChDir( ExtractFilePath( Application.ExeName ) );
  if FileExists( ZnfName ) then begin
    TxtStream := TMemoryStream.Create;
    try
      ZnfStream := TFileStream.Create( ZnfName,
                                       fmOpenRead or fmShareExclusive );
      try
        InflateStream( ZnfStream, TxtStream );
      finally
        ZnfStream.Free;
      end;
      TxtStream.Position := 0;
      Memo1.Lines.LoadFromStream( TxtStream );
    finally
      TxtStream.Free;
    end;
  end;
end;

procedure TForm1.FormDestroy(Sender: TObject);
begin
  TxtStream := TMemoryStream.Create;
  try
    Memo1.Lines.SaveToStream( TxtStream );
    TxtStream.Position := 0;
    if FileExists( ZnfName ) then
      ZnfStream := TFileStream.Create( ZnfName,
                                       fmOpenWrite or fmShareExclusive )
    else
      ZnfStream := TFileStream.Create( ZnfName,
                                       fmCreate or fmShareExclusive );
    try
      DeflateStream( TxtStream, ZnfStream );
    finally
      ZnfStream.Free;
    end;
  finally
    TxtStream.Free;
  end;
end;

end.
