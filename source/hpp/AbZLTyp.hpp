// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbZLTyp.pas' rev: 28.00 (iOS)

#ifndef AbzltypHPP
#define AbzltypHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <AbUtils.hpp>	// Pascal unit
#include <AbArcTyp.hpp>	// Pascal unit
#include <AbZipPrc.hpp>	// Pascal unit
#include <AbDfBase.hpp>	// Pascal unit
#include <AbDfDec.hpp>	// Pascal unit
#include <AbDfEnc.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Abzltyp
{
//-- type declarations -------------------------------------------------------
#pragma pack(push,1)
struct DECLSPEC_DRECORD TAbZLHeader
{
public:
	System::Byte CMF;
	System::Byte FLG;
};
#pragma pack(pop)


class DELPHICLASS TAbZLItem;
class PASCALIMPLEMENTATION TAbZLItem : public Abarctyp::TAbArchiveItem
{
	typedef Abarctyp::TAbArchiveItem inherited;
	
private:
	System::Byte __fastcall GetCompressionInfo(void);
	System::Byte __fastcall GetCompressionLevel(void);
	bool __fastcall GetIsPresetDictionaryPresent(void);
	void __fastcall SetCompressionInfo(System::Byte Value);
	void __fastcall SetCompressionLevel(System::Byte Value);
	System::Byte __fastcall GetCompressionMethod(void);
	void __fastcall SetCompressionMethod(System::Byte Value);
	System::Byte __fastcall GetFCheck(void);
	void __fastcall MakeFCheck(void);
	
protected:
	TAbZLHeader FZLHeader;
	int FAdler32;
	
public:
	__fastcall TAbZLItem(void);
	__property bool IsPresetDictionaryPresent = {read=GetIsPresetDictionaryPresent, nodefault};
	__property System::Byte CompressionLevel = {read=GetCompressionLevel, write=SetCompressionLevel, nodefault};
	__property System::Byte CompressionInfo = {read=GetCompressionInfo, write=SetCompressionInfo, nodefault};
	__property System::Byte CompressionMethod = {read=GetCompressionMethod, write=SetCompressionMethod, nodefault};
	__property int Adler32 = {read=FAdler32, write=FAdler32, nodefault};
	__property System::Byte FCheck = {read=GetFCheck, nodefault};
	void __fastcall SaveZLHeaderToStream(System::Classes::TStream* AStream);
	void __fastcall ReadZLHeaderFromStream(System::Classes::TStream* AStream);
public:
	/* TAbArchiveItem.Destroy */ inline __fastcall virtual ~TAbZLItem(void) { }
	
};


class DELPHICLASS TAbZLStreamHelper;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbZLStreamHelper : public Abarctyp::TAbArchiveStreamHelper
{
	typedef Abarctyp::TAbArchiveStreamHelper inherited;
	
protected:
	TAbZLItem* FItem;
	
public:
	__fastcall TAbZLStreamHelper(System::Classes::TStream* AStream);
	__fastcall virtual ~TAbZLStreamHelper(void);
	__property TAbZLItem* Item = {read=FItem};
	virtual void __fastcall ExtractItemData(System::Classes::TStream* AStream);
	virtual bool __fastcall FindFirstItem(void);
	virtual bool __fastcall FindNextItem(void);
	virtual void __fastcall ReadHeader(void);
	virtual void __fastcall ReadTail(void);
	virtual bool __fastcall SeekItem(int Index);
	virtual void __fastcall WriteArchiveHeader(void);
	virtual void __fastcall WriteArchiveItem(System::Classes::TStream* AStream);
	virtual void __fastcall WriteArchiveTail(void);
	virtual int __fastcall GetItemCount(void);
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static constexpr System::Int8 AB_ZL_PRESET_DICT = System::Int8(0x20);
static constexpr System::Int8 AB_ZL_DEF_COMPRESSIONMETHOD = System::Int8(0x8);
static constexpr System::Int8 AB_ZL_DEF_COMPRESSIONINFO = System::Int8(0x7);
static constexpr System::Int8 AB_ZL_FASTEST_COMPRESSION = System::Int8(0x0);
static constexpr System::Int8 AB_ZL_FAST_COMPRESSION = System::Int8(0x1);
static constexpr System::Int8 AB_ZL_DEFAULT_COMPRESSION = System::Int8(0x2);
static constexpr System::Int8 AB_ZL_MAXIMUM_COMPRESSION = System::Int8(0x3);
static constexpr System::Int8 AB_ZL_FCHECK_MASK = System::Int8(0x1f);
static constexpr System::Byte AB_ZL_CINFO_MASK = System::Byte(0xf0);
static constexpr System::Byte AB_ZL_FLEVEL_MASK = System::Byte(0xc0);
static constexpr System::Int8 AB_ZL_CM_MASK = System::Int8(0xf);
}	/* namespace Abzltyp */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABZLTYP)
using namespace Abzltyp;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbzltypHPP
