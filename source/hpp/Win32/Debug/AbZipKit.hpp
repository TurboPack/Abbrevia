// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbZipKit.pas' rev: 30.00 (Windows)

#ifndef AbzipkitHPP
#define AbzipkitHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <AbZipper.hpp>
#include <AbArcTyp.hpp>
#include <AbZipTyp.hpp>
#include <AbZBrows.hpp>
#include <AbBrowse.hpp>
#include <AbBase.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abzipkit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbCustomZipKit;
class DELPHICLASS TAbZipKit;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAbCustomZipKit : public Abzipper::TAbCustomZipper
{
	typedef Abzipper::TAbCustomZipper inherited;
	
protected:
	Abarctyp::TAbExtractOptions FExtractOptions;
	Abarctyp::TAbConfirmOverwriteEvent FOnConfirmOverwrite;
	Abziptyp::TAbNeedPasswordEvent FOnNeedPassword;
	System::Byte FPasswordRetries;
	virtual void __fastcall DoConfirmOverwrite(System::UnicodeString &Name, bool &Confirm);
	virtual void __fastcall DoNeedPassword(System::TObject* Sender, System::UnicodeString &NewPassword);
	virtual void __fastcall InitArchive(void);
	void __fastcall SetExtractOptions(Abarctyp::TAbExtractOptions Value);
	void __fastcall SetPasswordRetries(System::Byte Value);
	void __fastcall UnzipProc(System::TObject* Sender, Abarctyp::TAbArchiveItem* Item, const System::UnicodeString NewName);
	void __fastcall UnzipToStreamProc(System::TObject* Sender, Abarctyp::TAbArchiveItem* Item, System::Classes::TStream* OutStream);
	void __fastcall TestItemProc(System::TObject* Sender, Abarctyp::TAbArchiveItem* Item);
	__property Abarctyp::TAbExtractOptions ExtractOptions = {read=FExtractOptions, write=SetExtractOptions, default=1};
	__property System::Byte PasswordRetries = {read=FPasswordRetries, write=SetPasswordRetries, default=3};
	__property Abarctyp::TAbConfirmOverwriteEvent OnConfirmOverwrite = {read=FOnConfirmOverwrite, write=FOnConfirmOverwrite};
	__property Abziptyp::TAbNeedPasswordEvent OnNeedPassword = {read=FOnNeedPassword, write=FOnNeedPassword};
	
public:
	__fastcall virtual TAbCustomZipKit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAbCustomZipKit(void);
	void __fastcall ExtractAt(int Index, const System::UnicodeString NewName);
	void __fastcall ExtractFiles(const System::UnicodeString FileMask);
	void __fastcall ExtractFilesEx(const System::UnicodeString FileMask, const System::UnicodeString ExclusionMask);
	void __fastcall ExtractTaggedItems(void);
	void __fastcall ExtractToStream(const System::UnicodeString aFileName, System::Classes::TStream* ToStream);
	void __fastcall TestTaggedItems(void);
	__property Spanned;
};


class PASCALIMPLEMENTATION TAbZipKit : public TAbCustomZipKit
{
	typedef TAbCustomZipKit inherited;
	
__published:
	__property ArchiveProgressMeter;
	__property ArchiveSaveProgressMeter;
	__property AutoSave;
	__property BaseDirectory = {default=0};
	__property CompressionMethodToUse = {default=2};
	__property DeflationOption = {default=1};
	__property DOSMode;
	__property ExtractOptions = {default=1};
	__property SpanningThreshold = {default=0};
	__property ItemProgressMeter;
	__property LogFile = {default=0};
	__property Logging = {default=0};
	__property OnArchiveProgress;
	__property OnArchiveSaveProgress;
	__property OnArchiveItemProgress;
	__property OnChange;
	__property OnConfirmOverwrite;
	__property OnConfirmProcessItem;
	__property OnConfirmSave;
	__property OnLoad;
	__property OnNeedPassword;
	__property OnProcessItemFailure;
	__property OnRequestBlankDisk;
	__property OnRequestImage;
	__property OnRequestLastDisk;
	__property OnRequestNthDisk;
	__property OnSave;
	__property Password = {default=0};
	__property PasswordRetries = {default=3};
	__property StoreOptions = {default=5};
	__property TempDirectory = {default=0};
	__property Version = {default=0};
	__property FileName = {default=0};
public:
	/* TAbCustomZipKit.Create */ inline __fastcall virtual TAbZipKit(System::Classes::TComponent* AOwner) : TAbCustomZipKit(AOwner) { }
	/* TAbCustomZipKit.Destroy */ inline __fastcall virtual ~TAbZipKit(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abzipkit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABZIPKIT)
using namespace Abzipkit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbzipkitHPP
