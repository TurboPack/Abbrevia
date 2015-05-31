// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbDfInW.pas' rev: 29.00 (Windows)

#ifndef AbdfinwHPP
#define AbdfinwHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <AbDfBase.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abdfinw
{
//-- forward type declarations -----------------------------------------------
struct TAbDfMatch;
class DELPHICLASS TAbDfInputWindow;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TAbDfMatch
{
public:
	int maLen;
	int maDist;
	System::Byte maLit;
};


typedef System::StaticArray<void *, 536870911> TAbPointerList;

typedef TAbPointerList *PAbPointerList;

class PASCALIMPLEMENTATION TAbDfInputWindow : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FAdvanceStart;
	System::Byte *FBuffer;
	System::Byte *FBufferEnd;
	int FBytesUsed;
	int FChainLen;
	TAbPointerList *FHashChains;
	TAbPointerList *FHashHeads;
	int FHashIndex;
	int FChecksum;
	System::Byte *FCurrent;
	System::Byte *FLookAheadEnd;
	int FMaxMatchLen;
	bool FMustSlide;
	Abdfbase::TAbProgressStep FOnProgress;
	System::Byte *FSlidePoint;
	System::Byte *FStart;
	int FStartOffset;
	System::Classes::TStream* FStream;
	__int64 FStreamSize;
	bool FUseCRC32;
	bool FUseDeflate64;
	int FWinMask;
	int FWinSize;
	
protected:
	int __fastcall iwGetChecksum(void);
	void __fastcall iwReadFromStream(void);
	void __fastcall iwSetCapacity(int aValue);
	void __fastcall iwSlide(void);
	
public:
	__fastcall TAbDfInputWindow(System::Classes::TStream* aStream, __int64 aStreamSize, int aWinSize, int aChainLength, bool aUseDeflate64, bool aUseCRC32);
	__fastcall virtual ~TAbDfInputWindow(void);
	void __fastcall Advance(int aCount, int aHashCount);
	void __fastcall AdvanceByOne(void);
	bool __fastcall FindLongestMatch(int aAmpleLength, TAbDfMatch &aMatch, const TAbDfMatch &aPrevMatch);
	System::Byte __fastcall GetNextChar(void);
	int __fastcall GetNextKeyLength(void);
	int __fastcall Position(void);
	void __fastcall ReadBuffer(void *aBuffer, int aCount, __int64 aOffset);
	__property int ChainLen = {read=FChainLen, write=FChainLen, nodefault};
	__property int Checksum = {read=iwGetChecksum, nodefault};
	__property Abdfbase::TAbProgressStep OnProgress = {read=FOnProgress, write=FOnProgress};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abdfinw */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABDFINW)
using namespace Abdfinw;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbdfinwHPP
