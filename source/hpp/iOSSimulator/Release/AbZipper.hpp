// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbZipper.pas' rev: 32.00 (iOSSIM)

#ifndef AbzipperHPP
#define AbzipperHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <AbBrowse.hpp>
#include <AbZBrows.hpp>
#include <AbArcTyp.hpp>
#include <AbZipTyp.hpp>
#include <AbBase.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abzipper
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbCustomZipper;
class DELPHICLASS TAbZipper;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAbCustomZipper : public Abzbrows::TAbCustomZipBrowser
{
	typedef Abzbrows::TAbCustomZipBrowser inherited;
	
protected:
	bool FAutoSave;
	Abziptyp::TAbZipSupportedMethod FCompressionMethodToUse;
	Abziptyp::TAbZipDeflationOption FDeflationOption;
	bool FDOSMode;
	Abarctyp::TAbArchiveConfirmEvent FOnConfirmSave;
	Abarctyp::TAbArchiveEvent FOnSave;
	Abarctyp::TAbArchiveProgressEvent FOnArchiveSaveProgress;
	Abbrowse::_di_IAbProgressMeter FArchiveSaveProgressMeter;
	Abarctyp::TAbStoreOptions FStoreOptions;
	virtual void __fastcall DoConfirmSave(System::TObject* Sender, bool &Confirm);
	virtual void __fastcall DoSave(System::TObject* Sender);
	void __fastcall DoArchiveSaveProgress(System::TObject* Sender, System::Byte Progress, bool &Abort);
	virtual void __fastcall InitArchive(void);
	void __fastcall SetAutoSave(bool Value);
	void __fastcall SetCompressionMethodToUse(Abziptyp::TAbZipSupportedMethod Value);
	void __fastcall SetDeflationOption(Abziptyp::TAbZipDeflationOption Value);
	void __fastcall SetDOSMode(bool Value);
	virtual void __fastcall SetFileName(const System::UnicodeString aFileName);
	void __fastcall SetStoreOptions(Abarctyp::TAbStoreOptions Value);
	void __fastcall SetArchiveSaveProgressMeter(const Abbrowse::_di_IAbProgressMeter Value);
	virtual void __fastcall SetZipfileComment(const System::UnicodeString Value);
	void __fastcall ZipProc(System::TObject* Sender, Abarctyp::TAbArchiveItem* Item, System::Classes::TStream* OutStream);
	void __fastcall ZipFromStreamProc(System::TObject* Sender, Abarctyp::TAbArchiveItem* Item, System::Classes::TStream* OutStream, System::Classes::TStream* InStream);
	virtual void __fastcall Notification(System::Classes::TComponent* Component, System::Classes::TOperation Operation);
	virtual void __fastcall ResetMeters(void);
	__property bool AutoSave = {read=FAutoSave, write=SetAutoSave, nodefault};
	__property Abziptyp::TAbZipSupportedMethod CompressionMethodToUse = {read=FCompressionMethodToUse, write=SetCompressionMethodToUse, default=2};
	__property Abziptyp::TAbZipDeflationOption DeflationOption = {read=FDeflationOption, write=SetDeflationOption, default=1};
	__property bool DOSMode = {read=FDOSMode, write=SetDOSMode, nodefault};
	__property Abarctyp::TAbStoreOptions StoreOptions = {read=FStoreOptions, write=SetStoreOptions, default=5};
	__property Abbrowse::_di_IAbProgressMeter ArchiveSaveProgressMeter = {read=FArchiveSaveProgressMeter, write=SetArchiveSaveProgressMeter};
	__property Abarctyp::TAbArchiveConfirmEvent OnConfirmSave = {read=FOnConfirmSave, write=FOnConfirmSave};
	__property Abarctyp::TAbArchiveEvent OnSave = {read=FOnSave, write=FOnSave};
	__property Abarctyp::TAbArchiveProgressEvent OnArchiveSaveProgress = {read=FOnArchiveSaveProgress, write=FOnArchiveSaveProgress};
	
public:
	__fastcall virtual TAbCustomZipper(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAbCustomZipper(void);
	void __fastcall AddFiles(const System::UnicodeString FileMask, int SearchAttr);
	void __fastcall AddFilesEx(const System::UnicodeString FileMask, const System::UnicodeString ExclusionMask, int SearchAttr);
	void __fastcall AddFromStream(const System::UnicodeString NewName, System::Classes::TStream* FromStream);
	void __fastcall DeleteAt(int Index);
	void __fastcall DeleteFiles(const System::UnicodeString FileMask);
	void __fastcall DeleteFilesEx(const System::UnicodeString FileMask, const System::UnicodeString ExclusionMask);
	void __fastcall DeleteTaggedItems(void);
	void __fastcall FreshenFiles(const System::UnicodeString FileMask);
	void __fastcall FreshenFilesEx(const System::UnicodeString FileMask, const System::UnicodeString ExclusionMask);
	void __fastcall FreshenTaggedItems(void);
	void __fastcall Move(Abarctyp::TAbArchiveItem* aItem, const System::UnicodeString NewStoredPath);
	void __fastcall Save(void);
	void __fastcall Replace(Abarctyp::TAbArchiveItem* aItem);
};


class PASCALIMPLEMENTATION TAbZipper : public TAbCustomZipper
{
	typedef TAbCustomZipper inherited;
	
__published:
	__property ArchiveProgressMeter;
	__property ArchiveSaveProgressMeter;
	__property ItemProgressMeter;
	__property AutoSave;
	__property BaseDirectory = {default=0};
	__property CompressionMethodToUse = {default=2};
	__property DeflationOption = {default=1};
	__property DOSMode;
	__property SpanningThreshold = {default=0};
	__property LogFile = {default=0};
	__property Logging = {default=0};
	__property OnArchiveProgress;
	__property OnArchiveSaveProgress;
	__property OnArchiveItemProgress;
	__property OnChange;
	__property OnConfirmProcessItem;
	__property OnConfirmSave;
	__property OnLoad;
	__property OnProcessItemFailure;
	__property OnRequestBlankDisk;
	__property OnRequestImage;
	__property OnRequestLastDisk;
	__property OnRequestNthDisk;
	__property OnSave;
	__property Password = {default=0};
	__property StoreOptions = {default=5};
	__property TempDirectory = {default=0};
	__property Version = {default=0};
	__property FileName = {default=0};
public:
	/* TAbCustomZipper.Create */ inline __fastcall virtual TAbZipper(System::Classes::TComponent* AOwner) : TAbCustomZipper(AOwner) { }
	/* TAbCustomZipper.Destroy */ inline __fastcall virtual ~TAbZipper(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abzipper */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABZIPPER)
using namespace Abzipper;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbzipperHPP
