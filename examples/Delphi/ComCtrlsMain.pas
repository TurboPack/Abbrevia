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
 * Craig Peterson <capeterson@users.sourceforge.net>
 *
 * Portions created by the Initial Developer are Copyright (C) 2011
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * ***** END LICENSE BLOCK ***** *)

{*********************************************************}
{* This demonstrates the TAbTreeView and TAbListView     *}
{* components.  By setting references to each other and  *}
{* a shared TAbBaseBrowser descendant (e.g., TAbZipKit   *}
{* you can have a WinZip/Explorer-like interface without *}
{* any code.                                             *}
{*********************************************************}

unit ComCtrlsMain;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, ExtCtrls, Menus, ComCtrls, AbComCtrls, AbBase, AbBrowse,
  AbZBrows, AbUnzper;

type
  TfrmComCtrls = class(TForm)
    AbUnZipper: TAbUnZipper;
    AbTreeView: TAbTreeView;
    AbListView: TAbListView;
    MainMenu: TMainMenu;
    mnuFile: TMenuItem;
    mnuOpenArchive: TMenuItem;
    Splitter1: TSplitter;
    Splitter2: TSplitter;
    Memo1: TMemo;
    OpenDialog: TOpenDialog;
    mnuView: TMenuItem;
    mnuAllFiles: TMenuItem;
    mnuFilesByFolder: TMenuItem;
    N1: TMenuItem;
    mnuIcons: TMenuItem;
    mnuList: TMenuItem;
    mnuDetails: TMenuItem;
    Panel1: TPanel;
	procedure FolderStyleClick(Sender: TObject);
	procedure ListViewSelectItem(Sender: TObject; Item: TListItem;
	  Selected: Boolean);
	procedure OpenArchiveClick(Sender: TObject);
	procedure ViewStyleClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  frmComCtrls: TfrmComCtrls;

implementation

{$R *.dfm}

procedure TfrmComCtrls.FolderStyleClick(Sender: TObject);
begin
  AbTreeView.Visible := mnuFilesByFolder.Checked;
  Splitter1.Visible := mnuFilesByFolder.Checked;
  AbListView.FlatList := mnuAllFiles.Checked;
end;

procedure TfrmComCtrls.ListViewSelectItem(Sender: TObject; Item: TListItem;
  Selected: Boolean);
var
  Stream: TMemoryStream;
begin
  if TAbListItem(Item).IsDirectory then
	Memo1.Clear
  else begin
	Stream := TMemoryStream.Create;
	try
	  AbUnZipper.ExtractToStream(TAbListItem(Item).ArchiveItem.FileName, Stream);
	  Stream.Position := 0;
	  Memo1.Lines.LoadFromStream(Stream);
	finally
	  Stream.Free;
	end;
  end;
end;

procedure TfrmComCtrls.OpenArchiveClick(Sender: TObject);
begin
  if OpenDialog.Execute then
	AbUnZipper.FileName := OpenDialog.FileName;
end;

procedure TfrmComCtrls.ViewStyleClick(Sender: TObject);
begin
  if mnuIcons.Checked then
	AbListView.ViewStyle := vsIcon
  else if mnuList.Checked then
	AbListView.ViewStyle := vsList
  else
	AbListView.ViewStyle := vsReport;
end;

end.
