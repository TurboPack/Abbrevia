// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbComCtrls.pas' rev: 29.00 (Windows)

#ifndef AbcomctrlsHPP
#define AbcomctrlsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <AbBrowse.hpp>
#include <AbArcTyp.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abcomctrls
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbListItem;
class DELPHICLASS TAbListItems;
class DELPHICLASS TAbCustomListView;
class DELPHICLASS TAbListView;
class DELPHICLASS TAbCustomTreeView;
class DELPHICLASS TAbTreeView;
class DELPHICLASS TAbProgressBar;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbListItem : public Vcl::Comctrls::TListItem
{
	typedef Vcl::Comctrls::TListItem inherited;
	
protected:
	Abarctyp::TAbArchiveItem* FArchiveItem;
	bool __fastcall GetIsDirectory(void);
	bool __fastcall GetIsEncrypted(void);
	
public:
	__property Abarctyp::TAbArchiveItem* ArchiveItem = {read=FArchiveItem, write=FArchiveItem};
	__property bool IsDirectory = {read=GetIsDirectory, nodefault};
	__property bool IsEncrypted = {read=GetIsEncrypted, nodefault};
public:
	/* TListItem.Create */ inline __fastcall virtual TAbListItem(Vcl::Comctrls::TListItems* AOwner) : Vcl::Comctrls::TListItem(AOwner) { }
	/* TListItem.Destroy */ inline __fastcall virtual ~TAbListItem(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbListItems : public Vcl::Comctrls::TListItems
{
	typedef Vcl::Comctrls::TListItems inherited;
	
public:
	TAbListItem* operator[](int Index) { return Item[Index]; }
	
protected:
	HIDESBASE TAbListItem* __fastcall GetItem(int aIndex);
	HIDESBASE void __fastcall SetItem(int aIndex, TAbListItem* aValue);
	
public:
	__property TAbListItem* Item[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TListItems.Create */ inline __fastcall TAbListItems(Vcl::Comctrls::TCustomListView* AOwner) : Vcl::Comctrls::TListItems(AOwner) { }
	/* TListItems.Destroy */ inline __fastcall virtual ~TAbListItems(void) { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TAbViewColumn : unsigned char { vcName, vcFileType, vcLastModified, vcSize, vcRatio, vcPacked, vcCRC, vcAttributes, vcEncrypted, vcMethod, vcPath };

typedef System::Set<TAbViewColumn, TAbViewColumn::vcName, TAbViewColumn::vcPath> TAbViewColumns;

class PASCALIMPLEMENTATION TAbCustomListView : public Vcl::Comctrls::TCustomListView
{
	typedef Vcl::Comctrls::TCustomListView inherited;
	
protected:
	Abbrowse::TAbBaseBrowser* FArchive;
	void *FDefHeaderProc;
	bool FFlatList;
	HWND FHeaderHandle;
	Vcl::Controls::TImageList* FHeaderImages;
	void *FHeaderInstance;
	bool FInUpdateSortArrows;
	System::UnicodeString FPath;
	bool FSortAscending;
	int FSortColIndex;
	TAbViewColumn FSortColumn;
	HBITMAP FSortUpBmp;
	HBITMAP FSortDownBmp;
	TAbCustomTreeView* FTreeView;
	TAbViewColumns FVisibleColumns;
	DYNAMIC void __fastcall ColClick(Vcl::Comctrls::TListColumn* aColumn);
	virtual Vcl::Comctrls::TListItem* __fastcall CreateListItem(void);
	virtual Vcl::Comctrls::TListItems* __fastcall CreateListItems(void);
	virtual void __fastcall CreateWnd(void);
	virtual bool __fastcall CustomDrawSubItem(Vcl::Comctrls::TListItem* Item, int SubItem, Vcl::Comctrls::TCustomDrawState State, Vcl::Comctrls::TCustomDrawStage Stage);
	DYNAMIC void __fastcall DblClick(void);
	virtual void __fastcall DoChange(System::TObject* Sender);
	TAbListItems* __fastcall GetListItems(void);
	System::UnicodeString __fastcall GetVersion(void);
	HIDESBASE virtual void __fastcall HeaderWndProc(Winapi::Messages::TMessage &Msg);
	virtual bool __fastcall IsCustomDrawn(Vcl::Comctrls::TCustomDrawTarget Target, Vcl::Comctrls::TCustomDrawStage Stage);
	virtual void __fastcall Notification(System::Classes::TComponent* aComponent, System::Classes::TOperation aOperation);
	void __fastcall SetArchive(Abbrowse::TAbBaseBrowser* aValue);
	void __fastcall SetFlatList(bool aValue);
	void __fastcall SetPath(System::UnicodeString aValue);
	void __fastcall SetTreeView(TAbCustomTreeView* aValue);
	void __fastcall SetVisibleColumns(TAbViewColumns aValue);
	HIDESBASE void __fastcall UpdateColumns(void);
	void __fastcall UpdateSortArrow(void);
	void __fastcall UpdateView(void);
	__property Vcl::Controls::TImageList* HeaderImages = {read=FHeaderImages};
	
public:
	__fastcall virtual TAbCustomListView(System::Classes::TComponent* aOwner);
	__fastcall virtual ~TAbCustomListView(void);
	void __fastcall Sort(TAbViewColumn aColumn, bool aAscending);
	__property Abbrowse::TAbBaseBrowser* Archive = {read=FArchive, write=SetArchive};
	__property Columns;
	__property bool FlatList = {read=FFlatList, write=SetFlatList, nodefault};
	__property TAbListItems* Items = {read=GetListItems, stored=false};
	__property TAbCustomTreeView* TreeView = {read=FTreeView, write=SetTreeView};
	__property System::UnicodeString Path = {read=FPath, write=SetPath};
	__property System::UnicodeString Version = {read=GetVersion, stored=false};
	__property TAbViewColumns VisibleColumns = {read=FVisibleColumns, write=SetVisibleColumns, default=2047};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAbCustomListView(HWND ParentWindow) : Vcl::Comctrls::TCustomListView(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAbListView : public TAbCustomListView
{
	typedef TAbCustomListView inherited;
	
__published:
	__property Action;
	__property Align = {default=0};
	__property AllocBy = {default=0};
	__property Anchors = {default=3};
	__property Archive;
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property BorderWidth = {default=0};
	__property Checkboxes = {default=0};
	__property Color = {default=-16777211};
	__property ColumnClick = {default=1};
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property FlatScrollBars = {default=0};
	__property FullDrag = {default=0};
	__property GridLines = {default=0};
	__property Groups;
	__property HideSelection = {default=1};
	__property HotTrack = {default=0};
	__property HotTrackStyles = {default=0};
	__property HoverTime = {default=-1};
	__property IconOptions;
	__property Items;
	__property LargeImages;
	__property MultiSelect = {default=0};
	__property GroupHeaderImages;
	__property GroupView = {default=0};
	__property ReadOnly = {default=0};
	__property RowSelect = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property Path = {default=0};
	__property PopupMenu;
	__property ShowColumnHeaders = {default=1};
	__property ShowWorkAreas = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TreeView;
	__property Version = {default=0};
	__property ViewStyle = {default=0};
	__property Visible = {default=1};
	__property VisibleColumns = {default=2047};
	__property OnClick;
	__property OnColumnClick;
	__property OnColumnDragged;
	__property OnColumnRightClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnEdited;
	__property OnEditing;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnInfoTip;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property OnSelectItem;
	__property OnItemChecked;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TAbCustomListView.Create */ inline __fastcall virtual TAbListView(System::Classes::TComponent* aOwner) : TAbCustomListView(aOwner) { }
	/* TAbCustomListView.Destroy */ inline __fastcall virtual ~TAbListView(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAbListView(HWND ParentWindow) : TAbCustomListView(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAbCustomTreeView : public Vcl::Comctrls::TTreeView
{
	typedef Vcl::Comctrls::TTreeView inherited;
	
protected:
	Abbrowse::TAbBaseBrowser* FArchive;
	TAbCustomListView* FListView;
	System::UnicodeString FPath;
	DYNAMIC void __fastcall Change(Vcl::Comctrls::TTreeNode* aNode);
	virtual void __fastcall DoChange(System::TObject* Sender);
	virtual void __fastcall GetSelectedIndex(Vcl::Comctrls::TTreeNode* aNode);
	System::UnicodeString __fastcall GetVersion(void);
	virtual void __fastcall Notification(System::Classes::TComponent* aComponent, System::Classes::TOperation aOperation);
	void __fastcall SelectPathNode(void);
	void __fastcall SetArchive(Abbrowse::TAbBaseBrowser* aValue);
	void __fastcall SetListView(TAbCustomListView* aValue);
	void __fastcall SetPath(const System::UnicodeString aValue);
	
public:
	__fastcall virtual TAbCustomTreeView(System::Classes::TComponent* aOwner);
	__property Abbrowse::TAbBaseBrowser* Archive = {read=FArchive, write=SetArchive};
	__property HideSelection = {default=0};
	__property TAbCustomListView* ListView = {read=FListView, write=SetListView};
	__property System::UnicodeString Path = {read=FPath, write=SetPath};
	__property System::UnicodeString Version = {read=GetVersion, stored=false};
public:
	/* TCustomTreeView.Destroy */ inline __fastcall virtual ~TAbCustomTreeView(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAbCustomTreeView(HWND ParentWindow) : Vcl::Comctrls::TTreeView(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAbTreeView : public TAbCustomTreeView
{
	typedef TAbCustomTreeView inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Archive;
	__property AutoExpand = {default=0};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property BorderWidth = {default=0};
	__property ChangeDelay = {default=0};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property Constraints;
	__property DoubleBuffered;
	__property DragKind = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property HideSelection = {default=0};
	__property HotTrack = {default=0};
	__property Indent;
	__property Items;
	__property ListView;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property Path = {default=0};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property RightClickSelect = {default=0};
	__property RowSelect = {default=0};
	__property ShowButtons = {default=1};
	__property ShowHint;
	__property ShowLines = {default=1};
	__property ShowRoot = {default=1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property ToolTips = {default=1};
	__property Version = {default=0};
	__property Visible = {default=1};
	__property OnChanging;
	__property OnClick;
	__property OnCollapsed;
	__property OnCollapsing;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDeletion;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEdited;
	__property OnEditing;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnExpanding;
	__property OnExpanded;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TAbCustomTreeView.Create */ inline __fastcall virtual TAbTreeView(System::Classes::TComponent* aOwner) : TAbCustomTreeView(aOwner) { }
	
public:
	/* TCustomTreeView.Destroy */ inline __fastcall virtual ~TAbTreeView(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAbTreeView(HWND ParentWindow) : TAbCustomTreeView(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAbProgressBar : public Vcl::Comctrls::TProgressBar
{
	typedef Vcl::Comctrls::TProgressBar inherited;
	
protected:
	System::UnicodeString __fastcall GetVersion(void);
	
public:
	void __fastcall DoProgress(System::Byte Progress);
	void __fastcall Reset(void);
	
__published:
	__property System::UnicodeString Version = {read=GetVersion, stored=false};
public:
	/* TProgressBar.Create */ inline __fastcall virtual TAbProgressBar(System::Classes::TComponent* AOwner) : Vcl::Comctrls::TProgressBar(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAbProgressBar(HWND ParentWindow) : Vcl::Comctrls::TProgressBar(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TAbProgressBar(void) { }
	
private:
	void *__IAbProgressMeter;	// Abbrowse::IAbProgressMeter 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4B766704-FD20-40BF-BA40-2EC2DD77B178}
	operator Abbrowse::_di_IAbProgressMeter()
	{
		Abbrowse::_di_IAbProgressMeter intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Abbrowse::IAbProgressMeter*(void) { return (Abbrowse::IAbProgressMeter*)&__IAbProgressMeter; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 AbTreeArchiveImage = System::Int8(0x0);
static const System::Int8 AbTreeFolderImage = System::Int8(0x1);
static const System::Int8 AbTreeFolderExpandedImage = System::Int8(0x2);
#define AbDefVisibleColumns (System::Set<TAbViewColumn, TAbViewColumn::vcName, TAbViewColumn::vcPath>() << TAbViewColumn::vcName << TAbViewColumn::vcFileType << TAbViewColumn::vcLastModified << TAbViewColumn::vcSize << TAbViewColumn::vcRatio << TAbViewColumn::vcPacked << TAbViewColumn::vcCRC << TAbViewColumn::vcAttributes << TAbViewColumn::vcEncrypted << TAbViewColumn::vcMethod << TAbViewColumn::vcPath )
}	/* namespace Abcomctrls */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABCOMCTRLS)
using namespace Abcomctrls;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbcomctrlsHPP
