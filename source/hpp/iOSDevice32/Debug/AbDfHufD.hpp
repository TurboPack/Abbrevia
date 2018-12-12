// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbDfHufD.pas' rev: 32.00 (iOS)

#ifndef AbdfhufdHPP
#define AbdfhufdHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <AbDfBase.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abdfhufd
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbDfDecodeHuffmanTree;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAbDfHuffmanUsage : unsigned char { huEncoding, huDecoding, huBoth };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbDfDecodeHuffmanTree : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FAlphaSize;
	Abdfbase::TAbDfIntegerList *FDecodes;
	int FDefMaxCodeLen;
	Abdfbase::TAbDfIntegerList *FEncodes;
	int FMask;
	int FMaxCodeLen;
	TAbDfHuffmanUsage FUsage;
	
public:
	__fastcall TAbDfDecodeHuffmanTree(int aAlphabetSize, int aDefMaxCodeLen, TAbDfHuffmanUsage aUsage);
	__fastcall virtual ~TAbDfDecodeHuffmanTree(void);
	void __fastcall Build(const int *aCodeLengths, const int aCodeLengths_High, int aStartInx, int aCount, const System::Byte *aExtraBits, const int aExtraBits_High, int aExtraOffset);
	int __fastcall Decode(int aLookupBits);
	int __fastcall Encode(int aSymbol);
	__property int LookupBitLength = {read=FMaxCodeLen, nodefault};
	__property Abdfbase::PAbDfIntegerList Decodes = {read=FDecodes};
	__property Abdfbase::PAbDfIntegerList Encodes = {read=FEncodes};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TAbDfDecodeHuffmanTree* AbStaticLiteralTree;
extern DELPHI_PACKAGE TAbDfDecodeHuffmanTree* AbStaticDistanceTree;
}	/* namespace Abdfhufd */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABDFHUFD)
using namespace Abdfhufd;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbdfhufdHPP
