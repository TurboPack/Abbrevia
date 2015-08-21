// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbUnzPrc.pas' rev: 30.00 (iOSSIM)

#ifndef AbunzprcHPP
#define AbunzprcHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <AbArcTyp.hpp>
#include <AbZipTyp.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abunzprc
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbUnzipHelper;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbUnzipHelper : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::Classes::TStream* FOutWriter;
	System::Classes::TStream* FOutStream;
	int FUnCompressedSize;
	Abziptyp::TAbZipCompressionMethod FCompressionMethod;
	Abziptyp::TAbZipDictionarySize FDictionarySize;
	System::Byte FShannonFanoTreeCount;
	Abziptyp::TAbByteArray *FOutBuf;
	int FOutSent;
	unsigned FOutPos;
	System::Byte FBitSValid;
	Abziptyp::TAbByteArray4K FInBuf;
	int FInPos;
	int FInCnt;
	bool FInEof;
	System::Byte FCurByte;
	System::Byte FBitsLeft;
	System::Classes::TStream* FZStream;
	void __fastcall uzFlushOutBuf(void);
	int __fastcall uzReadBits(System::Byte Bits);
	void __fastcall uzReadNextPrim(void);
	void __fastcall uzUnImplode(void);
	void __fastcall uzUnReduce(void);
	void __fastcall uzUnShrink(void);
	void __fastcall uzWriteByte(System::Byte B);
	
public:
	__fastcall TAbUnzipHelper(System::Classes::TStream* InputStream, System::Classes::TStream* OutputStream);
	__fastcall virtual ~TAbUnzipHelper(void);
	void __fastcall Execute(void);
	__property int UnCompressedSize = {read=FUnCompressedSize, write=FUnCompressedSize, nodefault};
	__property Abziptyp::TAbZipCompressionMethod CompressionMethod = {read=FCompressionMethod, write=FCompressionMethod, nodefault};
	__property Abziptyp::TAbZipDictionarySize DictionarySize = {read=FDictionarySize, write=FDictionarySize, nodefault};
	__property System::Byte ShannonFanoTreeCount = {read=FShannonFanoTreeCount, write=FShannonFanoTreeCount, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall AbUnzipToStream(System::TObject* Sender, Abziptyp::TAbZipItem* Item, System::Classes::TStream* OutStream);
extern DELPHI_PACKAGE void __fastcall AbUnzip(System::TObject* Sender, Abziptyp::TAbZipItem* Item, const System::UnicodeString UseName);
extern DELPHI_PACKAGE void __fastcall AbTestZipItem(System::TObject* Sender, Abziptyp::TAbZipItem* Item);
extern DELPHI_PACKAGE void __fastcall InflateStream(System::Classes::TStream* CompressedStream, System::Classes::TStream* UnCompressedStream);
}	/* namespace Abunzprc */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABUNZPRC)
using namespace Abunzprc;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbunzprcHPP
