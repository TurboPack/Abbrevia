// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbBrowse.pas' rev: 29.00 (Windows)

#ifndef AbbrowseHPP
#define AbbrowseHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <AbBase.hpp>
#include <AbUtils.hpp>
#include <AbArcTyp.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abbrowse
{
//-- forward type declarations -----------------------------------------------
__interface IAbProgressMeter;
typedef System::DelphiInterface<IAbProgressMeter> _di_IAbProgressMeter;
class DELPHICLASS TAbBaseBrowser;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{4B766704-FD20-40BF-BA40-2EC2DD77B178}") IAbProgressMeter  : public System::IInterface 
{
	virtual void __fastcall DoProgress(System::Byte Progress) = 0 ;
	virtual void __fastcall Reset(void) = 0 ;
};

class PASCALIMPLEMENTATION TAbBaseBrowser : public Abbase::TAbBaseComponent
{
	typedef Abbase::TAbBaseComponent inherited;
	
public:
	Abarctyp::TAbArchiveItem* operator[](int Index) { return Items[Index]; }
	
public:
	Abarctyp::TAbArchive* FArchive;
	
protected:
	int FSpanningThreshold;
	_di_IAbProgressMeter FItemProgressMeter;
	_di_IAbProgressMeter FArchiveProgressMeter;
	System::UnicodeString FBaseDirectory;
	System::UnicodeString FFileName;
	System::UnicodeString FLogFile;
	bool FLogging;
	Abarctyp::TAbArchiveProgressEvent FOnArchiveProgress;
	Abarctyp::TAbArchiveItemProgressEvent FOnArchiveItemProgress;
	System::Classes::TNotifyEvent FOnChange;
	Abarctyp::TAbArchiveItemConfirmEvent FOnConfirmProcessItem;
	Abarctyp::TAbArchiveEvent FOnLoad;
	Abarctyp::TAbArchiveItemFailureEvent FOnProcessItemFailure;
	Abarctyp::TAbRequestImageEvent FOnRequestImage;
	System::UnicodeString FTempDirectory;
	Abutils::TAbArchiveType FArchiveType;
	bool FForceType;
	int __fastcall GetCount(void);
	Abarctyp::TAbArchiveItem* __fastcall GetItem(int Value);
	bool __fastcall GetSpanned(void);
	Abarctyp::TAbArchiveStatus __fastcall GetStatus(void);
	virtual void __fastcall ResetMeters(void);
	void __fastcall SetArchiveProgressMeter(const _di_IAbProgressMeter Value);
	void __fastcall SetCompressionType(const Abutils::TAbArchiveType Value);
	void __fastcall SetBaseDirectory(const System::UnicodeString Value);
	void __fastcall SetItemProgressMeter(const _di_IAbProgressMeter Value);
	void __fastcall SetSpanningThreshold(int Value);
	void __fastcall SetLogFile(const System::UnicodeString Value);
	void __fastcall SetLogging(bool Value);
	void __fastcall SetTempDirectory(const System::UnicodeString Value);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(System::Classes::TComponent* Component, System::Classes::TOperation Operation);
	virtual void __fastcall DoArchiveItemProgress(System::TObject* Sender, Abarctyp::TAbArchiveItem* Item, System::Byte Progress, bool &Abort);
	virtual void __fastcall DoArchiveProgress(System::TObject* Sender, System::Byte Progress, bool &Abort);
	virtual void __fastcall DoChange(void);
	virtual void __fastcall DoConfirmProcessItem(System::TObject* Sender, Abarctyp::TAbArchiveItem* Item, Abutils::TAbProcessType ProcessType, bool &Confirm);
	virtual void __fastcall DoLoad(System::TObject* Sender);
	virtual void __fastcall DoProcessItemFailure(System::TObject* Sender, Abarctyp::TAbArchiveItem* Item, Abutils::TAbProcessType ProcessType, Abutils::TAbErrorClass ErrorClass, int ErrorCode);
	virtual void __fastcall SetOnRequestImage(Abarctyp::TAbRequestImageEvent Value);
	virtual void __fastcall InitArchive(void);
	virtual void __fastcall SetFileName(const System::UnicodeString aFileName) = 0 ;
	__property Abarctyp::TAbArchive* Archive = {read=FArchive};
	__property _di_IAbProgressMeter ArchiveProgressMeter = {read=FArchiveProgressMeter, write=SetArchiveProgressMeter};
	__property System::UnicodeString BaseDirectory = {read=FBaseDirectory, write=SetBaseDirectory};
	__property System::UnicodeString FileName = {read=FFileName, write=SetFileName};
	__property int SpanningThreshold = {read=FSpanningThreshold, write=SetSpanningThreshold, default=0};
	__property _di_IAbProgressMeter ItemProgressMeter = {read=FItemProgressMeter, write=SetItemProgressMeter};
	__property System::UnicodeString LogFile = {read=FLogFile, write=SetLogFile};
	__property bool Logging = {read=FLogging, write=SetLogging, default=0};
	__property bool Spanned = {read=GetSpanned, nodefault};
	__property System::UnicodeString TempDirectory = {read=FTempDirectory, write=SetTempDirectory};
	__property Abarctyp::TAbArchiveProgressEvent OnArchiveProgress = {read=FOnArchiveProgress, write=FOnArchiveProgress};
	__property Abarctyp::TAbArchiveItemProgressEvent OnArchiveItemProgress = {read=FOnArchiveItemProgress, write=FOnArchiveItemProgress};
	__property Abarctyp::TAbArchiveItemConfirmEvent OnConfirmProcessItem = {read=FOnConfirmProcessItem, write=FOnConfirmProcessItem};
	__property Abarctyp::TAbArchiveItemFailureEvent OnProcessItemFailure = {read=FOnProcessItemFailure, write=FOnProcessItemFailure};
	__property Abarctyp::TAbRequestImageEvent OnRequestImage = {read=FOnRequestImage, write=SetOnRequestImage};
	
public:
	__fastcall virtual TAbBaseBrowser(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAbBaseBrowser(void);
	void __fastcall ClearTags(void);
	int __fastcall FindItem(Abarctyp::TAbArchiveItem* aItem);
	int __fastcall FindFile(const System::UnicodeString aFileName);
	void __fastcall TagItems(const System::UnicodeString FileMask);
	void __fastcall UnTagItems(const System::UnicodeString FileMask);
	void __fastcall CloseArchive(void);
	void __fastcall OpenArchive(const System::UnicodeString aFileName);
	__property int Count = {read=GetCount, nodefault};
	__property Abarctyp::TAbArchiveItem* Items[int Index] = {read=GetItem/*, default*/};
	__property Abarctyp::TAbArchiveStatus Status = {read=GetStatus, nodefault};
	__property Abutils::TAbArchiveType ArchiveType = {read=FArchiveType, write=SetCompressionType, default=0};
	__property bool ForceType = {read=FForceType, write=FForceType, default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property Abarctyp::TAbArchiveEvent OnLoad = {read=FOnLoad, write=FOnLoad};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Abutils::TAbArchiveType __fastcall AbDetermineArcType(const System::UnicodeString FN, Abutils::TAbArchiveType AssertType)/* overload */;
extern DELPHI_PACKAGE Abutils::TAbArchiveType __fastcall AbDetermineArcType(System::Classes::TStream* aStream)/* overload */;
}	/* namespace Abbrowse */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABBROWSE)
using namespace Abbrowse;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbbrowseHPP
