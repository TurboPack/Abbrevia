// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbDfStrm.pas' rev: 29.00 (MacOS)

#ifndef AbdfstrmHPP
#define AbdfstrmHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <AbDfBase.hpp>
#include <AbDfInW.hpp>
#include <AbDfHufD.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abdfstrm
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbDfInBitStream;
class DELPHICLASS TAbDfOutBitStream;
class DELPHICLASS TAbDfLZStream;
class DELPHICLASS TAbDfCodeLenStream;
//-- type declarations -------------------------------------------------------
typedef int TAb32bit;

typedef System::StaticArray<int, 286> TAbDfLitBuckets;

typedef TAbDfLitBuckets *PAbDfLitBuckets;

typedef System::StaticArray<int, 32> TAbDfDistBuckets;

typedef TAbDfDistBuckets *PAbDfDistBuckets;

typedef System::StaticArray<int, 19> TAbDfCodeLenBuckets;

typedef TAbDfCodeLenBuckets *PAbDfCodeLenBuckets;

class PASCALIMPLEMENTATION TAbDfInBitStream : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FBitBuffer;
	int FBitsLeft;
	System::Byte *FBufEnd;
	System::Byte *FBuffer;
	System::Byte *FBufPos;
	int FByteCount;
	int FFakeCount;
	Abdfbase::TAbProgressStep FOnProgress;
	int FPeekCount;
	System::Classes::TStream* FStream;
	int FStreamSize;
	
protected:
	bool __fastcall ibsFillBuffer(void);
	
public:
	__fastcall TAbDfInBitStream(System::Classes::TStream* aStream, Abdfbase::TAbProgressStep aOnProgress, int aStreamSize);
	__fastcall virtual ~TAbDfInBitStream(void);
	void __fastcall AlignToByte(void);
	void __fastcall DiscardBits(int aCount);
	void __fastcall DiscardMoreBits(int aCount);
	int __fastcall PeekBits(int aCount);
	int __fastcall PeekMoreBits(int aCount);
	bool __fastcall ReadBit(void);
	int __fastcall ReadBits(int aCount);
	void __fastcall ReadBuffer(void *aBuffer, int aCount);
	__property int BitBuffer = {read=FBitBuffer, write=FBitBuffer, nodefault};
	__property int BitsLeft = {read=FBitsLeft, write=FBitsLeft, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbDfOutBitStream : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FBitBuffer;
	int FBitsUsed;
	System::Byte *FBufEnd;
	System::Byte *FBuffer;
	System::Byte *FBufPos;
	System::Classes::TStream* FStream;
	
protected:
	void __fastcall obsEmptyBuffer(void);
	
public:
	__fastcall TAbDfOutBitStream(System::Classes::TStream* aStream);
	__fastcall virtual ~TAbDfOutBitStream(void);
	void __fastcall AlignToByte(void);
	int __fastcall Position(void);
	void __fastcall WriteBit(bool aBit);
	void __fastcall WriteBits(int aBits, int aCount);
	void __fastcall WriteBuffer(void *aBuffer, int aCount);
	void __fastcall WriteMoreBits(int aBits, int aCount);
	__property int BitBuffer = {read=FBitBuffer, write=FBitBuffer, nodefault};
	__property int BitsUsed = {read=FBitsUsed, write=FBitsUsed, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbDfLZStream : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Byte *FCurPos;
	TAbDfDistBuckets *FDistBuckets;
	int FDistCount;
	TAbDfLitBuckets *FLitBuckets;
	int FLitCount;
	Abdfbase::TAbLogger* FLog;
	Abdfinw::TAbDfInputWindow* FSlideWin;
	__int64 FStartOfs;
	unsigned FStoredSize;
	System::Byte *FStream;
	System::Byte *FStrmEnd;
	bool FUseDeflate64;
	
protected:
	unsigned __fastcall lzsGetApproxSize(void);
	int __fastcall lzsGetStaticSize(void);
	int __fastcall lzsGetStoredSize(void);
	bool __fastcall lzsIsFull(void);
	
public:
	__fastcall TAbDfLZStream(Abdfinw::TAbDfInputWindow* aSlideWin, bool aUseDeflate64, Abdfbase::TAbLogger* aLog);
	__fastcall virtual ~TAbDfLZStream(void);
	bool __fastcall AddLenDist(int aLen, int aDist);
	bool __fastcall AddLiteral(System::Byte aCh);
	void __fastcall Clear(void);
	void __fastcall Encode(TAbDfOutBitStream* aBitStrm, Abdfhufd::TAbDfDecodeHuffmanTree* aLitTree, Abdfhufd::TAbDfDecodeHuffmanTree* aDistTree, bool aUseDeflate64);
	void __fastcall Rewind(void);
	void __fastcall ReadStoredBuffer(void *aBuffer, int aCount);
	__property int LenDistCount = {read=FDistCount, nodefault};
	__property int LiteralCount = {read=FLitCount, nodefault};
	__property PAbDfDistBuckets DistBuckets = {read=FDistBuckets};
	__property PAbDfLitBuckets LitBuckets = {read=FLitBuckets};
	__property int StaticSize = {read=lzsGetStaticSize, nodefault};
	__property int StoredSize = {read=lzsGetStoredSize, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbDfCodeLenStream : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TAbDfCodeLenBuckets *FBuckets;
	System::Byte *FPosition;
	System::Byte *FStream;
	System::Byte *FStrmEnd;
	
public:
	__fastcall TAbDfCodeLenStream(Abdfbase::TAbLogger* aLog);
	__fastcall virtual ~TAbDfCodeLenStream(void);
	void __fastcall Build(int const *aCodeLens, const int aCodeLens_High, int aCount);
	void __fastcall Encode(TAbDfOutBitStream* aBitStrm, Abdfhufd::TAbDfDecodeHuffmanTree* aTree);
	__property PAbDfCodeLenBuckets Buckets = {read=FBuckets};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::StaticArray<int, 31> AbExtractMask;
}	/* namespace Abdfstrm */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABDFSTRM)
using namespace Abdfstrm;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbdfstrmHPP
