// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbZipOut.pas' rev: 30.00 (Windows)

#ifndef AbzipoutHPP
#define AbzipoutHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <AbArcTyp.hpp>
#include <AbBrowse.hpp>
#include <AbUtils.hpp>
#include <AbZipTyp.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abzipout
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TTreeNodeFriend;
class DELPHICLASS TAbZipDisplayOutline;
class DELPHICLASS TAbCustomZipOutline;
class DELPHICLASS TAbZipOutline;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAbZipAttribute : unsigned char { zaCompressedSize, zaCompressionMethod, zaCompressionRatio, zaCRC, zaExternalFileAttributes, zaInternalFileAttributes, zaEncryption, zaTimeStamp, zaUncompressedSize, zaVersionMade, zaVersionNeeded, zaComment };

typedef System::Set<TAbZipAttribute, TAbZipAttribute::zaCompressedSize, TAbZipAttribute::zaComment> TAbZipAttributes;

class PASCALIMPLEMENTATION TTreeNodeFriend : public Vcl::Comctrls::TTreeNode
{
	typedef Vcl::Comctrls::TTreeNode inherited;
	
public:
	/* TTreeNode.Create */ inline __fastcall virtual TTreeNodeFriend(Vcl::Comctrls::TTreeNodes* AOwner) : Vcl::Comctrls::TTreeNode(AOwner) { }
	/* TTreeNode.Destroy */ inline __fastcall virtual ~TTreeNodeFriend(void) { }
	
};


typedef void __fastcall (__closure *TWindowsDropEvent)(System::TObject* Sender, System::UnicodeString FileName);

class PASCALIMPLEMENTATION TAbZipDisplayOutline : public Vcl::Comctrls::TTreeView
{
	typedef Vcl::Comctrls::TTreeView inherited;
	
private:
	Vcl::Graphics::TBitmap* FDirBitMap;
	Vcl::Graphics::TBitmap* FFileBitMap;
	Vcl::Graphics::TBitmap* FAttrBitMap;
	Vcl::Graphics::TBitmap* FDirBitMapSelected;
	Vcl::Graphics::TBitmap* FFileBitMapSelected;
	Vcl::Graphics::TBitmap* FAttrBitMapSelected;
	Vcl::Controls::TImageList* FImageList;
	int FFileIndex;
	int FFileSelectedIndex;
	int FDirectoryIndex;
	int FDirSelectedIndex;
	int FAttrIndex;
	int FBitMapHeight;
	int FBitMapWidth;
	int FAttrSelectedIndex;
	TWindowsDropEvent FOnWindowsDrop;
	MESSAGE void __fastcall WMDropFiles(Winapi::Messages::TWMDropFiles &Msg);
	void __fastcall IndexBitmaps(void);
	void __fastcall SetDirectoryBitMap(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetFileBitMap(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetAttributeBitMap(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetDirectoryBitMapSelected(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetFileBitMapSelected(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetAttributeBitMapSelected(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetBitMapHeight(int Value);
	void __fastcall SetBitMapWidth(int Value);
	
protected:
	virtual void __fastcall DoOnWindowsDrop(System::UnicodeString FileName);
	DYNAMIC bool __fastcall DoMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, System::Types::TPoint MousePos);
	virtual void __fastcall Loaded(void);
	void __fastcall SetOnWindowsDrop(TWindowsDropEvent Value);
	
public:
	__fastcall virtual TAbZipDisplayOutline(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAbZipDisplayOutline(void);
	__property Vcl::Graphics::TBitmap* zdPictureDirectory = {read=FDirBitMap, write=SetDirectoryBitMap};
	__property Vcl::Graphics::TBitmap* zdPictureFile = {read=FFileBitMap, write=SetFileBitMap};
	__property Vcl::Graphics::TBitmap* zdPictureZipAttribute = {read=FAttrBitMap, write=SetAttributeBitMap};
	__property Vcl::Graphics::TBitmap* zdPictureDirectorySelected = {read=FDirBitMapSelected, write=SetDirectoryBitMapSelected};
	__property Vcl::Graphics::TBitmap* zdPictureFileSelected = {read=FFileBitMapSelected, write=SetFileBitMapSelected};
	__property Vcl::Graphics::TBitmap* zdPictureZipAttributeSelected = {read=FAttrBitMapSelected, write=SetAttributeBitMapSelected};
	__property int BitMapHeight = {read=FBitMapHeight, write=SetBitMapHeight, nodefault};
	__property int BitMapWidth = {read=FBitMapWidth, write=SetBitMapWidth, nodefault};
	__property TWindowsDropEvent OnWindowsDrop = {read=FOnWindowsDrop, write=SetOnWindowsDrop};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAbZipDisplayOutline(HWND ParentWindow) : Vcl::Comctrls::TTreeView(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAbCustomZipOutline : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
public:
	Abziptyp::TAbZipItem* operator[](int Index) { return Items[Index]; }
	
protected:
	Abziptyp::TAbZipArchive* FArchive;
	Abbrowse::_di_IAbProgressMeter FItemProgressMeter;
	Abbrowse::_di_IAbProgressMeter FArchiveProgressMeter;
	TAbZipAttributes FAttributes;
	bool FAutoSave;
	System::UnicodeString FBaseDirectory;
	Abziptyp::TAbZipSupportedMethod FCompressionMethodToUse;
	Abziptyp::TAbZipDeflationOption FDeflationOption;
	bool FDOSMode;
	System::UnicodeString FFileName;
	Abarctyp::TAbExtractOptions FExtractOptions;
	bool FHierarchy;
	System::UnicodeString FLogFile;
	bool FLogging;
	int FSpanningThreshold;
	TAbZipDisplayOutline* FOutline;
	System::UnicodeString FPassword;
	System::Byte FPasswordRetries;
	Abarctyp::TAbStoreOptions FStoreOptions;
	System::UnicodeString FTempDirectory;
	Abarctyp::TAbArchiveItemFailureEvent FOnProcessItemFailure;
	Abarctyp::TAbArchiveItemProgressEvent FOnArchiveItemProgress;
	Abarctyp::TAbArchiveProgressEvent FOnArchiveProgress;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnClick;
	Vcl::Comctrls::TTVExpandedEvent FOnCollapse;
	Abarctyp::TAbConfirmOverwriteEvent FOnConfirmOverwrite;
	Abarctyp::TAbArchiveItemConfirmEvent FOnConfirmProcessItem;
	Abarctyp::TAbArchiveConfirmEvent FOnConfirmSave;
	System::Classes::TNotifyEvent FOnDblClick;
	Vcl::Controls::TDragDropEvent FOnDragDrop;
	Vcl::Controls::TDragOverEvent FOnDragOver;
	Vcl::Controls::TEndDragEvent FOnEndDrag;
	System::Classes::TNotifyEvent FOnEnter;
	System::Classes::TNotifyEvent FOnExit;
	Vcl::Comctrls::TTVExpandedEvent FOnExpand;
	Vcl::Controls::TKeyEvent FOnKeyDown;
	Vcl::Controls::TKeyPressEvent FOnKeyPress;
	Vcl::Controls::TKeyEvent FOnKeyUp;
	Abarctyp::TAbArchiveEvent FOnLoad;
	Vcl::Controls::TMouseEvent FOnMouseDown;
	Vcl::Controls::TMouseMoveEvent FOnMouseMove;
	Vcl::Controls::TMouseEvent FOnMouseUp;
	Abziptyp::TAbNeedPasswordEvent FOnNeedPassword;
	Abarctyp::TAbRequestImageEvent FOnRequestImage;
	Abarctyp::TAbRequestDiskEvent FOnRequestLastDisk;
	Abarctyp::TAbRequestNthDiskEvent FOnRequestNthDisk;
	Abarctyp::TAbRequestDiskEvent FOnRequestBlankDisk;
	Abarctyp::TAbArchiveEvent FOnSave;
	Vcl::Controls::TStartDragEvent FOnStartDrag;
	TWindowsDropEvent FOnWindowsDrop;
	void __fastcall AddAttributeNodes(Abziptyp::TAbZipItem* Item, Vcl::Comctrls::TTreeNode* oNode);
	virtual void __fastcall DoProcessItemFailure(System::TObject* Sender, Abarctyp::TAbArchiveItem* Item, Abutils::TAbProcessType ProcessType, Abutils::TAbErrorClass ErrorClass, int ErrorCode);
	virtual void __fastcall DoArchiveItemProgress(System::TObject* Sender, Abarctyp::TAbArchiveItem* Item, System::Byte Progress, bool &Abort);
	virtual void __fastcall DoArchiveProgress(System::TObject* Sender, System::Byte Progress, bool &Abort);
	virtual void __fastcall DoChange(void);
	virtual void __fastcall DoClick(System::TObject* Sender);
	virtual void __fastcall DoCollapse(System::TObject* Sender, Vcl::Comctrls::TTreeNode* Node);
	virtual void __fastcall DoConfirmProcessItem(System::TObject* Sender, Abarctyp::TAbArchiveItem* Item, Abutils::TAbProcessType ProcessType, bool &Confirm);
	virtual void __fastcall DoConfirmOverwrite(System::UnicodeString &Name, bool &Confirm);
	virtual void __fastcall DoConfirmSave(System::TObject* Sender, bool &Confirm);
	virtual void __fastcall DoDblClick(System::TObject* Sender);
	virtual void __fastcall DoDragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	virtual void __fastcall DoDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual void __fastcall DoOnEndDrag(System::TObject* Sender, System::TObject* Target, int X, int Y);
	virtual void __fastcall DoOnEnter(System::TObject* Sender);
	virtual void __fastcall DoOnExit(System::TObject* Sender);
	virtual void __fastcall DoExpand(System::TObject* Sender, Vcl::Comctrls::TTreeNode* Node);
	HIDESBASE virtual void __fastcall DoKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	HIDESBASE virtual void __fastcall DoKeyPress(System::TObject* Sender, System::WideChar &Key);
	HIDESBASE virtual void __fastcall DoKeyUp(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DoLoad(System::TObject* Sender);
	HIDESBASE virtual void __fastcall DoMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);
	HIDESBASE virtual void __fastcall DoMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoNeedPassword(System::TObject* Sender, System::UnicodeString &NewPassword);
	virtual void __fastcall DoSave(System::TObject* Sender);
	virtual void __fastcall DoOnStartDrag(System::TObject* Sender, Vcl::Controls::TDragObject* &DragObject);
	virtual void __fastcall DoWindowsDrop(System::TObject* Sender, System::UnicodeString FileName);
	Vcl::Forms::TBorderStyle __fastcall GetBorderStyle(void);
	int __fastcall GetCount(void);
	System::Uitypes::TCursor __fastcall GetCursor(void);
	System::Uitypes::TCursor __fastcall GetDragCursor(void);
	HIDESBASE System::Uitypes::TDragMode __fastcall GetDragMode(void);
	Abziptyp::TAbZipItem* __fastcall GetItem(int Index);
	Vcl::Graphics::TBitmap* __fastcall GetPictureDirectory(void);
	Vcl::Graphics::TBitmap* __fastcall GetPictureFile(void);
	Vcl::Graphics::TBitmap* __fastcall GetPictureZipAttribute(void);
	Vcl::Graphics::TBitmap* __fastcall GetPictureDirectorySelected(void);
	Vcl::Graphics::TBitmap* __fastcall GetPictureFileSelected(void);
	Vcl::Graphics::TBitmap* __fastcall GetPictureZipAttributeSelected(void);
	int __fastcall GetPictureHeight(void);
	int __fastcall GetPictureWidth(void);
	int __fastcall GetSelectedItem(void);
	Abziptyp::TAbZipItem* __fastcall GetSelectedZipItem(void);
	Abarctyp::TAbArchiveStatus __fastcall GetStatus(void);
	System::UnicodeString __fastcall GetVersion(void);
	System::UnicodeString __fastcall GetZipfileComment(void);
	void __fastcall InitArchive(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(System::Classes::TComponent* Component, System::Classes::TOperation Operation);
	void __fastcall PutItem(int Index, Abziptyp::TAbZipItem* Value);
	void __fastcall SetArchiveProgressMeter(const Abbrowse::_di_IAbProgressMeter Value);
	void __fastcall SetAttributes(TAbZipAttributes Value);
	void __fastcall SetAutoSave(bool Value);
	void __fastcall SetBaseDirectory(System::UnicodeString Value);
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetCompressionMethodToUse(Abziptyp::TAbZipSupportedMethod Value);
	void __fastcall SetDeflationOption(Abziptyp::TAbZipDeflationOption Value);
	void __fastcall SetDOSMode(bool Value);
	HIDESBASE void __fastcall SetCursor(System::Uitypes::TCursor Value);
	void __fastcall SetDragCursor(System::Uitypes::TCursor Value);
	virtual void __fastcall SetDragMode(System::Uitypes::TDragMode Value);
	void __fastcall SetExtractOptions(Abarctyp::TAbExtractOptions Value);
	virtual void __fastcall SetFileName(const System::UnicodeString aFileName);
	void __fastcall SetHierarchy(bool Value);
	void __fastcall SetItemProgressMeter(const Abbrowse::_di_IAbProgressMeter Value);
	void __fastcall SetLogFile(System::UnicodeString Value);
	void __fastcall SetLogging(bool Value);
	void __fastcall SetOnRequestImage(Abarctyp::TAbRequestImageEvent Value);
	void __fastcall SetOnRequestLastDisk(Abarctyp::TAbRequestDiskEvent Value);
	void __fastcall SetOnRequestNthDisk(Abarctyp::TAbRequestNthDiskEvent Value);
	void __fastcall SetOnRequestBlankDisk(Abarctyp::TAbRequestDiskEvent Value);
	void __fastcall SetOnWindowsDrop(TWindowsDropEvent Value);
	void __fastcall SetPassword(System::UnicodeString Value);
	void __fastcall SetPasswordRetries(System::Byte Value);
	void __fastcall SetPictureDirectory(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetPictureFile(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetPictureZipAttribute(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetPictureDirectorySelected(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetPictureFileSelected(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetPictureZipAttributeSelected(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetPictureHeight(int Value);
	void __fastcall SetPictureWidth(int Value);
	void __fastcall SetSelectedItem(int Value);
	void __fastcall SetStoreOptions(Abarctyp::TAbStoreOptions Value);
	void __fastcall SetTempDirectory(System::UnicodeString Value);
	void __fastcall SetSpanningThreshold(int Value);
	void __fastcall SetVersion(System::UnicodeString Value);
	void __fastcall SetZipfileComment(System::UnicodeString Value);
	void __fastcall TestItemProc(System::TObject* Sender, Abarctyp::TAbArchiveItem* Item);
	void __fastcall UnzipProc(System::TObject* Sender, Abarctyp::TAbArchiveItem* Item, const System::UnicodeString NewName);
	void __fastcall UnzipToStreamProc(System::TObject* Sender, Abarctyp::TAbArchiveItem* Item, System::Classes::TStream* OutStream);
	void __fastcall UpdateOutline(void);
	void __fastcall ZipProc(System::TObject* Sender, Abarctyp::TAbArchiveItem* Item, System::Classes::TStream* OutStream);
	void __fastcall ZipFromStreamProc(System::TObject* Sender, Abarctyp::TAbArchiveItem* Item, System::Classes::TStream* OutStream, System::Classes::TStream* InStream);
	__property Abbrowse::_di_IAbProgressMeter ArchiveProgressMeter = {read=FArchiveProgressMeter, write=SetArchiveProgressMeter};
	__property TAbZipAttributes Attributes = {read=FAttributes, write=SetAttributes, default=479};
	__property bool AutoSave = {read=FAutoSave, write=SetAutoSave, default=0};
	__property System::UnicodeString BaseDirectory = {read=FBaseDirectory, write=SetBaseDirectory};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=GetBorderStyle, write=SetBorderStyle, nodefault};
	__property Abziptyp::TAbZipSupportedMethod CompressionMethodToUse = {read=FCompressionMethodToUse, write=SetCompressionMethodToUse, default=2};
	__property System::Uitypes::TCursor Cursor = {read=GetCursor, write=SetCursor, nodefault};
	__property Abziptyp::TAbZipDeflationOption DeflationOption = {read=FDeflationOption, write=SetDeflationOption, default=1};
	__property bool DOSMode = {read=FDOSMode, write=SetDOSMode, nodefault};
	__property System::Uitypes::TCursor DragCursor = {read=GetDragCursor, write=SetDragCursor, nodefault};
	__property System::Uitypes::TDragMode DragMode = {read=GetDragMode, write=SetDragMode, nodefault};
	__property Abarctyp::TAbExtractOptions ExtractOptions = {read=FExtractOptions, write=SetExtractOptions, default=1};
	__property System::UnicodeString FileName = {read=FFileName, write=SetFileName};
	__property bool Hierarchy = {read=FHierarchy, write=SetHierarchy, default=1};
	__property int SpanningThreshold = {read=FSpanningThreshold, write=SetSpanningThreshold, default=0};
	__property Abbrowse::_di_IAbProgressMeter ItemProgressMeter = {read=FItemProgressMeter, write=SetItemProgressMeter};
	__property System::UnicodeString LogFile = {read=FLogFile, write=SetLogFile};
	__property bool Logging = {read=FLogging, write=SetLogging, nodefault};
	__property TWindowsDropEvent OnWindowsDrop = {read=FOnWindowsDrop, write=SetOnWindowsDrop};
	__property System::UnicodeString Password = {read=FPassword, write=SetPassword};
	__property System::Byte PasswordRetries = {read=FPasswordRetries, write=SetPasswordRetries, default=3};
	__property Vcl::Graphics::TBitmap* PictureDirectory = {read=GetPictureDirectory, write=SetPictureDirectory};
	__property Vcl::Graphics::TBitmap* PictureFile = {read=GetPictureFile, write=SetPictureFile};
	__property Vcl::Graphics::TBitmap* PictureZipAttribute = {read=GetPictureZipAttribute, write=SetPictureZipAttribute};
	__property Vcl::Graphics::TBitmap* PictureDirectorySelected = {read=GetPictureDirectorySelected, write=SetPictureDirectorySelected};
	__property Vcl::Graphics::TBitmap* PictureFileSelected = {read=GetPictureFileSelected, write=SetPictureFileSelected};
	__property Vcl::Graphics::TBitmap* PictureZipAttributeSelected = {read=GetPictureZipAttributeSelected, write=SetPictureZipAttributeSelected};
	__property int PictureHeight = {read=GetPictureHeight, write=SetPictureHeight, nodefault};
	__property int PictureWidth = {read=GetPictureWidth, write=SetPictureWidth, nodefault};
	__property Abarctyp::TAbStoreOptions StoreOptions = {read=FStoreOptions, write=SetStoreOptions, default=5};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion, stored=false};
	__property Abarctyp::TAbArchiveItemFailureEvent OnProcessItemFailure = {read=FOnProcessItemFailure, write=FOnProcessItemFailure};
	__property Abarctyp::TAbArchiveItemProgressEvent OnArchiveItemProgress = {read=FOnArchiveItemProgress, write=FOnArchiveItemProgress};
	__property Abarctyp::TAbArchiveProgressEvent OnArchiveProgress = {read=FOnArchiveProgress, write=FOnArchiveProgress};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property Abarctyp::TAbArchiveItemConfirmEvent OnConfirmProcessItem = {read=FOnConfirmProcessItem, write=FOnConfirmProcessItem};
	__property Abarctyp::TAbConfirmOverwriteEvent OnConfirmOverwrite = {read=FOnConfirmOverwrite, write=FOnConfirmOverwrite};
	__property Abarctyp::TAbArchiveConfirmEvent OnConfirmSave = {read=FOnConfirmSave, write=FOnConfirmSave};
	__property Vcl::Comctrls::TTVExpandedEvent OnCollapse = {read=FOnCollapse, write=FOnCollapse};
	__property System::Classes::TNotifyEvent OnDblClick = {read=FOnDblClick, write=FOnDblClick};
	__property Vcl::Controls::TDragDropEvent OnDragDrop = {read=FOnDragDrop, write=FOnDragDrop};
	__property Vcl::Controls::TDragOverEvent OnDragOver = {read=FOnDragOver, write=FOnDragOver};
	__property Vcl::Controls::TEndDragEvent OnEndDrag = {read=FOnEndDrag, write=FOnEndDrag};
	__property System::Classes::TNotifyEvent OnEnter = {read=FOnEnter, write=FOnEnter};
	__property System::Classes::TNotifyEvent OnExit = {read=FOnExit, write=FOnExit};
	__property Vcl::Comctrls::TTVExpandedEvent OnExpand = {read=FOnExpand, write=FOnExpand};
	__property Vcl::Controls::TKeyEvent OnKeyDown = {read=FOnKeyDown, write=FOnKeyDown};
	__property Vcl::Controls::TKeyPressEvent OnKeyPress = {read=FOnKeyPress, write=FOnKeyPress};
	__property Vcl::Controls::TKeyEvent OnKeyUp = {read=FOnKeyUp, write=FOnKeyUp};
	__property Abarctyp::TAbArchiveEvent OnLoad = {read=FOnLoad, write=FOnLoad};
	__property Vcl::Controls::TMouseEvent OnMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property Vcl::Controls::TMouseMoveEvent OnMouseMove = {read=FOnMouseMove, write=FOnMouseMove};
	__property Vcl::Controls::TMouseEvent OnMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
	__property Abziptyp::TAbNeedPasswordEvent OnNeedPassword = {read=FOnNeedPassword, write=FOnNeedPassword};
	__property Abarctyp::TAbRequestImageEvent OnRequestImage = {read=FOnRequestImage, write=SetOnRequestImage};
	__property Abarctyp::TAbRequestDiskEvent OnRequestLastDisk = {read=FOnRequestLastDisk, write=SetOnRequestLastDisk};
	__property Abarctyp::TAbRequestNthDiskEvent OnRequestNthDisk = {read=FOnRequestNthDisk, write=SetOnRequestNthDisk};
	__property Abarctyp::TAbRequestDiskEvent OnRequestBlankDisk = {read=FOnRequestBlankDisk, write=SetOnRequestBlankDisk};
	__property Abarctyp::TAbArchiveEvent OnSave = {read=FOnSave, write=FOnSave};
	__property Vcl::Controls::TStartDragEvent OnStartDrag = {read=FOnStartDrag, write=FOnStartDrag};
	
public:
	__fastcall virtual TAbCustomZipOutline(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAbCustomZipOutline(void);
	void __fastcall AddFiles(const System::UnicodeString FileMask, int SearchAttr);
	void __fastcall AddFilesEx(const System::UnicodeString FileMask, const System::UnicodeString ExclusionMask, int SearchAttr);
	void __fastcall AddFromStream(const System::UnicodeString NewName, System::Classes::TStream* FromStream);
	void __fastcall ClearTags(void);
	void __fastcall CloseArchive(void);
	void __fastcall DeleteAt(int Index);
	void __fastcall DeleteFiles(const System::UnicodeString FileMask);
	void __fastcall DeleteFilesEx(const System::UnicodeString FileMask, const System::UnicodeString ExclusionMask);
	void __fastcall DeleteTaggedItems(void);
	void __fastcall ExtractAt(int Index, const System::UnicodeString NewName);
	void __fastcall ExtractFiles(const System::UnicodeString FileMask);
	void __fastcall ExtractFilesEx(const System::UnicodeString FileMask, const System::UnicodeString ExclusionMask);
	void __fastcall ExtractTaggedItems(void);
	void __fastcall ExtractToStream(const System::UnicodeString aFileName, System::Classes::TStream* ToStream);
	int __fastcall FindItem(Abarctyp::TAbArchiveItem* aItem);
	int __fastcall FindFile(const System::UnicodeString aFileName);
	void __fastcall FreshenFiles(const System::UnicodeString FileMask);
	void __fastcall FreshenFilesEx(const System::UnicodeString FileMask, const System::UnicodeString ExclusionMask);
	void __fastcall FreshenTaggedItems(void);
	void __fastcall FullCollapse(void);
	void __fastcall FullExpand(void);
	int __fastcall GetTextItem(const System::UnicodeString Value);
	int __fastcall GetOutLineItem(int X, int Y);
	void __fastcall Move(Abarctyp::TAbArchiveItem* aItem, System::UnicodeString NewStoredPath);
	void __fastcall OpenArchive(const System::UnicodeString aFileName);
	void __fastcall Replace(Abarctyp::TAbArchiveItem* aItem);
	void __fastcall Save(void);
	void __fastcall TagItems(const System::UnicodeString FileMask);
	void __fastcall TestTaggedItems(void);
	void __fastcall UnTagItems(const System::UnicodeString FileMask);
	__property int Count = {read=GetCount, nodefault};
	__property Abziptyp::TAbZipItem* Items[int Index] = {read=GetItem, write=PutItem/*, default*/};
	__property int SelectedItem = {read=GetSelectedItem, write=SetSelectedItem, nodefault};
	__property Abziptyp::TAbZipItem* SelectedZipItem = {read=GetSelectedZipItem};
	__property Abarctyp::TAbArchiveStatus Status = {read=GetStatus, nodefault};
	__property System::UnicodeString TempDirectory = {read=FTempDirectory, write=SetTempDirectory};
	__property System::UnicodeString ZipfileComment = {read=GetZipfileComment, write=SetZipfileComment};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAbCustomZipOutline(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAbZipOutline : public TAbCustomZipOutline
{
	typedef TAbCustomZipOutline inherited;
	
__published:
	__property Align = {default=0};
	__property ArchiveProgressMeter;
	__property ItemProgressMeter;
	__property Attributes = {default=479};
	__property AutoSave = {default=0};
	__property BaseDirectory = {default=0};
	__property BorderStyle;
	__property Color = {default=-16777211};
	__property CompressionMethodToUse = {default=2};
	__property Count;
	__property Ctl3D;
	__property Cursor;
	__property DeflationOption = {default=1};
	__property DOSMode;
	__property DragCursor;
	__property DragMode;
	__property Enabled = {default=1};
	__property ExtractOptions = {default=1};
	__property Font;
	__property Hierarchy = {default=1};
	__property LogFile = {default=0};
	__property Logging;
	__property OnProcessItemFailure;
	__property OnArchiveItemProgress;
	__property OnArchiveProgress;
	__property OnChange;
	__property OnClick;
	__property OnConfirmProcessItem;
	__property OnConfirmOverwrite;
	__property OnConfirmSave;
	__property OnCollapse;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnExpand;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnLoad;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnNeedPassword;
	__property OnRequestImage;
	__property OnRequestLastDisk;
	__property OnRequestNthDisk;
	__property OnRequestBlankDisk;
	__property OnSave;
	__property OnStartDrag;
	__property OnWindowsDrop;
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property Password = {default=0};
	__property PasswordRetries = {default=3};
	__property PictureDirectory;
	__property PictureDirectorySelected;
	__property PictureFile;
	__property PictureFileSelected;
	__property PictureZipAttribute;
	__property PictureZipAttributeSelected;
	__property PopupMenu;
	__property ShowHint;
	__property StoreOptions = {default=5};
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property SpanningThreshold = {default=0};
	__property Version = {default=0};
	__property TempDirectory = {default=0};
	__property Visible = {default=1};
	__property FileName = {default=0};
public:
	/* TAbCustomZipOutline.Create */ inline __fastcall virtual TAbZipOutline(System::Classes::TComponent* AOwner) : TAbCustomZipOutline(AOwner) { }
	/* TAbCustomZipOutline.Destroy */ inline __fastcall virtual ~TAbZipOutline(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAbZipOutline(HWND ParentWindow) : TAbCustomZipOutline(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 cBitmapHeight = System::Int8(0x10);
static const System::Int8 cBitmapWidth = System::Int8(0x10);
#define AbDefZipAttributes (System::Set<TAbZipAttribute, TAbZipAttribute::zaCompressedSize, TAbZipAttribute::zaComment>() << TAbZipAttribute::zaCompressedSize << TAbZipAttribute::zaCompressionMethod << TAbZipAttribute::zaCompressionRatio << TAbZipAttribute::zaCRC << TAbZipAttribute::zaExternalFileAttributes << TAbZipAttribute::zaEncryption << TAbZipAttribute::zaTimeStamp << TAbZipAttribute::zaUncompressedSize )
static const int AbDefColor = int(-16777211);
static const bool AbDefHierarchy = true;
static const bool AbDefParentColor = false;
}	/* namespace Abzipout */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABZIPOUT)
using namespace Abzipout;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbzipoutHPP
