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

unit QBaseDlgU;

interface

uses WinTypes, WinProcs, Classes, Graphics, Forms, Controls, Buttons,
  StdCtrls, FileCtrl, ExtCtrls;

type
  TBaseDlg = class(TForm)
    Bevel1: TBevel;
    DirectoryListBox1: TDirectoryListBox;
    CancelBtn: TButton;
    OkBtn: TButton;
    procedure DirectoryListBox1Change(Sender: TObject);
    procedure FormShow(Sender: TObject);
  private
    { Private declarations }
  public
    BaseDirectory : string;
  end;

var
  BaseDlg: TBaseDlg;

implementation

{$R *.xfm}


procedure TBaseDlg.DirectoryListBox1Change(Sender: TObject);
begin
  BaseDirectory := DirectoryListBox1.Directory;
end;

procedure TBaseDlg.FormShow(Sender: TObject);
begin
  DirectoryListBox1.Directory := BaseDirectory;
end;

end.
