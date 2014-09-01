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
{* ABBREVIA: DGABOUT.PAS                                 *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

{$IFDEF Windows}
  {$C MOVEABLE DEMANDLOAD DISCARDABLE}
{$ENDIF}

unit QdgAbout;

interface

uses
  {$IFDEF Win32}
  Windows,
  {$ELSE}
  {$ENDIF}
  Classes, QGraphics, QForms, QStdCtrls, QControls, QExtCtrls;

type
  TdlgAboutBox = class(TForm)
    Panel1: TPanel;
    ProgramIcon: TImage;
    Label7: TLabel;
    Label8: TLabel;
    Panel2: TPanel;
    lnTitleShadow: TLabel;
    lblTitle: TLabel;
    Label5: TLabel;
    Label86: TLabel;
    Label85: TLabel;
    Label84: TLabel;
    OKButton: TButton;
    Version: TLabel;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label6: TLabel;
    procedure FormCreate(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  dlgAboutBox: TdlgAboutBox;

implementation

{$R *.xfm}

uses
  AbConst;

procedure TdlgAboutBox.FormCreate(Sender: TObject);
begin
  Version.Caption := 'Abbrevia ' + AbVersion;
end;





end.

