// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbCView.pas' rev: 29.00 (Windows)

#ifndef AbcviewHPP
#define AbcviewHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <AbView.hpp>
#include <AbCBrows.hpp>
#include <AbCabTyp.hpp>
#include <AbArcTyp.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abcview
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbCabView;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAbCabView : public Abview::TAbBaseViewer
{
	typedef Abview::TAbBaseViewer inherited;
	
protected:
	Abcbrows::TAbCustomCabBrowser* FCabComponent;
	Abarctyp::TAbArchiveList* FEmptyItemList;
	Abcabtyp::TAbCabItem* __fastcall GetItem(int RowNum);
	void __fastcall SetCabComponent(Abcbrows::TAbCustomCabBrowser* Value);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall DoChange(System::TObject* Sender);
	
public:
	__fastcall virtual TAbCabView(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAbCabView(void);
	__property Abcabtyp::TAbCabItem* Items[int RowNum] = {read=GetItem};
	
__published:
	__property Align = {default=0};
	__property Attributes;
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Colors;
	__property Ctl3D;
	__property Cursor = {default=0};
	__property Headings;
	__property DefaultColWidth = {default=64};
	__property DefaultRowHeight = {default=24};
	__property DisplayOptions;
	__property HeaderRowHeight;
	__property SortAttributes;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Version = {default=0};
	__property Abcbrows::TAbCustomCabBrowser* CabComponent = {read=FCabComponent, write=SetCabComponent};
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnSorted;
	__property OnDrawSortArrow;
public:
	/* TWinControl.CreateParented */ inline __fastcall TAbCabView(HWND ParentWindow) : Abview::TAbBaseViewer(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abcview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABCVIEW)
using namespace Abcview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbcviewHPP
