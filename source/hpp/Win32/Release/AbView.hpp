// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbView.pas' rev: 31.00 (Windows)

#ifndef AbviewHPP
#define AbviewHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Grids.hpp>
#include <AbArcTyp.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abview
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbColors;
class DELPHICLASS TAbSelList;
class DELPHICLASS TAbRowMap;
class DELPHICLASS TAbColHeadings;
class DELPHICLASS TAbBaseViewer;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAbViewAttribute : unsigned char { vaItemName, vaPacked, vaMethod, vaRatio, vaCRC, vaFileAttributes, vaFileType, vaEncryption, vaTimeStamp, vaFileSize, vaVersionMade, vaVersionNeeded, vaPath };

typedef System::Set<TAbViewAttribute, TAbViewAttribute::vaItemName, TAbViewAttribute::vaPath> TAbViewAttributes;

enum DECLSPEC_DENUM TAbDisplayOption : unsigned char { doAlternateColors, doColLines, doColMove, doColSizing, doMultiSelect, doRowLines, doShowIcons, doThumbTrack, doTrackActiveRow };

typedef System::Set<TAbDisplayOption, TAbDisplayOption::doAlternateColors, TAbDisplayOption::doTrackActiveRow> TAbDisplayOptions;

enum DECLSPEC_DENUM TAbSortAttribute : unsigned char { saItemName, saPacked, saPath, saRatio, saTimeStamp, saFileSize };

typedef System::Set<TAbSortAttribute, TAbSortAttribute::saItemName, TAbSortAttribute::saFileSize> TAbSortAttributes;

class PASCALIMPLEMENTATION TAbColors : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
protected:
	System::Uitypes::TColor FSelected;
	System::Uitypes::TColor FSelectedText;
	System::Uitypes::TColor FAlternate;
	System::Uitypes::TColor FAlternateText;
	System::Uitypes::TColor FDeleted;
	System::Uitypes::TColor FDeletedText;
	bool FUpdating;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall DoOnChange(void);
	void __fastcall SetSelected(System::Uitypes::TColor Value);
	void __fastcall SetSelectedText(System::Uitypes::TColor Value);
	void __fastcall SetAlternate(System::Uitypes::TColor Value);
	void __fastcall SetAlternateText(System::Uitypes::TColor Value);
	void __fastcall SetDeleted(System::Uitypes::TColor Value);
	void __fastcall SetDeletedText(System::Uitypes::TColor Value);
	
public:
	void __fastcall BeginUpdate(void);
	void __fastcall EndUpdate(void);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property System::Uitypes::TColor Selected = {read=FSelected, write=SetSelected, nodefault};
	__property System::Uitypes::TColor SelectedText = {read=FSelectedText, write=SetSelectedText, nodefault};
	__property System::Uitypes::TColor Alternate = {read=FAlternate, write=SetAlternate, nodefault};
	__property System::Uitypes::TColor AlternateText = {read=FAlternateText, write=SetAlternateText, nodefault};
	__property System::Uitypes::TColor Deleted = {read=FDeleted, write=SetDeleted, nodefault};
	__property System::Uitypes::TColor DeletedText = {read=FDeletedText, write=SetDeletedText, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TAbColors(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TAbColors(void) : System::Classes::TPersistent() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbSelList : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::Classes::TList* FList;
	int FCurrent;
	
public:
	__fastcall TAbSelList(void);
	__fastcall virtual ~TAbSelList(void);
	void __fastcall Clear(void);
	void __fastcall Deselect(int Index);
	bool __fastcall IsSelected(int Index);
	void __fastcall Select(int Index);
	void __fastcall SelectAll(int Count);
	int __fastcall SelCount(void);
	void __fastcall Toggle(int Index);
	int __fastcall FindFirst(void);
	int __fastcall FindNext(void);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbRowMap : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	int operator[](int RowNum) { return this->Rows[RowNum]; }
	
protected:
	System::Classes::TList* FRows;
	System::Classes::TList* FInvRows;
	bool FSortAscending;
	int __fastcall GetRow(int RowNum);
	int __fastcall GetInvRow(int RowNum);
	void __fastcall SortOnItemName(Abarctyp::TAbArchiveList* ItemList);
	void __fastcall SortOnItemDir(Abarctyp::TAbArchiveList* ItemList);
	
public:
	__fastcall TAbRowMap(void);
	__fastcall virtual ~TAbRowMap(void);
	void __fastcall Clear(void);
	void __fastcall Init(int RowCount);
	void __fastcall SortBy(TAbSortAttribute Attr, Abarctyp::TAbArchiveList* ItemList);
	__property int Rows[int RowNum] = {read=GetRow/*, default*/};
	__property int InvRows[int RowNum] = {read=GetInvRow};
	__property bool SortAscending = {read=FSortAscending, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAbColHeadings : public System::Classes::TStringList
{
	typedef System::Classes::TStringList inherited;
	
public:
	/* TStringList.Create */ inline __fastcall TAbColHeadings(void)/* overload */ : System::Classes::TStringList() { }
	/* TStringList.Create */ inline __fastcall TAbColHeadings(bool OwnsObjects)/* overload */ : System::Classes::TStringList(OwnsObjects) { }
	/* TStringList.Create */ inline __fastcall TAbColHeadings(System::WideChar QuoteChar, System::WideChar Delimiter)/* overload */ : System::Classes::TStringList(QuoteChar, Delimiter) { }
	/* TStringList.Create */ inline __fastcall TAbColHeadings(System::WideChar QuoteChar, System::WideChar Delimiter, System::Classes::TStringsOptions Options)/* overload */ : System::Classes::TStringList(QuoteChar, Delimiter, Options) { }
	/* TStringList.Create */ inline __fastcall TAbColHeadings(System::Types::TDuplicates Duplicates, bool Sorted, bool CaseSensitive)/* overload */ : System::Classes::TStringList(Duplicates, Sorted, CaseSensitive) { }
	/* TStringList.Destroy */ inline __fastcall virtual ~TAbColHeadings(void) { }
	
};


typedef void __fastcall (__closure *TAbSortedEvent)(System::TObject* Sender, TAbViewAttribute Attr);

typedef void __fastcall (__closure *TAbDrawSortArrowEvent)(System::TObject* Sender, int Column, bool Ascending, Vcl::Graphics::TCanvas* Cnv, const System::Types::TRect &Rect);

class PASCALIMPLEMENTATION TAbBaseViewer : public Vcl::Grids::TCustomGrid
{
	typedef Vcl::Grids::TCustomGrid inherited;
	
protected:
	bool FAllowInvalidate;
	TAbViewAttributes FAttributes;
	TAbDisplayOptions FDisplayOptions;
	TAbSortAttributes FSortAttributes;
	System::StaticArray<int, 13> FColMap;
	bool FColSizing;
	bool FColMoving;
	TAbColHeadings* FHeadings;
	Abarctyp::TAbArchiveList* FItemList;
	TAbRowMap* FRowMap;
	System::UnicodeString FFileName;
	int FFontSize;
	int FItemIndex;
	TAbColors* FColors;
	bool FButtonDown;
	System::Classes::TStringList* FIcons;
	TAbSelList* FSelList;
	bool FMultiSelecting;
	System::Classes::TShiftState FShiftState;
	int FSortCol;
	int RowAnchor;
	Vcl::Grids::TGridCoord ViewMouseCoord;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnClick;
	System::Classes::TNotifyEvent FOnDblClick;
	TAbSortedEvent FOnSorted;
	TAbDrawSortArrowEvent FOnDrawSortArrow;
	bool __fastcall AttrToSortAttribute(TAbViewAttribute Attr, TAbSortAttribute &SortAttr);
	System::UnicodeString __fastcall AttrToStr(TAbViewAttribute Attr, Abarctyp::TAbArchiveItem* aItem);
	int __fastcall ColMap(int ColNum);
	void __fastcall ColorsChange(System::TObject* Sender);
	void __fastcall DrawHeaderButton(int ACol, const System::UnicodeString AText);
	void __fastcall DrawSortArrow(void);
	System::Word __fastcall DrawTextFormat(TAbViewAttribute Attr, System::Types::TRect &Rect);
	int __fastcall GetCount(void);
	int __fastcall GetActiveRow(void);
	int __fastcall GetHeaderRowHeight(void);
	HICON __fastcall GetIcon(const System::UnicodeString ItemName);
	int __fastcall GetSelCount(void);
	bool __fastcall GetSelected(int RowNum);
	System::UnicodeString __fastcall GetVersion(void);
	void __fastcall InitColMap(void);
	HIDESBASE void __fastcall InvalidateRow(int ARow);
	HIDESBASE void __fastcall MoveColumn(int FromCol, int ToCol);
	void __fastcall RefreshCell(int ARow, int ACol);
	void __fastcall RefreshRow(int ARow);
	void __fastcall SetActiveRow(int RowNum);
	void __fastcall SetAttributes(TAbViewAttributes Value);
	void __fastcall SetDisplayOptions(TAbDisplayOptions Value);
	void __fastcall SetSortAttributes(TAbSortAttributes Value);
	void __fastcall SetHeaderRowHeight(int Value);
	void __fastcall SetHeadings(TAbColHeadings* Value);
	void __fastcall SetSelected(int RowNum, bool Value);
	void __fastcall SetVersion(const System::UnicodeString Value);
	int __fastcall UpdateColCount(TAbViewAttributes Attributes);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Msg);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall Click(void);
	DYNAMIC void __fastcall DblClick(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall Loaded(void);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall ColumnMoved(int FromIndex, int ToIndex);
	virtual void __fastcall Paint(void);
	virtual void __fastcall DrawCell(int ACol, int ARow, const System::Types::TRect &ARect, Vcl::Grids::TGridDrawState AState);
	DYNAMIC void __fastcall TopLeftChanged(void);
	virtual void __fastcall DoChange(System::TObject* Sender);
	virtual void __fastcall DoLoad(System::TObject* Sender);
	virtual void __fastcall DoSorted(TAbViewAttribute Attr);
	__property TAbViewAttributes Attributes = {read=FAttributes, write=SetAttributes, nodefault};
	__property TAbDisplayOptions DisplayOptions = {read=FDisplayOptions, write=SetDisplayOptions, nodefault};
	__property int HeaderRowHeight = {read=GetHeaderRowHeight, write=SetHeaderRowHeight, nodefault};
	__property TAbColHeadings* Headings = {read=FHeadings, write=SetHeadings};
	__property Abarctyp::TAbArchiveList* ItemList = {read=FItemList, write=FItemList};
	__property TAbSortAttributes SortAttributes = {read=FSortAttributes, write=SetSortAttributes, nodefault};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion, stored=false};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property System::Classes::TNotifyEvent OnDblClick = {read=FOnDblClick, write=FOnDblClick};
	__property TAbSortedEvent OnSorted = {read=FOnSorted, write=FOnSorted};
	__property TAbDrawSortArrowEvent OnDrawSortArrow = {read=FOnDrawSortArrow, write=FOnDrawSortArrow};
	
public:
	__fastcall virtual TAbBaseViewer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAbBaseViewer(void);
	void __fastcall BeginUpdate(void);
	void __fastcall EndUpdate(void);
	void __fastcall ClearSelections(void);
	void __fastcall SelectAll(void);
	__property int ActiveRow = {read=GetActiveRow, write=SetActiveRow, nodefault};
	__property TAbColors* Colors = {read=FColors, write=FColors};
	__property int Count = {read=GetCount, nodefault};
	__property int SelCount = {read=GetSelCount, nodefault};
	__property bool Selected[int RowNum] = {read=GetSelected, write=SetSelected};
	__property ColWidths;
	__property RowHeights;
	
__published:
	__property OnDragDrop;
	__property OnDragOver;
public:
	/* TWinControl.CreateParented */ inline __fastcall TAbBaseViewer(HWND ParentWindow) : Vcl::Grids::TCustomGrid(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Byte AbDefColWidth = System::Byte(0x96);
static const System::Int8 AbDefRowHeight = System::Int8(0x18);
static const System::Int8 AbHeaderRow = System::Int8(0x0);
static const int AbDefSelColor = int(-16777203);
static const int AbDefSelTextColor = int(-16777202);
static const int AbDefHighColor = int(16776960);
static const int AbDefHighTextColor = int(255);
static const int AbDefDelColor = int(65535);
static const int AbDefDelTextColor = int(8388608);
}	/* namespace Abview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABVIEW)
using namespace Abview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbviewHPP
