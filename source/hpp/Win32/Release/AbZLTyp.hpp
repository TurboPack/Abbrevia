// CodeGear C++Builder
// Copyright (c) 1995, 2017 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbZLTyp.pas' rev: 33.00 (Windows)

#ifndef AbzltypHPP
#define AbzltypHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <AbUtils.hpp>
#include <AbArcTyp.hpp>
#include <AbZipPrc.hpp>
#include <AbDfBase.hpp>
#include <AbDfDec.hpp>
#include <AbDfEnc.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abzltyp
{
//-- forward type declarations -----------------------------------------------
struct TAbZLHeader;
class DELPHICLASS TAbZLItem;
class DELPHICLASS TAbZLStreamHelper;
//-- type declarations -------------------------------------------------------
#pragma pack(push,1)
struct DECLSPEC_DRECORD TAbZLHeader
{
public:
	System::Byte CMF;
	System::Byte FLG;
};
#pragma pack(pop)


class PASCALIMPLEMENTATION TAbZLItem : public Abarctyp::TAbArchiveItem
{
	typedef Abarctyp::TAbArchiveItem inherited;
	
private:
	System::Byte __fastcall GetCompressionInfo();
	System::Byte __fastcall GetCompressionLevel();
	bool __fastcall GetIsPresetDictionaryPresent();
	void __fastcall SetCompressionInfo(System::Byte Value);
	void __fastcall SetCompressionLevel(System::Byte Value);
	System::Byte __fastcall GetCompressionMethod();
	void __fastcall SetCompressionMethod(System::Byte Value);
	System::Byte __fastcall GetFCheck();
	void __fastcall MakeFCheck();
	
protected:
	TAbZLHeader FZLHeader;
	int FAdler32;
	
public:
	__fastcall TAbZLItem();
	__property bool IsPresetDictionaryPresent = {read=GetIsPresetDictionaryPresent, nodefault};
	__property System::Byte CompressionLevel = {read=GetCompressionLevel, write=SetCompressionLevel, nodefault};
	__property System::Byte CompressionInfo = {read=GetCompressionInfo, write=SetCompressionInfo, nodefault};
	__property System::Byte CompressionMethod = {read=GetCompressionMethod, write=SetCompressionMethod, nodefault};
	__property int Adler32 = {read=FAdler32, write=FAdler32, nodefault};
	__property System::Byte FCheck = {read=GetFCheck, nodefault};
	void __fastcall SaveZLHeaderToStream(System::Classes::TStream* AStream);
	void __fastcall ReadZLHeaderFromStream(System::Classes::TStream* AStream);
public:
	/* TAbArchiveItem.Destroy */ inline __fastcall virtual ~TAbZLItem() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbZLStreamHelper : public Abarctyp::TAbArchiveStreamHelper
{
	typedef Abarctyp::TAbArchiveStreamHelper inherited;
	
protected:
	TAbZLItem* FItem;
	
public:
	__fastcall TAbZLStreamHelper(System::Classes::TStream* AStream);
	__fastcall virtual ~TAbZLStreamHelper();
	__property TAbZLItem* Item = {read=FItem};
	virtual void __fastcall ExtractItemData(System::Classes::TStream* AStream);
	virtual bool __fastcall FindFirstItem();
	virtual bool __fastcall FindNextItem();
	virtual void __fastcall ReadHeader();
	virtual void __fastcall ReadTail();
	virtual bool __fastcall SeekItem(int Index);
	virtual void __fastcall WriteArchiveHeader();
	virtual void __fastcall WriteArchiveItem(System::Classes::TStream* AStream);
	virtual void __fastcall WriteArchiveTail();
	virtual int __fastcall GetItemCount();
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 AB_ZL_PRESET_DICT = System::Int8(0x20);
static const System::Int8 AB_ZL_DEF_COMPRESSIONMETHOD = System::Int8(0x8);
static const System::Int8 AB_ZL_DEF_COMPRESSIONINFO = System::Int8(0x7);
static const System::Int8 AB_ZL_FASTEST_COMPRESSION = System::Int8(0x0);
static const System::Int8 AB_ZL_FAST_COMPRESSION = System::Int8(0x1);
static const System::Int8 AB_ZL_DEFAULT_COMPRESSION = System::Int8(0x2);
static const System::Int8 AB_ZL_MAXIMUM_COMPRESSION = System::Int8(0x3);
static const System::Int8 AB_ZL_FCHECK_MASK = System::Int8(0x1f);
static const System::Byte AB_ZL_CINFO_MASK = System::Byte(0xf0);
static const System::Byte AB_ZL_FLEVEL_MASK = System::Byte(0xc0);
static const System::Int8 AB_ZL_CM_MASK = System::Int8(0xf);
}	/* namespace Abzltyp */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABZLTYP)
using namespace Abzltyp;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbzltypHPP
