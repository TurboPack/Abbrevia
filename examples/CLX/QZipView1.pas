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

unit QZipView1;

interface

uses
  SysUtils,   
  AbArcTyp, AbUtils,
  QForms,
  AbZipper, AbZipKit, AbZipTyp, AbZBrows, AbMeter,
  AbDlgDir, AbView, AbZView, AbBrowse, AbBase, AbQMeter, QMenus, QDialogs,
  QTypes, QControls, QStdCtrls, QExtCtrls, QGrids, AbQView, AbQZView,
  Classes;

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
    ZipView1: TMenuItem;
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
    Add1: TMenuItem;
    Delete1: TMenuItem;
    Extract1: TMenuItem;
    Freshen1: TMenuItem;
    AbZipView1: TAbZipView;
    AbZipKit1: TAbZipKit;
    ZipKit1: TMenuItem;
    Compress1: TMenuItem;
    N2: TMenuItem;
    Store1: TMenuItem;
    Stored1: TMenuItem;
    Deflated1: TMenuItem;
    Best1: TMenuItem;
    Deflation1: TMenuItem;
    Normal1: TMenuItem;
    Maximum1: TMenuItem;
    Fast1: TMenuItem;
    SuperFast1: TMenuItem;
    CreateDirs1: TMenuItem;
    RestorePath1: TMenuItem;
    StripPath1: TMenuItem;
    RemoveDots1: TMenuItem;
    Recurse1: TMenuItem;
    ShowIcons1: TMenuItem;
    Colors1: TMenuItem;
    Selectedcolor: TMenuItem;
    Selectedtextcolor: TMenuItem;
    AlternateColor1: TMenuItem;
    AlternateTextColor1: TMenuItem;
    Freshen2: TMenuItem;
    Panel2: TPanel;
    AbMeter1: TAbMeter;
    Label1: TLabel;
    Label2: TLabel;
    Moveselecteditem1: TMenuItem;
    Replace1: TMenuItem;
    PopupMenu1: TPopupMenu;
    Delete2: TMenuItem;
    Extract2: TMenuItem;
    Freshen3: TMenuItem;
    Move1: TMenuItem;
    AbMeter2: TAbMeter;
    Save1: TMenuItem;
    Testselecteditems1: TMenuItem;
    Logging1: TMenuItem;
    DeletedColor1: TMenuItem;
    DeletedTextColor1: TMenuItem;
    AutomaticTar: TMenuItem;
    ViewasTar1: TMenuItem;
    procedure AbZipView1Click(Sender: TObject);
    procedure AttributeClick(Sender: TObject);
    procedure DisplayOptionClick(Sender: TObject);
    procedure SortAttributeClick(Sender: TObject);
    procedure Open1Click(Sender: TObject);
    procedure Close1Click(Sender: TObject);
    procedure SelectAll1Click(Sender: TObject);
    procedure ClearSelections1Click(Sender: TObject);
    procedure Font1Click(Sender: TObject);
    procedure Exit1Click(Sender: TObject);
    procedure Selected1Click(Sender: TObject);
    procedure Selectedtext1Click(Sender: TObject);
    procedure Rowheight1Click(Sender: TObject);
    procedure Headerheight1Click(Sender: TObject);
    procedure Add1Click(Sender: TObject);
    procedure Delete1Click(Sender: TObject);
    procedure Extract1Click(Sender: TObject);
    procedure ExtractOptionClick(Sender: TObject);
    procedure StoreOptionClick(Sender: TObject);
    procedure MethodClick(Sender: TObject);
    procedure DeflationOptionClick(Sender: TObject);
    procedure AbZipKit1ConfirmProcessItem(Sender: TObject;
      Item: TAbArchiveItem; ProcessType: TAbProcessType;
      var Confirm: Boolean);
    procedure AbZipView1Change(Sender: TObject);
    procedure AlternateColor1Click(Sender: TObject);
    procedure AlternateTextColor1Click(Sender: TObject);
    procedure Freshen1Click(Sender: TObject);
    procedure Moveselecteditem1Click(Sender: TObject);
    procedure AbZipKit1Save(Sender: TObject);
    procedure Save1Click(Sender: TObject);
    procedure Testselecteditems1Click(Sender: TObject);
    procedure Logging1Click(Sender: TObject);
    procedure DeletedColor1Click(Sender: TObject);
    procedure DeletedTextColor1Click(Sender: TObject);
    procedure AutomaticTarClick(Sender: TObject);
    procedure ViewasTar1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.xfm}

const
  MainCaption = ' TAbZipView example';

{ -------------------------------------------------------------------------- }
procedure TForm1.AbZipView1Click(Sender: TObject);
begin
  Panel1.Caption := AbZipView1.Items[AbZipView1.ActiveRow].Filename;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Open1Click(Sender: TObject);
begin
  OpenDialog1.Filename := '*.zip';
  if OpenDialog1.Execute then begin
    AbZipKit1.Filename := OpenDialog1.Filename;
    Caption := AbZipKit1.Filename +
      '   ' + IntToStr(AbZipView1.Count) + ' items';
    Action1.Enabled := True;
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Close1Click(Sender: TObject);
begin
  AbZipKit1.Filename := '';
  Caption := MainCaption;
  Panel1.Caption := '';
  Action1.Enabled := False;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.AttributeClick(Sender: TObject);
begin
  with TMenuItem(Sender) do begin
    Checked := not Checked;
   if Checked then
      AbZipView1.Attributes := AbZipView1.Attributes + [TAbViewAttribute(Tag)]
    else
      AbZipView1.Attributes := AbZipView1.Attributes - [TAbViewAttribute(Tag)];
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.DisplayOptionClick(Sender: TObject);
begin
  with TMenuItem(Sender) do begin
    Checked := not Checked;
   if Checked then
      AbZipView1.DisplayOptions := AbZipView1.DisplayOptions +
        [TAbDisplayOption(Tag)]
    else
      AbZipView1.DisplayOptions := AbZipView1.DisplayOptions -
        [TAbDisplayOption(Tag)]
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.SortAttributeClick(Sender: TObject);
begin
  with TMenuItem(Sender) do begin
    Checked := not Checked;
   if Checked then
      AbZipView1.SortAttributes := AbZipView1.SortAttributes +
        [TAbSortAttribute(Tag)]
    else
      AbZipView1.SortAttributes := AbZipView1.SortAttributes -
        [TAbSortAttribute(Tag)]
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.StoreOptionClick(Sender: TObject);
begin
  with TMenuItem(Sender) do begin
    Checked := not Checked;
   if Checked then
      AbZipKit1.StoreOptions := AbZipKit1.StoreOptions +
        [TAbStoreOption(Tag)]
    else
      AbZipKit1.StoreOptions := AbZipKit1.StoreOptions -
        [TAbStoreOption(Tag)]
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.ExtractOptionClick(Sender: TObject);
begin
  with TMenuItem(Sender) do begin
    Checked := not Checked;
   if Checked then
      AbZipKit1.ExtractOptions := AbZipKit1.ExtractOptions +
        [TAbExtractOption(Tag)]
    else
      AbZipKit1.ExtractOptions := AbZipKit1.ExtractOptions -
        [TAbExtractOption(Tag)]
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.MethodClick(Sender: TObject);
begin
  with TMenuItem(Sender) do begin
    Checked := true;
    AbZipKit1.CompressionMethodToUse := TAbZipSupportedMethod(Tag);
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.DeflationOptionClick(Sender: TObject);
begin
  with TMenuItem(Sender) do begin
    Checked := true;
    AbZipKit1.DeflationOption := TAbZipDeflationOption(Tag);
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.SelectAll1Click(Sender: TObject);
begin
  AbZipView1.SelectAll;
  AbZipView1Click(nil);
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.ClearSelections1Click(Sender: TObject);
begin
  AbZipView1.ClearSelections;
  AbZipView1Click(nil);
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Font1Click(Sender: TObject);
begin
  FontDialog1.Font := AbZipView1.Font;
  if FontDialog1.Execute then
    AbZipView1.Font := FontDialog1.Font;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Exit1Click(Sender: TObject);
begin
  Close;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.DeletedColor1Click(Sender: TObject);
begin
  if ColorDialog1.Execute then
    AbZipView1.Colors.Deleted := ColorDialog1.Color;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.DeletedTextColor1Click(Sender: TObject);
begin
  if ColorDialog1.Execute then
    AbZipView1.Colors.DeletedText := ColorDialog1.Color;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Selected1Click(Sender: TObject);
begin
  if ColorDialog1.Execute then
    AbZipView1.Colors.Selected := ColorDialog1.Color;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Selectedtext1Click(Sender: TObject);
begin
  if ColorDialog1.Execute then
    AbZipView1.Colors.SelectedText := ColorDialog1.Color;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Rowheight1Click(Sender: TObject);
var
  s : string;
begin
  s := IntToStr(AbZipView1.DefaultRowHeight);
  if InputQuery(MainCaption, 'Row Height', s) then
    AbZipView1.DefaultRowHeight := StrToIntDef(s, 18);
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Headerheight1Click(Sender: TObject);
var
  s : string;
begin
  s := IntToStr(AbZipView1.HeaderRowHeight);
  if InputQuery(MainCaption, 'Header Height', s) then
    AbZipView1.HeaderRowHeight := StrToIntDef(s, 18);
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Add1Click(Sender: TObject);
var
  i : Integer;
begin
  with OpenDialog1 do begin
    Filename := '*.*';
    Options := Options + [ofAllowMultiSelect];
    AbZipView1.BeginUpdate;
    if Execute then for i := 0 to Pred(Files.Count) do
      AbZipKit1.AddFiles(Files[i], 0);
    AbZipView1.EndUpdate;
    Panel1.Caption := '';
    Options := Options - [ofAllowMultiSelect];
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Delete1Click(Sender: TObject);
var
  i : Longint;
begin
  Panel1.Caption := '';
  with AbZipView1 do
    for i := 0 to Pred(Count) do
      Items[i].Tagged := Selected[i];
  AbZipKit1.DeleteTaggedItems;
  Panel1.Caption := '';
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Extract1Click(Sender: TObject);
var
  i : Longint;
  Continue : Boolean;
begin
{$IFDEF Win32}
  with TAbDirDlg.Create(Self) do begin
    Caption := 'Directory';
    AdditionalText := 'Select folder to extract into';
    SelectedFolder := AbZipKit1.BaseDirectory;
    Continue := Execute;
    if Continue then
      AbZipKit1.BaseDirectory := SelectedFolder;
{$ELSE}
  with TDirDlg.Create(Self) do begin
    SelectedFolder := AbZipKit1.BaseDirectory;
    Continue := (ShowModal = mrOK);
    if Continue then
      AbZipKit1.BaseDirectory := SelectedFolder;
{$ENDIF}
    Free;
  end;
  if not Continue then
    Exit;
  Panel1.Caption := '';
  with AbZipView1 do
    for i := 0 to Pred(Count) do
      Items[i].Tagged := Selected[i];
  AbZipKit1.ExtractTaggedItems;
  AbZipView1.ClearSelections;
  Panel1.Caption := '';
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Freshen1Click(Sender: TObject);
var
  i : Longint;
begin
  Panel1.Caption := '';
  with AbZipView1 do
    for i := 0 to Pred(Count) do
      Items[i].Tagged := Selected[i];
  AbZipKit1.FreshenTaggedItems;
  AbZipKit1.Save;
  AbZipView1.ClearSelections;
  Panel1.Caption := '';
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.TestSelecteditems1Click(Sender: TObject);
var
  i : Longint;
begin
  Panel1.Caption := '';
  with AbZipView1 do
    for i := 0 to Pred(Count) do
      Items[i].Tagged := Selected[i];
  AbZipKit1.TestTaggedItems;
  AbZipView1.ClearSelections;
  Panel1.Caption := '';
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.AbZipKit1ConfirmProcessItem(Sender: TObject;
  Item: TAbArchiveItem; ProcessType: TAbProcessType; var Confirm: Boolean);
var
  s : string;
begin
  case ProcessType of
    ptAdd : s := 'Adding ';
    ptDelete : s := 'Deleting ';
    ptExtract : s := 'Extracting ';
    ptFreshen : s := 'Freshening ';
  else
    s := '??? ';
  end;
  Panel1.Caption := s + Item.Filename;
  Confirm := True;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.AbZipView1Change(Sender: TObject);
begin
    Caption := AbZipKit1.Filename +
      '   ' + IntToStr(AbZipView1.Count) + ' items';
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.AlternateColor1Click(Sender: TObject);
begin
  if ColorDialog1.Execute then
    AbZipView1.Colors.Alternate := ColorDialog1.Color;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.AlternateTextColor1Click(Sender: TObject);
begin
  if ColorDialog1.Execute then
    AbZipView1.Colors.AlternateText := ColorDialog1.Color;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Moveselecteditem1Click(Sender: TObject);
var
  i : Longint;
  s : string;
begin
  with AbZipView1 do
    if (SelCount > 0) then begin
      for i := 0 to Pred(Count) do
        if Selected[i] then begin
          s := Items[i].Filename;
          if InputQuery(MainCaption, 'Rename file', s) then
            AbZipKit1.Move(Items[i], s);
        end;
      AbZipKit1.Save;
      AbZipView1.ClearSelections;
      Panel1.Caption := '';
    end;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.AbZipKit1Save(Sender: TObject);
begin
  Panel1.Caption := 'Saving ' + AbZipKit1.Filename;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Save1Click(Sender: TObject);
begin
  if (AbZipKit1.Filename <> '') then
    AbZipKit1.Save;
end;
{ -------------------------------------------------------------------------- }
procedure TForm1.Logging1Click(Sender: TObject);
begin
  Logging1.Checked := not Logging1.Checked;
  if Logging1.Checked then begin
    OpenDialog1.Title := 'Select log file';
    if AbZipKit1.LogFile = '' then
      OpenDialog1.Filename := '*.txt'
    else
      OpenDialog1.Filename := AbZipKit1.LogFile;
    Logging1.Checked := OpenDialog1.Execute;
    if Logging1.Checked then
      AbZipKit1.LogFile := OpenDialog1.Filename;
  end;
  AbZipKit1.Logging := Logging1.Checked;
end;

procedure TForm1.AutomaticTarClick(Sender: TObject);
begin
  AbZipKit1.TarAutoHandle := not AbZipKit1.TarAutoHandle;
  AutomaticTar.Checked := AbZipKit1.TarAutoHandle;
end;
procedure TForm1.ViewasTar1Click(Sender: TObject);
begin
  AbZipKit1.ForceType := not AbZipKit1.ForceType;
  ViewasTar1.Checked := AbZipKit1.ForceType;
  if AbZipKit1.ForceType then
    AbZipKit1.ArchiveType := atGzippedTar;
end;


end.
