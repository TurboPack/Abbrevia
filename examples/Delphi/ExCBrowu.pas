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
{* ABBREVIA: UCONTENT.PAS                                *}
{* Copyright (c) TurboPower Software Co 1997             *}
{* All rights reserved.                                  *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit ExCBrowu;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, ExtCtrls,

  AbArcTyp, AbCBrows, AbMeter, AbBrowse, AbBase;

type
  TForm1 = class(TForm)
    OpenDialog1: TOpenDialog;
    AbCabBrowser1: TAbCabBrowser;
    Memo1: TMemo;
    Panel1: TPanel;
    Button1: TButton;
    Button2: TButton;
    Label1: TLabel;
    Panel2: TPanel;
    AbMeter1: TAbMeter;
    AbMeter2: TAbMeter;
    Label2: TLabel;
    Label3: TLabel;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure AbCabBrowser1Load(Sender: TObject);
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
  BoolToStr : array[Boolean] of string = ('No', 'Yes');

procedure TForm1.Button1Click(Sender: TObject);
begin
  if OpenDialog1.Execute then
    AbCabBrowser1.FileName := OpenDialog1.FileName;
end;

procedure TForm1.Button2Click(Sender: TObject);
begin
  AbCabBrowser1.Filename := '';
  Memo1.Clear;
end;

procedure TForm1.AbCabBrowser1Load(Sender: TObject);
var
  i : Integer;
  LI : Longint;
  DT : TDateTime;
  s : string;
begin
  Memo1.Clear;
  with AbCabBrowser1 do begin
    Memo1.Lines.Add(Filename);
    Memo1.Lines.Add('----------------------------------------------');
    Memo1.Lines.Add('  Size: ' + #9 + #9 + IntToStr(CabSize));
    Memo1.Lines.Add('  Folders: ' + #9 + #9 + IntToStr(FolderCount));
    Memo1.Lines.Add('  Files: ' + #9 + #9 + IntToStr(Count));
    Memo1.Lines.Add('  SetID: ' + #9 + #9 + IntToStr(SetID));
    Memo1.Lines.Add('  Cab #: ' + #9 + #9 + IntToStr(CurrentCab));
    Memo1.Lines.Add('  hasPrev: ' + #9 + BoolToStr[HasPrev]);
    Memo1.Lines.Add('  hasNext: ' + #9 + BoolToStr[HasNext]);
    Memo1.Lines.Add('  ');

    if (Count > 0) then begin
      Memo1.Lines.Add('Files' + #9 + #9 + 'Size' +
        #9 + 'Timestamp' + #9 + #9 + 'Attributes' + #9 +'Partial File');
      Memo1.Lines.Add('--------------------------------------------' +
                      '--------------------------------------------' +
                      '--------------------------------------------');
      for i := 0 to Pred(Count) do begin
        LI := LongInt(Items[i].LastModFileDate) shl 16 +
          Items[i].LastModFileTime;
        DT := FileDateToDateTime(LI);
        s := Items[i].FileName + #9 +
          IntToStr(Items[i].UnCompressedSize) + #9 +
          DateTimeToStr(DT) + #9 +
          IntToStr(Items[i].ExternalFileAttributes) + #9 +
          BoolToStr[Items[i].PartialFile];
        Memo1.Lines.Add(s);
      end;
    end;
  end;
end;

end.
