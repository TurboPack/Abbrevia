{ This file was automatically created by Lazarus. Do not edit!
  This source is only used to compile and install the package.
 }

unit Abbrevia; 

interface

uses
  AbArcTyp, AbBase, AbBitBkt, AbBrowse, AbBzip2, AbBzip2Typ, AbCharset, 
  AbConst, AbDfBase, AbDfCryS, AbDfDec, AbDfEnc, AbDfHufD, AbDfInW, AbDfOutW, 
  AbDfPkMg, AbDfStrm, AbDfXlat, AbExcept, AbGzTyp, AbReg, AbResString, 
  AbSelfEx, AbSpanSt, AbSWStm, AbTarTyp, AbUnzOutStm, AbUnzper, AbUnzPrc, 
  AbUtils, AbVMStrm, AbZBrows, AbZipKit, AbZipper, AbZipPrc, AbZipTyp, 
  AbZLTyp, LazarusPackageIntf;

implementation

procedure Register; 
begin
  RegisterUnit('AbReg', @AbReg.Register); 
end; 

initialization
  RegisterPackage('Abbrevia', @Register); 
end.
