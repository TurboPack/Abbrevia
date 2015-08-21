// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbCabMak.pas' rev: 30.00 (Windows)

#ifndef AbcabmakHPP
#define AbcabmakHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <AbCBrows.hpp>
#include <AbArcTyp.hpp>
#include <AbCabTyp.hpp>
#include <AbBrowse.hpp>
#include <AbBase.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abcabmak
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbCustomMakeCab;
class DELPHICLASS TAbMakeCab;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAbCustomMakeCab : public Abcbrows::TAbCustomCabBrowser
{
	typedef Abcbrows::TAbCustomCabBrowser inherited;
	
protected:
	int FFolderThreshold;
	Abcabtyp::TAbCabCompressionType FCompressionType;
	Abarctyp::TAbStoreOptions FStoreOptions;
	Abarctyp::TAbArchiveEvent FOnSave;
	virtual void __fastcall DoSave(System::TObject* Sender);
	virtual void __fastcall InitArchive(void);
	void __fastcall SetFolderThreshold(int Value);
	HIDESBASE void __fastcall SetCompressionType(Abcabtyp::TAbCabCompressionType Value);
	virtual void __fastcall SetFileName(const System::UnicodeString aFileName);
	void __fastcall SetStoreOptions(Abarctyp::TAbStoreOptions Value);
	__property Abcabtyp::TAbCabCompressionType CompressionType = {read=FCompressionType, write=SetCompressionType, nodefault};
	__property int FolderThreshold = {read=FFolderThreshold, write=SetFolderThreshold, nodefault};
	__property Abarctyp::TAbStoreOptions StoreOptions = {read=FStoreOptions, write=SetStoreOptions, default=5};
	__property Abarctyp::TAbArchiveEvent OnSave = {read=FOnSave, write=FOnSave};
	
public:
	__fastcall virtual TAbCustomMakeCab(System::Classes::TComponent* AOwner);
	void __fastcall AddFiles(const System::UnicodeString FileMask, int SearchAttr);
	void __fastcall AddFilesEx(const System::UnicodeString FileMask, const System::UnicodeString ExclusionMask, int SearchAttr);
	void __fastcall StartNewFolder(void);
	void __fastcall StartNewCabinet(void);
public:
	/* TAbCustomCabBrowser.Destroy */ inline __fastcall virtual ~TAbCustomMakeCab(void) { }
	
};


class PASCALIMPLEMENTATION TAbMakeCab : public TAbCustomMakeCab
{
	typedef TAbCustomMakeCab inherited;
	
__published:
	__property ArchiveProgressMeter;
	__property BaseDirectory = {default=0};
	__property CabSize;
	__property CompressionType;
	__property FolderThreshold;
	__property ItemProgressMeter;
	__property StoreOptions = {default=5};
	__property OnArchiveProgress;
	__property OnArchiveItemProgress;
	__property OnChange;
	__property OnConfirmProcessItem;
	__property OnLoad;
	__property OnProcessItemFailure;
	__property OnRequestImage;
	__property OnSave;
	__property SetID;
	__property SpanningThreshold = {default=0};
	__property TempDirectory = {default=0};
	__property Version = {default=0};
	__property FileName = {default=0};
public:
	/* TAbCustomMakeCab.Create */ inline __fastcall virtual TAbMakeCab(System::Classes::TComponent* AOwner) : TAbCustomMakeCab(AOwner) { }
	
public:
	/* TAbCustomCabBrowser.Destroy */ inline __fastcall virtual ~TAbMakeCab(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abcabmak */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABCABMAK)
using namespace Abcabmak;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbcabmakHPP
