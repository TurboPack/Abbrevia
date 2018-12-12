// CodeGear C++Builder
// Copyright (c) 1995, 2017 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbExcept.pas' rev: 33.00 (Windows)

#ifndef AbexceptHPP
#define AbexceptHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <AbUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abexcept
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EAbException;
class DELPHICLASS EAbArchiveBusy;
class DELPHICLASS EAbBadStream;
class DELPHICLASS EAbDuplicateName;
class DELPHICLASS EAbFileNotFound;
class DELPHICLASS EAbNoArchive;
class DELPHICLASS EAbUserAbort;
class DELPHICLASS EAbNoSuchDirectory;
class DELPHICLASS EAbUnhandledType;
class DELPHICLASS EAbSpanningNotSupported;
class DELPHICLASS EAbInvalidSpanningThreshold;
class DELPHICLASS EAbZipException;
class DELPHICLASS EAbCabException;
class DELPHICLASS EAbTarException;
class DELPHICLASS EAbGzipException;
class DELPHICLASS EAbZipBadSpanStream;
class DELPHICLASS EAbZipBadCRC;
class DELPHICLASS EAbZipInflateBlock;
class DELPHICLASS EAbZipInvalid;
class DELPHICLASS EAbInvalidIndex;
class DELPHICLASS EAbZipInvalidFactor;
class DELPHICLASS EAbZipInvalidLFH;
class DELPHICLASS EAbZipInvalidMethod;
class DELPHICLASS EAbZipInvalidPassword;
class DELPHICLASS EAbZipInvalidStub;
class DELPHICLASS EAbZipNoExtraction;
class DELPHICLASS EAbZipNoInsertion;
class DELPHICLASS EAbZipSpanOverwrite;
class DELPHICLASS EAbZipStreamFull;
class DELPHICLASS EAbZipTruncate;
class DELPHICLASS EAbZipUnsupported;
class DELPHICLASS EAbZipVersion;
class DELPHICLASS EAbReadError;
class DELPHICLASS EAbGzipBadCRC;
class DELPHICLASS EAbGzipBadFileSize;
class DELPHICLASS EAbGzipInvalid;
class DELPHICLASS EAbTarInvalid;
class DELPHICLASS EAbTarBadFileName;
class DELPHICLASS EAbTarBadLinkName;
class DELPHICLASS EAbTarBadOp;
class DELPHICLASS EAbVMSInvalidOrigin;
class DELPHICLASS EAbVMSErrorOpenSwap;
class DELPHICLASS EAbVMSSeekFail;
class DELPHICLASS EAbVMSReadFail;
class DELPHICLASS EAbVMSWriteFail;
class DELPHICLASS EAbVMSWriteTooManyBytes;
class DELPHICLASS EAbBBSReadTooManyBytes;
class DELPHICLASS EAbBBSSeekOutsideBuffer;
class DELPHICLASS EAbBBSInvalidOrigin;
class DELPHICLASS EAbBBSWriteTooManyBytes;
class DELPHICLASS EAbSWSNotEndofStream;
class DELPHICLASS EAbSWSSeekFailed;
class DELPHICLASS EAbSWSWriteFailed;
class DELPHICLASS EAbSWSInvalidOrigin;
class DELPHICLASS EAbSWSInvalidNewOrigin;
class DELPHICLASS EAbNoCabinetDll;
class DELPHICLASS EAbFCIFileOpenError;
class DELPHICLASS EAbFCIFileReadError;
class DELPHICLASS EAbFCIFileWriteError;
class DELPHICLASS EAbFCIFileCloseError;
class DELPHICLASS EAbFCIFileSeekError;
class DELPHICLASS EAbFCIFileDeleteError;
class DELPHICLASS EAbFCIAddFileError;
class DELPHICLASS EAbFCICreateError;
class DELPHICLASS EAbFCIFlushCabinetError;
class DELPHICLASS EAbFCIFlushFolderError;
class DELPHICLASS EAbFDICopyError;
class DELPHICLASS EAbFDICreateError;
class DELPHICLASS EAbInvalidCabTemplate;
class DELPHICLASS EAbInvalidCabFile;
class DELPHICLASS EAbFileTooLarge;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	int ErrorCode;
public:
	/* Exception.Create */ inline __fastcall EAbException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbException() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbArchiveBusy : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbArchiveBusy();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbArchiveBusy(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbArchiveBusy(NativeUInt Ident)/* overload */ : EAbException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbArchiveBusy(System::PResStringRec ResStringRec)/* overload */ : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbArchiveBusy(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbArchiveBusy(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbArchiveBusy(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbArchiveBusy(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbArchiveBusy(NativeUInt Ident, int AHelpContext)/* overload */ : EAbException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbArchiveBusy(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbArchiveBusy(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbArchiveBusy(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbArchiveBusy() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbBadStream : public EAbException
{
	typedef EAbException inherited;
	
protected:
	System::Sysutils::Exception* FInnerException;
	
public:
	__fastcall EAbBadStream();
	__fastcall EAbBadStream(System::Sysutils::Exception* aInnerException);
	__property System::Sysutils::Exception* InnerException = {read=FInnerException};
public:
	/* Exception.CreateFmt */ inline __fastcall EAbBadStream(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbBadStream(NativeUInt Ident)/* overload */ : EAbException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbBadStream(System::PResStringRec ResStringRec)/* overload */ : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbBadStream(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbBadStream(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbBadStream(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbBadStream(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbBadStream(NativeUInt Ident, int AHelpContext)/* overload */ : EAbException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbBadStream(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbBadStream(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbBadStream(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbBadStream() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbDuplicateName : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbDuplicateName();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbDuplicateName(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbDuplicateName(NativeUInt Ident)/* overload */ : EAbException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbDuplicateName(System::PResStringRec ResStringRec)/* overload */ : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbDuplicateName(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbDuplicateName(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbDuplicateName(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbDuplicateName(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbDuplicateName(NativeUInt Ident, int AHelpContext)/* overload */ : EAbException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbDuplicateName(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbDuplicateName(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbDuplicateName(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbDuplicateName() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbFileNotFound : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbFileNotFound();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFileNotFound(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFileNotFound(NativeUInt Ident)/* overload */ : EAbException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbFileNotFound(System::PResStringRec ResStringRec)/* overload */ : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFileNotFound(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFileNotFound(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFileNotFound(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFileNotFound(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFileNotFound(NativeUInt Ident, int AHelpContext)/* overload */ : EAbException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFileNotFound(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFileNotFound(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFileNotFound(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFileNotFound() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbNoArchive : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbNoArchive();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbNoArchive(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbNoArchive(NativeUInt Ident)/* overload */ : EAbException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbNoArchive(System::PResStringRec ResStringRec)/* overload */ : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbNoArchive(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbNoArchive(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbNoArchive(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbNoArchive(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbNoArchive(NativeUInt Ident, int AHelpContext)/* overload */ : EAbException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbNoArchive(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbNoArchive(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbNoArchive(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbNoArchive() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbUserAbort : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbUserAbort();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbUserAbort(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbUserAbort(NativeUInt Ident)/* overload */ : EAbException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbUserAbort(System::PResStringRec ResStringRec)/* overload */ : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbUserAbort(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbUserAbort(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbUserAbort(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbUserAbort(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbUserAbort(NativeUInt Ident, int AHelpContext)/* overload */ : EAbException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbUserAbort(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbUserAbort(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbUserAbort(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbUserAbort() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbNoSuchDirectory : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbNoSuchDirectory();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbNoSuchDirectory(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbNoSuchDirectory(NativeUInt Ident)/* overload */ : EAbException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbNoSuchDirectory(System::PResStringRec ResStringRec)/* overload */ : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbNoSuchDirectory(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbNoSuchDirectory(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbNoSuchDirectory(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbNoSuchDirectory(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbNoSuchDirectory(NativeUInt Ident, int AHelpContext)/* overload */ : EAbException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbNoSuchDirectory(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbNoSuchDirectory(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbNoSuchDirectory(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbNoSuchDirectory() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbUnhandledType : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbUnhandledType();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbUnhandledType(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbUnhandledType(NativeUInt Ident)/* overload */ : EAbException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbUnhandledType(System::PResStringRec ResStringRec)/* overload */ : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbUnhandledType(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbUnhandledType(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbUnhandledType(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbUnhandledType(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbUnhandledType(NativeUInt Ident, int AHelpContext)/* overload */ : EAbException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbUnhandledType(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbUnhandledType(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbUnhandledType(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbUnhandledType() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbSpanningNotSupported : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbSpanningNotSupported();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbSpanningNotSupported(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbSpanningNotSupported(NativeUInt Ident)/* overload */ : EAbException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbSpanningNotSupported(System::PResStringRec ResStringRec)/* overload */ : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSpanningNotSupported(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSpanningNotSupported(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbSpanningNotSupported(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbSpanningNotSupported(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSpanningNotSupported(NativeUInt Ident, int AHelpContext)/* overload */ : EAbException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSpanningNotSupported(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSpanningNotSupported(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSpanningNotSupported(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbSpanningNotSupported() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbInvalidSpanningThreshold : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbInvalidSpanningThreshold();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbInvalidSpanningThreshold(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbInvalidSpanningThreshold(NativeUInt Ident)/* overload */ : EAbException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbInvalidSpanningThreshold(System::PResStringRec ResStringRec)/* overload */ : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbInvalidSpanningThreshold(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbInvalidSpanningThreshold(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbInvalidSpanningThreshold(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbInvalidSpanningThreshold(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbInvalidSpanningThreshold(NativeUInt Ident, int AHelpContext)/* overload */ : EAbException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbInvalidSpanningThreshold(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbInvalidSpanningThreshold(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbInvalidSpanningThreshold(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbInvalidSpanningThreshold() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipException : public EAbException
{
	typedef EAbException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAbZipException(const System::UnicodeString Msg) : EAbException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbZipException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipException(NativeUInt Ident)/* overload */ : EAbException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipException(System::PResStringRec ResStringRec)/* overload */ : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipException(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipException(NativeUInt Ident, int AHelpContext)/* overload */ : EAbException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipException() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbCabException : public EAbException
{
	typedef EAbException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAbCabException(const System::UnicodeString Msg) : EAbException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbCabException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbCabException(NativeUInt Ident)/* overload */ : EAbException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbCabException(System::PResStringRec ResStringRec)/* overload */ : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbCabException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbCabException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbCabException(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbCabException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbCabException(NativeUInt Ident, int AHelpContext)/* overload */ : EAbException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbCabException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbCabException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbCabException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbCabException() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbTarException : public EAbException
{
	typedef EAbException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAbTarException(const System::UnicodeString Msg) : EAbException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbTarException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbTarException(NativeUInt Ident)/* overload */ : EAbException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbTarException(System::PResStringRec ResStringRec)/* overload */ : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbTarException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbTarException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbTarException(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbTarException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbTarException(NativeUInt Ident, int AHelpContext)/* overload */ : EAbException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbTarException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbTarException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbTarException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbTarException() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbGzipException : public EAbException
{
	typedef EAbException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAbGzipException(const System::UnicodeString Msg) : EAbException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbGzipException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbGzipException(NativeUInt Ident)/* overload */ : EAbException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbGzipException(System::PResStringRec ResStringRec)/* overload */ : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbGzipException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbGzipException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbGzipException(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbGzipException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbGzipException(NativeUInt Ident, int AHelpContext)/* overload */ : EAbException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbGzipException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbGzipException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbGzipException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbGzipException() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipBadSpanStream : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipBadSpanStream();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipBadSpanStream(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipBadSpanStream(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipBadSpanStream(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipBadSpanStream(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipBadSpanStream(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipBadSpanStream(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipBadSpanStream(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipBadSpanStream(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipBadSpanStream(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipBadSpanStream(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipBadSpanStream(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipBadSpanStream() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipBadCRC : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipBadCRC();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipBadCRC(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipBadCRC(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipBadCRC(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipBadCRC(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipBadCRC(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipBadCRC(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipBadCRC(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipBadCRC(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipBadCRC(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipBadCRC(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipBadCRC(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipBadCRC() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipInflateBlock : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipInflateBlock();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipInflateBlock(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInflateBlock(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInflateBlock(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInflateBlock(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInflateBlock(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipInflateBlock(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipInflateBlock(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInflateBlock(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInflateBlock(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInflateBlock(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInflateBlock(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipInflateBlock() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipInvalid : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipInvalid();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipInvalid(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalid(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalid(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalid(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalid(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipInvalid(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipInvalid(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalid(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalid(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalid(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalid(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipInvalid() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbInvalidIndex : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbInvalidIndex();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbInvalidIndex(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbInvalidIndex(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbInvalidIndex(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbInvalidIndex(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbInvalidIndex(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbInvalidIndex(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbInvalidIndex(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbInvalidIndex(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbInvalidIndex(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbInvalidIndex(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbInvalidIndex(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbInvalidIndex() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipInvalidFactor : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipInvalidFactor();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipInvalidFactor(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalidFactor(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalidFactor(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalidFactor(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalidFactor(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipInvalidFactor(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipInvalidFactor(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalidFactor(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalidFactor(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalidFactor(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalidFactor(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipInvalidFactor() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipInvalidLFH : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipInvalidLFH();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipInvalidLFH(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalidLFH(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalidLFH(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalidLFH(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalidLFH(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipInvalidLFH(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipInvalidLFH(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalidLFH(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalidLFH(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalidLFH(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalidLFH(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipInvalidLFH() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipInvalidMethod : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipInvalidMethod();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipInvalidMethod(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalidMethod(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalidMethod(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalidMethod(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalidMethod(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipInvalidMethod(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipInvalidMethod(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalidMethod(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalidMethod(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalidMethod(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalidMethod(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipInvalidMethod() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipInvalidPassword : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipInvalidPassword();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipInvalidPassword(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalidPassword(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalidPassword(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalidPassword(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalidPassword(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipInvalidPassword(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipInvalidPassword(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalidPassword(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalidPassword(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalidPassword(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalidPassword(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipInvalidPassword() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipInvalidStub : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipInvalidStub();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipInvalidStub(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalidStub(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalidStub(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalidStub(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalidStub(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipInvalidStub(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipInvalidStub(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalidStub(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalidStub(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalidStub(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalidStub(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipInvalidStub() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipNoExtraction : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipNoExtraction();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipNoExtraction(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipNoExtraction(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipNoExtraction(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipNoExtraction(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipNoExtraction(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipNoExtraction(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipNoExtraction(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipNoExtraction(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipNoExtraction(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipNoExtraction(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipNoExtraction(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipNoExtraction() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipNoInsertion : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipNoInsertion();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipNoInsertion(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipNoInsertion(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipNoInsertion(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipNoInsertion(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipNoInsertion(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipNoInsertion(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipNoInsertion(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipNoInsertion(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipNoInsertion(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipNoInsertion(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipNoInsertion(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipNoInsertion() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipSpanOverwrite : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipSpanOverwrite();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipSpanOverwrite(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipSpanOverwrite(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipSpanOverwrite(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipSpanOverwrite(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipSpanOverwrite(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipSpanOverwrite(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipSpanOverwrite(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipSpanOverwrite(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipSpanOverwrite(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipSpanOverwrite(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipSpanOverwrite(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipSpanOverwrite() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipStreamFull : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipStreamFull();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipStreamFull(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipStreamFull(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipStreamFull(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipStreamFull(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipStreamFull(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipStreamFull(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipStreamFull(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipStreamFull(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipStreamFull(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipStreamFull(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipStreamFull(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipStreamFull() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipTruncate : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipTruncate();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipTruncate(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipTruncate(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipTruncate(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipTruncate(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipTruncate(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipTruncate(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipTruncate(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipTruncate(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipTruncate(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipTruncate(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipTruncate(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipTruncate() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipUnsupported : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipUnsupported();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipUnsupported(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipUnsupported(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipUnsupported(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipUnsupported(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipUnsupported(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipUnsupported(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipUnsupported(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipUnsupported(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipUnsupported(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipUnsupported(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipUnsupported(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipUnsupported() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbZipVersion : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipVersion();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipVersion(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipVersion(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipVersion(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipVersion(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipVersion(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipVersion(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipVersion(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipVersion(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipVersion(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipVersion(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipVersion(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipVersion() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbReadError : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbReadError();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbReadError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbReadError(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbReadError(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbReadError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbReadError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbReadError(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbReadError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbReadError(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbReadError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbReadError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbReadError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbReadError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbGzipBadCRC : public EAbGzipException
{
	typedef EAbGzipException inherited;
	
public:
	__fastcall EAbGzipBadCRC();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbGzipBadCRC(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbGzipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbGzipBadCRC(NativeUInt Ident)/* overload */ : EAbGzipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbGzipBadCRC(System::PResStringRec ResStringRec)/* overload */ : EAbGzipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbGzipBadCRC(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbGzipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbGzipBadCRC(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbGzipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbGzipBadCRC(const System::UnicodeString Msg, int AHelpContext) : EAbGzipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbGzipBadCRC(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbGzipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbGzipBadCRC(NativeUInt Ident, int AHelpContext)/* overload */ : EAbGzipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbGzipBadCRC(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbGzipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbGzipBadCRC(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbGzipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbGzipBadCRC(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbGzipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbGzipBadCRC() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbGzipBadFileSize : public EAbGzipException
{
	typedef EAbGzipException inherited;
	
public:
	__fastcall EAbGzipBadFileSize();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbGzipBadFileSize(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbGzipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbGzipBadFileSize(NativeUInt Ident)/* overload */ : EAbGzipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbGzipBadFileSize(System::PResStringRec ResStringRec)/* overload */ : EAbGzipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbGzipBadFileSize(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbGzipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbGzipBadFileSize(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbGzipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbGzipBadFileSize(const System::UnicodeString Msg, int AHelpContext) : EAbGzipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbGzipBadFileSize(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbGzipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbGzipBadFileSize(NativeUInt Ident, int AHelpContext)/* overload */ : EAbGzipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbGzipBadFileSize(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbGzipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbGzipBadFileSize(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbGzipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbGzipBadFileSize(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbGzipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbGzipBadFileSize() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbGzipInvalid : public EAbGzipException
{
	typedef EAbGzipException inherited;
	
public:
	__fastcall EAbGzipInvalid();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbGzipInvalid(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbGzipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbGzipInvalid(NativeUInt Ident)/* overload */ : EAbGzipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbGzipInvalid(System::PResStringRec ResStringRec)/* overload */ : EAbGzipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbGzipInvalid(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbGzipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbGzipInvalid(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbGzipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbGzipInvalid(const System::UnicodeString Msg, int AHelpContext) : EAbGzipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbGzipInvalid(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbGzipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbGzipInvalid(NativeUInt Ident, int AHelpContext)/* overload */ : EAbGzipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbGzipInvalid(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbGzipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbGzipInvalid(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbGzipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbGzipInvalid(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbGzipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbGzipInvalid() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbTarInvalid : public EAbTarException
{
	typedef EAbTarException inherited;
	
public:
	__fastcall EAbTarInvalid();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbTarInvalid(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbTarException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbTarInvalid(NativeUInt Ident)/* overload */ : EAbTarException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbTarInvalid(System::PResStringRec ResStringRec)/* overload */ : EAbTarException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbTarInvalid(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbTarException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbTarInvalid(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbTarException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbTarInvalid(const System::UnicodeString Msg, int AHelpContext) : EAbTarException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbTarInvalid(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbTarException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbTarInvalid(NativeUInt Ident, int AHelpContext)/* overload */ : EAbTarException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbTarInvalid(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbTarException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbTarInvalid(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbTarException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbTarInvalid(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbTarException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbTarInvalid() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbTarBadFileName : public EAbTarException
{
	typedef EAbTarException inherited;
	
public:
	__fastcall EAbTarBadFileName();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbTarBadFileName(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbTarException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbTarBadFileName(NativeUInt Ident)/* overload */ : EAbTarException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbTarBadFileName(System::PResStringRec ResStringRec)/* overload */ : EAbTarException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbTarBadFileName(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbTarException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbTarBadFileName(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbTarException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbTarBadFileName(const System::UnicodeString Msg, int AHelpContext) : EAbTarException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbTarBadFileName(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbTarException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbTarBadFileName(NativeUInt Ident, int AHelpContext)/* overload */ : EAbTarException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbTarBadFileName(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbTarException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbTarBadFileName(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbTarException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbTarBadFileName(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbTarException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbTarBadFileName() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbTarBadLinkName : public EAbTarException
{
	typedef EAbTarException inherited;
	
public:
	__fastcall EAbTarBadLinkName();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbTarBadLinkName(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbTarException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbTarBadLinkName(NativeUInt Ident)/* overload */ : EAbTarException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbTarBadLinkName(System::PResStringRec ResStringRec)/* overload */ : EAbTarException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbTarBadLinkName(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbTarException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbTarBadLinkName(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbTarException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbTarBadLinkName(const System::UnicodeString Msg, int AHelpContext) : EAbTarException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbTarBadLinkName(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbTarException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbTarBadLinkName(NativeUInt Ident, int AHelpContext)/* overload */ : EAbTarException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbTarBadLinkName(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbTarException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbTarBadLinkName(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbTarException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbTarBadLinkName(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbTarException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbTarBadLinkName() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbTarBadOp : public EAbTarException
{
	typedef EAbTarException inherited;
	
public:
	__fastcall EAbTarBadOp();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbTarBadOp(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbTarException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbTarBadOp(NativeUInt Ident)/* overload */ : EAbTarException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbTarBadOp(System::PResStringRec ResStringRec)/* overload */ : EAbTarException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbTarBadOp(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbTarException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbTarBadOp(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbTarException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbTarBadOp(const System::UnicodeString Msg, int AHelpContext) : EAbTarException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbTarBadOp(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbTarException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbTarBadOp(NativeUInt Ident, int AHelpContext)/* overload */ : EAbTarException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbTarBadOp(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbTarException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbTarBadOp(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbTarException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbTarBadOp(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbTarException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbTarBadOp() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbVMSInvalidOrigin : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbVMSInvalidOrigin(int Value);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbVMSInvalidOrigin(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSInvalidOrigin(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSInvalidOrigin(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSInvalidOrigin(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSInvalidOrigin(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbVMSInvalidOrigin(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbVMSInvalidOrigin(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSInvalidOrigin(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSInvalidOrigin(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSInvalidOrigin(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSInvalidOrigin(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbVMSInvalidOrigin() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbVMSErrorOpenSwap : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbVMSErrorOpenSwap(const System::UnicodeString Value);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbVMSErrorOpenSwap(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSErrorOpenSwap(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSErrorOpenSwap(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSErrorOpenSwap(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSErrorOpenSwap(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbVMSErrorOpenSwap(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbVMSErrorOpenSwap(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSErrorOpenSwap(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSErrorOpenSwap(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSErrorOpenSwap(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSErrorOpenSwap(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbVMSErrorOpenSwap() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbVMSSeekFail : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbVMSSeekFail(const System::UnicodeString Value);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbVMSSeekFail(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSSeekFail(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSSeekFail(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSSeekFail(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSSeekFail(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbVMSSeekFail(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbVMSSeekFail(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSSeekFail(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSSeekFail(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSSeekFail(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSSeekFail(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbVMSSeekFail() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbVMSReadFail : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbVMSReadFail(int Count, const System::UnicodeString Value);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbVMSReadFail(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSReadFail(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSReadFail(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSReadFail(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSReadFail(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbVMSReadFail(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbVMSReadFail(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSReadFail(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSReadFail(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSReadFail(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSReadFail(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbVMSReadFail() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbVMSWriteFail : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbVMSWriteFail(int Count, const System::UnicodeString Value);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbVMSWriteFail(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSWriteFail(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSWriteFail(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSWriteFail(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSWriteFail(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbVMSWriteFail(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbVMSWriteFail(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSWriteFail(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSWriteFail(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSWriteFail(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSWriteFail(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbVMSWriteFail() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbVMSWriteTooManyBytes : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbVMSWriteTooManyBytes(int Count);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbVMSWriteTooManyBytes(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSWriteTooManyBytes(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSWriteTooManyBytes(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSWriteTooManyBytes(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSWriteTooManyBytes(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbVMSWriteTooManyBytes(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbVMSWriteTooManyBytes(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSWriteTooManyBytes(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSWriteTooManyBytes(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSWriteTooManyBytes(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSWriteTooManyBytes(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbVMSWriteTooManyBytes() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbBBSReadTooManyBytes : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbBBSReadTooManyBytes(int Count);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbBBSReadTooManyBytes(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbBBSReadTooManyBytes(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbBBSReadTooManyBytes(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbBBSReadTooManyBytes(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbBBSReadTooManyBytes(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbBBSReadTooManyBytes(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbBBSReadTooManyBytes(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbBBSReadTooManyBytes(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbBBSReadTooManyBytes(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbBBSReadTooManyBytes(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbBBSReadTooManyBytes(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbBBSReadTooManyBytes() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbBBSSeekOutsideBuffer : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbBBSSeekOutsideBuffer();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbBBSSeekOutsideBuffer(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbBBSSeekOutsideBuffer(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbBBSSeekOutsideBuffer(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbBBSSeekOutsideBuffer(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbBBSSeekOutsideBuffer(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbBBSSeekOutsideBuffer(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbBBSSeekOutsideBuffer(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbBBSSeekOutsideBuffer(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbBBSSeekOutsideBuffer(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbBBSSeekOutsideBuffer(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbBBSSeekOutsideBuffer(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbBBSSeekOutsideBuffer() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbBBSInvalidOrigin : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbBBSInvalidOrigin();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbBBSInvalidOrigin(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbBBSInvalidOrigin(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbBBSInvalidOrigin(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbBBSInvalidOrigin(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbBBSInvalidOrigin(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbBBSInvalidOrigin(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbBBSInvalidOrigin(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbBBSInvalidOrigin(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbBBSInvalidOrigin(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbBBSInvalidOrigin(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbBBSInvalidOrigin(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbBBSInvalidOrigin() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbBBSWriteTooManyBytes : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbBBSWriteTooManyBytes(int Count);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbBBSWriteTooManyBytes(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbBBSWriteTooManyBytes(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbBBSWriteTooManyBytes(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbBBSWriteTooManyBytes(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbBBSWriteTooManyBytes(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbBBSWriteTooManyBytes(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbBBSWriteTooManyBytes(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbBBSWriteTooManyBytes(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbBBSWriteTooManyBytes(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbBBSWriteTooManyBytes(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbBBSWriteTooManyBytes(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbBBSWriteTooManyBytes() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbSWSNotEndofStream : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbSWSNotEndofStream();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbSWSNotEndofStream(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbSWSNotEndofStream(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbSWSNotEndofStream(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSWSNotEndofStream(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSWSNotEndofStream(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbSWSNotEndofStream(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbSWSNotEndofStream(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSWSNotEndofStream(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSWSNotEndofStream(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSWSNotEndofStream(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSWSNotEndofStream(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbSWSNotEndofStream() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbSWSSeekFailed : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbSWSSeekFailed();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbSWSSeekFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbSWSSeekFailed(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbSWSSeekFailed(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSWSSeekFailed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSWSSeekFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbSWSSeekFailed(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbSWSSeekFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSWSSeekFailed(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSWSSeekFailed(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSWSSeekFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSWSSeekFailed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbSWSSeekFailed() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbSWSWriteFailed : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbSWSWriteFailed();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbSWSWriteFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbSWSWriteFailed(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbSWSWriteFailed(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSWSWriteFailed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSWSWriteFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbSWSWriteFailed(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbSWSWriteFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSWSWriteFailed(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSWSWriteFailed(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSWSWriteFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSWSWriteFailed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbSWSWriteFailed() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbSWSInvalidOrigin : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbSWSInvalidOrigin();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbSWSInvalidOrigin(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbSWSInvalidOrigin(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbSWSInvalidOrigin(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSWSInvalidOrigin(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSWSInvalidOrigin(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbSWSInvalidOrigin(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbSWSInvalidOrigin(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSWSInvalidOrigin(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSWSInvalidOrigin(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSWSInvalidOrigin(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSWSInvalidOrigin(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbSWSInvalidOrigin() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbSWSInvalidNewOrigin : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbSWSInvalidNewOrigin();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbSWSInvalidNewOrigin(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbSWSInvalidNewOrigin(NativeUInt Ident)/* overload */ : EAbZipException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbSWSInvalidNewOrigin(System::PResStringRec ResStringRec)/* overload */ : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSWSInvalidNewOrigin(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSWSInvalidNewOrigin(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbSWSInvalidNewOrigin(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbSWSInvalidNewOrigin(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSWSInvalidNewOrigin(NativeUInt Ident, int AHelpContext)/* overload */ : EAbZipException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSWSInvalidNewOrigin(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSWSInvalidNewOrigin(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSWSInvalidNewOrigin(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbZipException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbSWSInvalidNewOrigin() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbNoCabinetDll : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbNoCabinetDll();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbNoCabinetDll(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbNoCabinetDll(NativeUInt Ident)/* overload */ : EAbCabException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbNoCabinetDll(System::PResStringRec ResStringRec)/* overload */ : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbNoCabinetDll(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbNoCabinetDll(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbNoCabinetDll(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbNoCabinetDll(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbNoCabinetDll(NativeUInt Ident, int AHelpContext)/* overload */ : EAbCabException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbNoCabinetDll(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbNoCabinetDll(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbNoCabinetDll(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbNoCabinetDll() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbFCIFileOpenError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIFileOpenError();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIFileOpenError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileOpenError(NativeUInt Ident)/* overload */ : EAbCabException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileOpenError(System::PResStringRec ResStringRec)/* overload */ : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileOpenError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileOpenError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIFileOpenError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIFileOpenError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileOpenError(NativeUInt Ident, int AHelpContext)/* overload */ : EAbCabException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileOpenError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileOpenError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileOpenError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIFileOpenError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbFCIFileReadError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIFileReadError();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIFileReadError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileReadError(NativeUInt Ident)/* overload */ : EAbCabException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileReadError(System::PResStringRec ResStringRec)/* overload */ : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileReadError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileReadError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIFileReadError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIFileReadError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileReadError(NativeUInt Ident, int AHelpContext)/* overload */ : EAbCabException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileReadError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileReadError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileReadError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIFileReadError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbFCIFileWriteError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIFileWriteError();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIFileWriteError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileWriteError(NativeUInt Ident)/* overload */ : EAbCabException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileWriteError(System::PResStringRec ResStringRec)/* overload */ : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileWriteError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileWriteError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIFileWriteError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIFileWriteError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileWriteError(NativeUInt Ident, int AHelpContext)/* overload */ : EAbCabException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileWriteError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileWriteError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileWriteError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIFileWriteError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbFCIFileCloseError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIFileCloseError();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIFileCloseError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileCloseError(NativeUInt Ident)/* overload */ : EAbCabException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileCloseError(System::PResStringRec ResStringRec)/* overload */ : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileCloseError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileCloseError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIFileCloseError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIFileCloseError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileCloseError(NativeUInt Ident, int AHelpContext)/* overload */ : EAbCabException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileCloseError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileCloseError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileCloseError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIFileCloseError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbFCIFileSeekError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIFileSeekError();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIFileSeekError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileSeekError(NativeUInt Ident)/* overload */ : EAbCabException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileSeekError(System::PResStringRec ResStringRec)/* overload */ : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileSeekError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileSeekError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIFileSeekError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIFileSeekError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileSeekError(NativeUInt Ident, int AHelpContext)/* overload */ : EAbCabException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileSeekError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileSeekError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileSeekError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIFileSeekError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbFCIFileDeleteError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIFileDeleteError();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIFileDeleteError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileDeleteError(NativeUInt Ident)/* overload */ : EAbCabException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileDeleteError(System::PResStringRec ResStringRec)/* overload */ : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileDeleteError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileDeleteError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIFileDeleteError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIFileDeleteError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileDeleteError(NativeUInt Ident, int AHelpContext)/* overload */ : EAbCabException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileDeleteError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileDeleteError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileDeleteError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIFileDeleteError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbFCIAddFileError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIAddFileError();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIAddFileError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIAddFileError(NativeUInt Ident)/* overload */ : EAbCabException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIAddFileError(System::PResStringRec ResStringRec)/* overload */ : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIAddFileError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIAddFileError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIAddFileError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIAddFileError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIAddFileError(NativeUInt Ident, int AHelpContext)/* overload */ : EAbCabException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIAddFileError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIAddFileError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIAddFileError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIAddFileError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbFCICreateError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCICreateError();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCICreateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCICreateError(NativeUInt Ident)/* overload */ : EAbCabException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCICreateError(System::PResStringRec ResStringRec)/* overload */ : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCICreateError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCICreateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCICreateError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCICreateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCICreateError(NativeUInt Ident, int AHelpContext)/* overload */ : EAbCabException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCICreateError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCICreateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCICreateError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCICreateError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbFCIFlushCabinetError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIFlushCabinetError();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIFlushCabinetError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFlushCabinetError(NativeUInt Ident)/* overload */ : EAbCabException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFlushCabinetError(System::PResStringRec ResStringRec)/* overload */ : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFlushCabinetError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFlushCabinetError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIFlushCabinetError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIFlushCabinetError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFlushCabinetError(NativeUInt Ident, int AHelpContext)/* overload */ : EAbCabException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFlushCabinetError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFlushCabinetError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFlushCabinetError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIFlushCabinetError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbFCIFlushFolderError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIFlushFolderError();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIFlushFolderError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFlushFolderError(NativeUInt Ident)/* overload */ : EAbCabException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFlushFolderError(System::PResStringRec ResStringRec)/* overload */ : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFlushFolderError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFlushFolderError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIFlushFolderError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIFlushFolderError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFlushFolderError(NativeUInt Ident, int AHelpContext)/* overload */ : EAbCabException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFlushFolderError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFlushFolderError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFlushFolderError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIFlushFolderError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbFDICopyError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFDICopyError();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFDICopyError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFDICopyError(NativeUInt Ident)/* overload */ : EAbCabException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbFDICopyError(System::PResStringRec ResStringRec)/* overload */ : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFDICopyError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFDICopyError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFDICopyError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFDICopyError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFDICopyError(NativeUInt Ident, int AHelpContext)/* overload */ : EAbCabException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFDICopyError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFDICopyError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFDICopyError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFDICopyError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbFDICreateError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFDICreateError();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFDICreateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFDICreateError(NativeUInt Ident)/* overload */ : EAbCabException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbFDICreateError(System::PResStringRec ResStringRec)/* overload */ : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFDICreateError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFDICreateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFDICreateError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFDICreateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFDICreateError(NativeUInt Ident, int AHelpContext)/* overload */ : EAbCabException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFDICreateError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFDICreateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFDICreateError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFDICreateError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbInvalidCabTemplate : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbInvalidCabTemplate();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbInvalidCabTemplate(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbInvalidCabTemplate(NativeUInt Ident)/* overload */ : EAbCabException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbInvalidCabTemplate(System::PResStringRec ResStringRec)/* overload */ : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbInvalidCabTemplate(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbInvalidCabTemplate(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbInvalidCabTemplate(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbInvalidCabTemplate(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbInvalidCabTemplate(NativeUInt Ident, int AHelpContext)/* overload */ : EAbCabException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbInvalidCabTemplate(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbInvalidCabTemplate(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbInvalidCabTemplate(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbInvalidCabTemplate() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbInvalidCabFile : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbInvalidCabFile();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbInvalidCabFile(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbInvalidCabFile(NativeUInt Ident)/* overload */ : EAbCabException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbInvalidCabFile(System::PResStringRec ResStringRec)/* overload */ : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbInvalidCabFile(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbInvalidCabFile(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbInvalidCabFile(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbInvalidCabFile(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbInvalidCabFile(NativeUInt Ident, int AHelpContext)/* overload */ : EAbCabException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbInvalidCabFile(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbInvalidCabFile(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbInvalidCabFile(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbCabException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbInvalidCabFile() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbFileTooLarge : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbFileTooLarge();
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFileTooLarge(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFileTooLarge(NativeUInt Ident)/* overload */ : EAbException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbFileTooLarge(System::PResStringRec ResStringRec)/* overload */ : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFileTooLarge(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFileTooLarge(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFileTooLarge(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFileTooLarge(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFileTooLarge(NativeUInt Ident, int AHelpContext)/* overload */ : EAbException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFileTooLarge(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFileTooLarge(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFileTooLarge(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EAbException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFileTooLarge() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall AbConvertException(System::Sysutils::Exception* const E, Abutils::TAbErrorClass &eClass, int &eErrorCode);
}	/* namespace Abexcept */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABEXCEPT)
using namespace Abexcept;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbexceptHPP
