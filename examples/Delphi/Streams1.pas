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
{* ABBREVIA: STREAMS1.PAS                                *}
{* Copyright (c) TurboPower Software Co 1997             *}
{* All rights reserved.                                  *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit Streams1;

interface

uses
  Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, Grids,

  AbView, AbZView, Menus, AbArcTyp, AbZBrows, AbUnZper,
  AbZipper, AbZipKit, AbBrowse, AbBase;

type
  TForm1 = class(TForm)
    MainMenu1: TMainMenu;
    File1: TMenuItem;
    Open1: TMenuItem;
    Exit1: TMenuItem;
    Action1: TMenuItem;
    Extract1: TMenuItem;
    AbZipView1: TAbZipView;
    Memo1: TMemo;
    OpenDialog1: TOpenDialog;
    Close1: TMenuItem;
    N1: TMenuItem;
    Add1: TMenuItem;
    AbZipKit1: TAbZipKit;
    Clearmemo1: TMenuItem;
    procedure Open1Click(Sender: TObject);
    procedure Extract1Click(Sender: TObject);
    procedure Close1Click(Sender: TObject);
    procedure Exit1Click(Sender: TObject);
    procedure AbZipView1DblClick(Sender: TObject);
    procedure Clearmemo1Click(Sender: TObject);
    procedure Add1Click(Sender: TObject);
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
  MainCaption = ' Compressed Memo';

procedure TForm1.Open1Click(Sender: TObject);
begin
  OpenDialog1.Filename := '*.zip';
  if OpenDialog1.Execute then
    AbZipKit1.OpenArchive(OpenDialog1.Filename);
end;

procedure TForm1.Extract1Click(Sender: TObject);
var
  ToStream : TMemoryStream;
  Item : TAbArchiveItem;
begin
  Memo1.Clear;
  ToStream := TMemoryStream.Create;
  try
    Item := AbZipView1.Items[AbZipView1.ActiveRow];
    Caption := Item.Filename;
    AbZipKit1.ExtractToStream(Item.FileName, ToStream);
    ToStream.Position := 0;
    Memo1.Lines.LoadFromStream(ToStream);
  finally
    ToStream.Free;
  end;
end;

procedure TForm1.Close1Click(Sender: TObject);
begin
  AbZipKit1.CloseArchive;
  Caption := MainCaption;
end;

procedure TForm1.Exit1Click(Sender: TObject);
begin
  Close1Click(nil);
  Close;
end;

procedure TForm1.AbZipView1DblClick(Sender: TObject);
begin
  Extract1Click(nil);
end;

procedure TForm1.Clearmemo1Click(Sender: TObject);
begin
  Memo1.Clear;
end;

procedure TForm1.Add1Click(Sender: TObject);
var
  FromStream : TMemoryStream;
  FN : string;
begin
  FromStream := TMemoryStream.Create;
  try
    Memo1.Lines.SaveToStream(FromStream);
    if InputQuery('Streams', 'Give it a filename', FN) then begin
      Caption := FN;
      AbZipKit1.AddFromStream(FN, FromStream);
    end;
  finally
    FromStream.Free;
  end;
end;

end.
