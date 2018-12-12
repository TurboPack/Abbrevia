// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbFciFdi.pas' rev: 32.00 (Windows)

#ifndef AbfcifdiHPP
#define AbfcifdiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <AbUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abfcifdi
{
//-- forward type declarations -----------------------------------------------
struct CabErrorRecord;
struct FDICabInfo;
struct FCICabInfo;
struct FDINotification;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM FDIError : unsigned char { FDIError_None, FDIError_Cabinet_Not_Found, FDIError_Not_A_Cabinet, FDIError_Unknown_Cabinet_Version, FDIError_Corrupt_Cabinet, FDIError_Alloc_Fail, FDIError_Bad_Compr_Type, FDIError_MDI_Fail, FDIError_Target_File, FDIError_Reserve_Mismatch, FDIError_Wrong_Cabinet, FDIError_User_Abort };

enum DECLSPEC_DENUM FCIError : unsigned char { FCIError_NONE, FCIError_Open_SRC, FCIError_Read_SRC, FCIError_Alloc_Fail, FCIError_Temp_File, FCIError_Bad_Compr_Type, FCIError_Cab_File, FCIError_User_Abort, FCIERRor_MCI_Fail };

enum DECLSPEC_DENUM FDINotificationType : unsigned char { FDINT_Cabinet_Info, FDINT_Partial_File, FDINT_Copy_File, FDINT_Close_File_Info, FDINT_Next_Cabinet, FDINT_Enumerate };

typedef CabErrorRecord *PCabErrorRecord;

struct DECLSPEC_DRECORD CabErrorRecord
{
public:
	int ErrorCode;
	int ErrorType;
	System::LongBool ErrorPresent;
};


typedef FDICabInfo *PFDICabInfo;

struct DECLSPEC_DRECORD FDICabInfo
{
public:
	int cbCabinet;
	System::Word cFolders;
	System::Word cFiles;
	System::Word setID;
	System::Word iCabinet;
	System::LongBool fReserve;
	System::LongBool hasprev;
	System::LongBool hasnext;
};


typedef FCICabInfo *PFCICabInfo;

struct DECLSPEC_DRECORD FCICabInfo
{
public:
	int cb;
	int cbFolderThresh;
	int cbReserveCFHeader;
	int cbReserveCFFolder;
	int cbReserveCFData;
	int iCab;
	int iDisk;
	int fFailOnIncompressible;
	System::Word setID;
	System::StaticArray<char, 256> szDisk;
	System::StaticArray<char, 256> szCab;
	System::StaticArray<char, 256> szCabPath;
};


typedef FDINotification *PFDINotification;

struct DECLSPEC_DRECORD FDINotification
{
public:
	int cb;
	char *psz1;
	char *psz2;
	char *psz3;
	void *pv;
	NativeInt hf;
	System::Word date;
	System::Word time;
	System::Word attribs;
	System::Word setID;
	System::Word iCabinet;
	System::Word iFolder;
	FDIError fdie;
};


typedef void * HFDI;

typedef void * HFCI;

typedef void * FARPROC;

typedef void * __cdecl (*TFDICreate)(void * pfnalloc, void * pfnfree, void * pfnopen, void * pfnread, void * pfnwrite, void * pfnclose, void * pfnseek, int cpuType, PCabErrorRecord pError);

typedef System::LongBool __cdecl (*TFDIIsCabinet)(void * hfdi, NativeInt hf, PFDICabInfo pfdici);

typedef System::LongBool __cdecl (*TFDICopy)(void * hfdi, char * pszCabinet, char * pszCabPath, int flags, void * pfnfdin, void * pfnfdid, void * Archive);

typedef System::LongBool __cdecl (*TFDIDestroy)(void * hfdi);

typedef void * __cdecl (*TFCICreate)(PCabErrorRecord pError, void * pfnfcifp, void * pfnalloc, void * pfnfree, void * pfnopen, void * pfnread, void * pfnwrite, void * pfnclose, void * pfnseek, void * pfndelete, void * pfnfcigtf, PFCICabInfo pccab, void * Archive);

typedef System::LongBool __cdecl (*TFCIAddFile)(void * hfci, char * pszFilePath, char * pszFileName, System::LongBool fExecute, void * pfnfcignc, void * pfnfcis, void * pfnfcigoi, System::Word typeCompress);

typedef System::LongBool __cdecl (*TFCIFlushCabinet)(void * hfci, System::LongBool fGetNextCab, void * pfnfcignc, void * pfnfcis);

typedef System::LongBool __cdecl (*TFCIFlushFolder)(void * hfci, void * pfnfcignc, void * pfnfcis);

typedef System::LongBool __cdecl (*TFCIDestroy)(void * hfci);

//-- var, const, procedure ---------------------------------------------------
#define CabinetDLL L"cabinet.dll"
static const System::Int8 cpuUnknown = System::Int8(-1);
static const System::Int8 cpu80286 = System::Int8(0x0);
static const System::Int8 cpu80386 = System::Int8(0x1);
static const System::Int8 cpuDefault = System::Int8(-1);
extern DELPHI_PACKAGE void * __fastcall FDICreate(void * pfnalloc, void * pfnfree, void * pfnopen, void * pfnread, void * pfnwrite, void * pfnclose, void * pfnseek, int cpuType, PCabErrorRecord pError);
extern DELPHI_PACKAGE System::LongBool __fastcall FDIIsCabinet(void * hfdi, NativeInt hf, PFDICabInfo pfdici);
extern DELPHI_PACKAGE System::LongBool __fastcall FDICopy(void * hfdi, char * pszCabinet, char * pszCabPath, int flags, void * pfnfdin, void * pfnfdid, void * Archive);
extern DELPHI_PACKAGE System::LongBool __fastcall FDIDestroy(void * hfdi);
extern DELPHI_PACKAGE void * __fastcall FCICreate(PCabErrorRecord pError, void * pfnfcifp, void * pfnalloc, void * pfnfree, void * pfnopen, void * pfnread, void * pfnwrite, void * pfnclose, void * pfnseek, void * pfndelete, void * pfnfcigtf, PFCICabInfo pccab, void * Archive);
extern DELPHI_PACKAGE System::LongBool __fastcall FCIAddFile(void * hfci, char * pszFilePath, char * pszFileName, System::LongBool fExecute, void * pfnfcignc, void * pfnfcis, void * pfnfcigoi, System::Word typeCompress);
extern DELPHI_PACKAGE System::LongBool __fastcall FCIFlushCabinet(void * hfci, System::LongBool fGetNextCab, void * pfnfcignc, void * pfnfcis);
extern DELPHI_PACKAGE System::LongBool __fastcall FCIFlushFolder(void * hfci, void * pfnfcignc, void * pfnfcis);
extern DELPHI_PACKAGE System::LongBool __fastcall FCIDestroy(void * hfci);
}	/* namespace Abfcifdi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABFCIFDI)
using namespace Abfcifdi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbfcifdiHPP
