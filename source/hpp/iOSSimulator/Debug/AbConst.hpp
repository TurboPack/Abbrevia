// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbConst.pas' rev: 31.00 (iOSSIM)

#ifndef AbconstHPP
#define AbconstHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abconst
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
#define AbVersion  (5.000000E+00)
#define AbVersionS u"5.0"
static constexpr System::Byte Ab_MessageLen = System::Byte(0xff);
static constexpr System::Int8 Ab_CaptionLen = System::Int8(0x50);
static constexpr System::WideChar AB_ZIPPATHDELIM = (System::WideChar)(0x2f);
static constexpr System::Int8 AbZipVersionNeeded = System::Int8(0x1);
static constexpr System::Int8 AbUnknownCompressionMethod = System::Int8(0x2);
static constexpr System::Int8 AbNoExtractionMethod = System::Int8(0x3);
static constexpr System::Int8 AbInvalidPassword = System::Int8(0x4);
static constexpr System::Int8 AbNoInsertionMethod = System::Int8(0x5);
static constexpr System::Int8 AbInvalidFactor = System::Int8(0x6);
static constexpr System::Int8 AbDuplicateName = System::Int8(0x7);
static constexpr System::Int8 AbUnsupportedCompressionMethod = System::Int8(0x8);
static constexpr System::Int8 AbUserAbort = System::Int8(0x9);
static constexpr System::Int8 AbArchiveBusy = System::Int8(0xa);
static constexpr System::Int8 AbBadSpanStream = System::Int8(0xb);
static constexpr System::Int8 AbNoOverwriteSpanStream = System::Int8(0xc);
static constexpr System::Int8 AbNoSpannedSelfExtract = System::Int8(0xd);
static constexpr System::Int8 AbStreamFull = System::Int8(0xe);
static constexpr System::Int8 AbNoSuchDirectory = System::Int8(0xf);
static constexpr System::Int8 AbInflateBlockError = System::Int8(0x10);
static constexpr System::Int8 AbBadStreamType = System::Int8(0x11);
static constexpr System::Int8 AbTruncateError = System::Int8(0x12);
static constexpr System::Int8 AbZipBadCRC = System::Int8(0x13);
static constexpr System::Int8 AbZipBadStub = System::Int8(0x14);
static constexpr System::Int8 AbFileNotFound = System::Int8(0x15);
static constexpr System::Int8 AbInvalidLFH = System::Int8(0x16);
static constexpr System::Int8 AbNoArchive = System::Int8(0x17);
static constexpr System::Int8 AbErrZipInvalid = System::Int8(0x18);
static constexpr System::Int8 AbReadError = System::Int8(0x19);
static constexpr System::Int8 AbInvalidIndex = System::Int8(0x1a);
static constexpr System::Int8 AbInvalidThreshold = System::Int8(0x1b);
static constexpr System::Int8 AbUnhandledFileType = System::Int8(0x1c);
static constexpr System::Int8 AbSpanningNotSupported = System::Int8(0x1d);
static constexpr System::Int8 AbBBSReadTooManyBytes = System::Int8(0x28);
static constexpr System::Int8 AbBBSSeekOutsideBuffer = System::Int8(0x29);
static constexpr System::Int8 AbBBSInvalidOrigin = System::Int8(0x2a);
static constexpr System::Int8 AbBBSWriteTooManyBytes = System::Int8(0x2b);
static constexpr System::Int8 AbNoCabinetDllError = System::Int8(0x32);
static constexpr System::Int8 AbFCIFileOpenError = System::Int8(0x33);
static constexpr System::Int8 AbFCIFileReadError = System::Int8(0x34);
static constexpr System::Int8 AbFCIFileWriteError = System::Int8(0x35);
static constexpr System::Int8 AbFCIFileCloseError = System::Int8(0x36);
static constexpr System::Int8 AbFCIFileSeekError = System::Int8(0x37);
static constexpr System::Int8 AbFCIFileDeleteError = System::Int8(0x38);
static constexpr System::Int8 AbFCIAddFileError = System::Int8(0x39);
static constexpr System::Int8 AbFCICreateError = System::Int8(0x3a);
static constexpr System::Int8 AbFCIFlushCabinetError = System::Int8(0x3b);
static constexpr System::Int8 AbFCIFlushFolderError = System::Int8(0x3c);
static constexpr System::Int8 AbFDICopyError = System::Int8(0x3d);
static constexpr System::Int8 AbFDICreateError = System::Int8(0x3e);
static constexpr System::Int8 AbInvalidCabTemplate = System::Int8(0x3f);
static constexpr System::Int8 AbInvalidCabFile = System::Int8(0x40);
static constexpr System::Int8 AbSWSNotEndofStream = System::Int8(0x50);
static constexpr System::Int8 AbSWSSeekFailed = System::Int8(0x51);
static constexpr System::Int8 AbSWSWriteFailed = System::Int8(0x52);
static constexpr System::Int8 AbSWSInvalidOrigin = System::Int8(0x53);
static constexpr System::Int8 AbSWSInvalidNewOrigin = System::Int8(0x54);
static constexpr System::Int8 AbVMSReadTooManyBytes = System::Int8(0x64);
static constexpr System::Int8 AbVMSInvalidOrigin = System::Int8(0x65);
static constexpr System::Int8 AbVMSErrorOpenSwap = System::Int8(0x66);
static constexpr System::Int8 AbVMSSeekFail = System::Int8(0x67);
static constexpr System::Int8 AbVMSReadFail = System::Int8(0x68);
static constexpr System::Int8 AbVMSWriteFail = System::Int8(0x69);
static constexpr System::Int8 AbVMSWriteTooManyBytes = System::Int8(0x6a);
static constexpr System::Byte AbGZipInvalid = System::Byte(0xc8);
static constexpr System::Byte AbGzipBadCRC = System::Byte(0xc9);
static constexpr System::Byte AbGzipBadFileSize = System::Byte(0xca);
static constexpr System::Byte AbTarInvalid = System::Byte(0xdc);
static constexpr System::Byte AbTarBadFileName = System::Byte(0xdd);
static constexpr System::Byte AbTarBadLinkName = System::Byte(0xde);
static constexpr System::Byte AbTarBadOp = System::Byte(0xdf);
extern DELPHI_PACKAGE System::UnicodeString __fastcall AbStrRes(int Index);
}	/* namespace Abconst */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABCONST)
using namespace Abconst;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbconstHPP
