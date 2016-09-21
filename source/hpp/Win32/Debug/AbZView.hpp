// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbZView.pas' rev: 31.00 (Windows)

#ifndef AbzviewHPP
#define AbzviewHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Controls.hpp>
#include <AbView.hpp>
#include <AbZBrows.hpp>
#include <AbZipTyp.hpp>
#include <Vcl.Grids.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abzview
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbZipView;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TAbIncludeItemEvent)(System::TObject* Sender, Abziptyp::TAbZipItem* Item, bool &Include);

class PASCALIMPLEMENTATION TAbZipView : public Abview::TAbBaseViewer
{
	typedef Abview::TAbBaseViewer inherited;
	
protected:
	Abzbrows::TAbCustomZipBrowser* FZipComponent;
	TAbIncludeItemEvent FOnIncludeItem;
	Abziptyp::TAbZipItem* __fastcall GetItem(int RowNum);
	void __fastcall SetZipComponent(Abzbrows::TAbCustomZipBrowser* Value);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall DoChange(System::TObject* Sender);
	
public:
	__property Abziptyp::TAbZipItem* Items[int RowNum] = {read=GetItem};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Attributes;
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property BevelWidth = {default=1};
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Colors;
	__property Ctl3D;
	__property ParentCtl3D = {default=1};
	__property DragCursor = {default=-12};
	__property Cursor = {default=0};
	__property Headings;
	__property DefaultColWidth = {default=64};
	__property DefaultRowHeight = {default=24};
	__property DisplayOptions;
	__property HeaderRowHeight;
	__property SortAttributes;
	__property DragMode = {default=0};
	__property DrawingStyle = {default=1};
	__property Enabled = {default=1};
	__property Font;
	__property GradientEndColor;
	__property GradientStartColor = {default=16777215};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Version = {default=0};
	__property Abzbrows::TAbCustomZipBrowser* ZipComponent = {read=FZipComponent, write=SetZipComponent};
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnSorted;
	__property OnDrawSortArrow;
	__property TAbIncludeItemEvent OnIncludeItem = {read=FOnIncludeItem, write=FOnIncludeItem};
public:
	/* TAbBaseViewer.Create */ inline __fastcall virtual TAbZipView(System::Classes::TComponent* AOwner) : Abview::TAbBaseViewer(AOwner) { }
	/* TAbBaseViewer.Destroy */ inline __fastcall virtual ~TAbZipView(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAbZipView(HWND ParentWindow) : Abview::TAbBaseViewer(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abzview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABZVIEW)
using namespace Abzview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbzviewHPP
