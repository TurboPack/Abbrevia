// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbUnzper.pas' rev: 32.00 (iOS)

#ifndef AbunzperHPP
#define AbunzperHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <AbZBrows.hpp>
#include <AbArcTyp.hpp>
#include <AbZipTyp.hpp>
#include <AbBrowse.hpp>
#include <AbBase.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abunzper
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbCustomUnZipper;
class DELPHICLASS TAbUnZipper;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbCustomUnZipper : public Abzbrows::TAbCustomZipBrowser
{
	typedef Abzbrows::TAbCustomZipBrowser inherited;
	
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
	virtual void __fastcall SetFileName(const System::UnicodeString aFileName);
	__property Abarctyp::TAbExtractOptions ExtractOptions = {read=FExtractOptions, write=SetExtractOptions, default=1};
	__property Abarctyp::TAbConfirmOverwriteEvent OnConfirmOverwrite = {read=FOnConfirmOverwrite, write=FOnConfirmOverwrite};
	__property Abziptyp::TAbNeedPasswordEvent OnNeedPassword = {read=FOnNeedPassword, write=FOnNeedPassword};
	__property System::Byte PasswordRetries = {read=FPasswordRetries, write=SetPasswordRetries, default=3};
	
public:
	__fastcall virtual TAbCustomUnZipper(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAbCustomUnZipper(void);
	void __fastcall ExtractAt(int Index, const System::UnicodeString NewName);
	void __fastcall ExtractFiles(const System::UnicodeString FileMask);
	void __fastcall ExtractFilesEx(const System::UnicodeString FileMask, const System::UnicodeString ExclusionMask);
	void __fastcall ExtractToStream(const System::UnicodeString aFileName, System::Classes::TStream* ToStream);
	void __fastcall ExtractTaggedItems(void);
	void __fastcall TestTaggedItems(void);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbUnZipper : public TAbCustomUnZipper
{
	typedef TAbCustomUnZipper inherited;
	
__published:
	__property ArchiveProgressMeter;
	__property ItemProgressMeter;
	__property BaseDirectory = {default=0};
	__property ExtractOptions = {default=1};
	__property LogFile = {default=0};
	__property Logging = {default=0};
	__property OnArchiveProgress;
	__property OnArchiveItemProgress;
	__property OnChange;
	__property OnConfirmOverwrite;
	__property OnConfirmProcessItem;
	__property OnLoad;
	__property OnNeedPassword;
	__property OnRequestImage;
	__property OnProcessItemFailure;
	__property OnRequestLastDisk;
	__property OnRequestNthDisk;
	__property Password = {default=0};
	__property PasswordRetries = {default=3};
	__property TempDirectory = {default=0};
	__property Version = {default=0};
	__property FileName = {default=0};
public:
	/* TAbCustomUnZipper.Create */ inline __fastcall virtual TAbUnZipper(System::Classes::TComponent* AOwner) : TAbCustomUnZipper(AOwner) { }
	/* TAbCustomUnZipper.Destroy */ inline __fastcall virtual ~TAbUnZipper(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abunzper */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABUNZPER)
using namespace Abunzper;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbunzperHPP
