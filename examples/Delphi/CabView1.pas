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
{* ABBREVIA: CABVIEW1.PAS                                *}
{* Copyright (c) TurboPower Software Co 1997             *}
{* All rights reserved.                                  *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit CabView1;

interface

uses
  SysUtils, WinTypes, WinProcs, Messages, Classes, Graphics, Controls,
  Forms, Dialogs, Grids, StdCtrls, ExtCtrls, Menus, FileCtrl,

  AbArcTyp, AbCabTyp, AbMeter, AbDlgDir, AbView, AbCView, AbCBrows,
  AbBrowse, AbCabMak, AbCabKit, AbBase, AbUtils;

type
  TForm1 = class(TForm)
    OpenDialog1: TOpenDialog;
    Panel1: TPanel;
    FontDialog1: TFontDialog;
    MainMenu1: TMainMenu;
    File1: TMenuItem;
    Open1: TMenuItem;
    Close1: TMenuItem;
    N1: TMenuItem;
    Print1: TMenuItem;
    Exit1: TMenuItem;
    ColorDialog1: TColorDialog;
    CabView1: TMenuItem;
    Attributes1: TMenuItem;
    Itemname1: TMenuItem;
    Packed1: TMenuItem;
    Method1: TMenuItem;
    Ratio1: TMenuItem;
    CRC1: TMenuItem;
    Fileattributes1: TMenuItem;
    Filetype1: TMenuItem;
    Encryption1: TMenuItem;
    Timestamp1: TMenuItem;
    Filesize1: TMenuItem;
    Versionmade1: TMenuItem;
    Versionneeded1: TMenuItem;
    Path1: TMenuItem;
    Display1: TMenuItem;
    Columnlines1: TMenuItem;
    Columnmoving1: TMenuItem;
    Columnresizing1: TMenuItem;
    MultiSelect1: TMenuItem;
    Rowlines1: TMenuItem;
    Thumbtracking1: TMenuItem;
    Trackactiverow1: TMenuItem;
    Sort1: TMenuItem;
    Itemname2: TMenuItem;
    Packed2: TMenuItem;
    Ratio2: TMenuItem;
    Timestamp2: TMenuItem;
    Filesize2: TMenuItem;
    Select1: TMenuItem;
    SelectAll1: TMenuItem;
    ClearSelections1: TMenuItem;
    Rows1: TMenuItem;
    Rowheight1: TMenuItem;
    Headerheight1: TMenuItem;
    Font1: TMenuItem;
    Alternatecolors1: TMenuItem;
    Action1: TMenuItem;
    Extract1: TMenuItem;
    ShowIcons1: TMenuItem;
    Colors1: TMenuItem;
    Selectedcolor: TMenuItem;
    Selectedtextcolor: TMenuItem;
    Alternatecolor1: TMenuItem;
    Alternatetextcolor1: TMenuItem;
    Panel2: TPanel;
    AbMeter1: TAbMeter;
    Label1: TLabel;
    Label2: TLabel;
    PopupMenu1: TPopupMenu;
    Extract2: TMenuItem;
    AbMeter2: TAbMeter;
    AbCabView1: TAbCabView;
    Extractoptions1: TMenuItem;
    CreateDirs1: TMenuItem;
    RestorePath1: TMenuItem;
    AbCabKit1: TAbCabKit;
    Additems1: TMenuItem;
    procedure AbCabView1Click(Sender: TObject);
    procedure AttributeClick(Sender: TObject);
    procedure DisplayOptionClick(Sender: TObject);
    procedure SortAttributeClick(Sender: TObject);
    procedure SetAttribute(Attr : TAbViewAttribute; Value : Boolean);
    procedure SetDisplayOption(Option : TAbDisplayOption; Value : Boolean);
    procedure SetExtractOption(Option : TAbExtractOption; Value : Boolean);
    procedure SetSortAttribute(Option : TAbSortAttribute; Value : Boolean);
    procedure Open1Click(Sender: TObject);
    procedure Close1Click(Sender: TObject);
    procedure SelectAll1Click(Sender: TObject);
    procedure ClearSelections1Click(Sender: TObject);
    procedure Font1Click(Sender: TObject);
    procedure Exit1Click(Sender: TObject);
    procedure ExtractOptionClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure Selected1Click(Sender: TObject);
    procedure Selectedtext1Click(Sender: TObject);
    procedure Rowheight1Click(Sender: TObject);
    procedure Headerheight1Click(Sender: TObject);
    procedure Extract1Click(Sender: TObject);
    procedure AbCabKit1ConfirmProcessItem(Sender: TObject;
      Item: TAbArchiveItem; ProcessType: TAbProcessType;
      var Confirm: Boolean);
    procedure AbCabView1Change(Sender: TObject);
    procedure Alternatecolor1Click(Sender: TObject);
    procedure Alternatetextcolor1Click(Sender: TObject);
    procedure AbCabKit1Save(Sender: TObject);
    procedure Additems1Click(Sender: TObject);
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
  MainCaption = ' TAbCabView example';


{ -------------------------------------------------------------------------- }
procedure TForm1.SetAttribute(Attr : TAbViewAttribute; Value : Boolean);
  procedure SetMenu(Item : TMenuItem);
  begin
    Item.Checked := Value;
    if Item.Checked then
      AbCabView1.Attributes := AbCabView1.Attributes + [Attr]
    else
      AbCabView1.Attributes := AbCabView1.Attributes - [Attr];
  end;
begin
  case Attr of
    vaItemName       : SetMenu(ItemName1);
    vaPacked         : SetMenu(Packed1);
    vaMethod         : SetMenu(Method1);
    vaRatio          : SetMenu(Ratio1);
    vaCRC            : SetMenu(CRC1);
    vaFileAttributes : SetMenu(FileAttributes1);
    vaFileType       : SetMenu(FileType1);
    vaEncryption     : SetMenu(Encryption1);
    vaTimeStamp      : SetMenu(TimeStamp1);
    vaFileSize       : SetMenu(FileSize1);
    vaVersionMade    : SetMenu(VersionMade1);
    vaVersionNeeded  : SetMenu(VersionNeeded1);
    vaPath           : SetMenu(Path1);
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.SetDisplayOption(Option : TAbDisplayOption; Value : Boolean);
  procedure SetMenu(Item : TMenuItem);
  begin
    Item.Checked := Value;
    if Item.Checked then
      AbCabView1.DisplayOptions := AbCabView1.DisplayOptions + [Option]
    else
      AbCabView1.DisplayOptions := AbCabView1.DisplayOptions - [Option]
  end;
begin
  case Option of
    doAlternateColors : SetMenu(AlternateColors1);
    doColLines        : SetMenu(ColumnLines1);
    doColMove         : SetMenu(ColumnMoving1);
    doColSizing       : SetMenu(ColumnResizing1);
    doMultiSelect     : SetMenu(MultiSelect1);
    doRowLines        : SetMenu(RowLines1);
    doShowIcons       : SetMenu(ShowIcons1);
    doThumbTrack      : SetMenu(ThumbTracking1);
    doTrackActiveRow  : SetMenu(TrackActiveRow1);
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.SetExtractOption(Option : TAbExtractOption; Value : Boolean);
  procedure SetMenu(Item : TMenuItem);
  begin
    Item.Checked := Value;
    if Item.Checked then
      AbCabKit1.ExtractOptions := AbCabKit1.ExtractOptions + [Option]
    else
      AbCabKit1.ExtractOptions := AbCabKit1.ExtractOptions - [Option]
  end;
begin
  case Option of
    eoCreateDirs : SetMenu(CreateDirs1);
    eoRestorePath : SetMenu(RestorePath1);
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.SetSortAttribute(Option : TAbSortAttribute; Value : Boolean);
  procedure SetMenu(Item : TMenuItem);
  begin
    Item.Checked := Value;
    if Item.Checked then
      AbCabView1.SortAttributes := AbCabView1.SortAttributes + [Option]
    else
      AbCabView1.SortAttributes := AbCabView1.SortAttributes - [Option];
  end;
begin
  case Option of
    saItemName  : SetMenu(ItemName2);
    saPacked    : SetMenu(Packed2);
    saRatio     : SetMenu(Ratio2);
    saTimeStamp : SetMenu(TimeStamp2);
    saFileSize  : SetMenu(FileSize2);
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.AbCabView1Click(Sender: TObject);
begin
  Panel1.Caption := AbCabView1.Items[AbCabView1.ActiveRow].Filename;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Open1Click(Sender: TObject);
begin
  OpenDialog1.Filename := '*.cab';
  if OpenDialog1.Execute then begin
    AbCabKit1.Filename := OpenDialog1.Filename;
{    AbCabKit1.BaseDirectory := ExtractFilePath(AbCabKit1.Filename);}
    Caption := AbCabKit1.Filename +
      '   ' + IntToStr(AbCabView1.Count) + ' items';
    Action1.Enabled := True;
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Close1Click(Sender: TObject);
begin
  AbCabKit1.Filename := '';
  Caption := MainCaption;
  Panel1.Caption := '';
  Action1.Enabled := False;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.AttributeClick(Sender: TObject);
begin
  with TMenuItem(Sender) do
    SetAttribute(TAbViewAttribute(Tag), not Checked);
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.DisplayOptionClick(Sender: TObject);
begin
  with TMenuItem(Sender) do
    SetDisplayOption(TAbDisplayOption(Tag), not Checked);
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.SortAttributeClick(Sender: TObject);
begin
  with TMenuItem(Sender) do
    SetSortAttribute(TAbSortAttribute(Tag), not Checked);
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.SelectAll1Click(Sender: TObject);
begin
  AbCabView1.SelectAll;
  AbCabView1Click(nil);
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.ClearSelections1Click(Sender: TObject);
begin
  AbCabView1.ClearSelections;
  AbCabView1Click(nil);
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.ExtractOptionClick(Sender: TObject);
begin
  with TMenuItem(Sender) do
    SetExtractOption(TAbExtractOption(Tag), not Checked);
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Font1Click(Sender: TObject);
begin
  FontDialog1.Font := AbCabView1.Font;
  if FontDialog1.Execute then
    AbCabView1.Font := FontDialog1.Font;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Exit1Click(Sender: TObject);
begin
  Close;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.FormCreate(Sender: TObject);
var
  i : TAbViewAttribute;
  j : TAbDisplayOption;
  k : TAbSortAttribute;
  m : TAbExtractOption;
begin
  for i := Low(TAbViewAttribute) to High(TAbViewAttribute) do
    SetAttribute(i, i in AbCabView1.Attributes);
  for j := Low(TAbDisplayOption) to High(TAbDisplayOption) do
    SetDisplayOption(j, j in AbCabView1.DisplayOptions);
  for k := Low(TAbSortAttribute) to High(TAbSortAttribute) do
    SetSortAttribute(k, k in AbCabView1.SortAttributes);
  for m := Low(TAbExtractOption) to High(TAbExtractOption) do
    SetExtractOption(m, m in AbCabKit1.ExtractOptions);
  Caption := MainCaption;
  Action1.Enabled := AbCabKit1.FileName <> '';
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Selected1Click(Sender: TObject);
begin
  if ColorDialog1.Execute then
    AbCabView1.Colors.Selected := ColorDialog1.Color;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Selectedtext1Click(Sender: TObject);
begin
  if ColorDialog1.Execute then
    AbCabView1.Colors.SelectedText := ColorDialog1.Color;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Rowheight1Click(Sender: TObject);
var
  s : string;
begin
  s := IntToStr(AbCabView1.DefaultRowHeight);
  if InputQuery(MainCaption, 'Row Height', s) then
    AbCabView1.DefaultRowHeight := StrToIntDef(s, 18);
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Headerheight1Click(Sender: TObject);
var
  s : string;
begin
  s := IntToStr(AbCabView1.HeaderRowHeight);
  if InputQuery(MainCaption, 'Header Height', s) then
    AbCabView1.HeaderRowHeight := StrToIntDef(s, 18);
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Extract1Click(Sender: TObject);
var
  i : Longint;
  Continue : Boolean;
begin
  with TAbDirDlg.Create(Self) do begin
    Caption := 'Directory';
    AdditionalText := 'Select folder to extract into';
    Continue := Execute;
    if Continue then
      AbCabKit1.BaseDirectory := SelectedFolder;
    Free;
  end;
  if not Continue then
    Exit;
  Panel1.Caption := '';
  with AbCabView1 do
    for i := 0 to Pred(Count) do
      Items[i].Tagged := Selected[i];
  AbCabKit1.ExtractTaggedItems;
  AbCabView1.ClearSelections;
  Panel1.Caption := '';
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.AbCabKit1ConfirmProcessItem(Sender: TObject;
  Item: TAbArchiveItem; ProcessType: TAbProcessType; var Confirm: Boolean);
var
  s : string;
begin
  if (ProcessType = ptExtract) then
    s := 'Extracting '
  else
    s := '??? ';
  Panel1.Caption := s + Item.Filename;
  Confirm := True;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.AbCabView1Change(Sender: TObject);
begin
    Caption := AbCabKit1.Filename +
      '   ' + IntToStr(AbCabView1.Count) + ' items';
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Alternatecolor1Click(Sender: TObject);
begin
  if ColorDialog1.Execute then
    AbCabView1.Colors.Alternate := ColorDialog1.Color;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Alternatetextcolor1Click(Sender: TObject);
begin
  if ColorDialog1.Execute then
    AbCabView1.Colors.AlternateText := ColorDialog1.Color;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.AbCabKit1Save(Sender: TObject);
begin
  Panel1.Caption := 'Saving ' + AbCabKit1.Filename;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Additems1Click(Sender: TObject);
var
  i : Integer;
begin
  with OpenDialog1 do begin
    FileName := '*.*';
    Title := 'Select files to add';
    if Execute then
      if (Files.Count > 0) then
        for i := 0 to Pred(Files.Count) do
          AbCabKit1.AddFiles(Files[i], 0);
  end;
end;

end.
