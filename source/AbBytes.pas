unit AbBytes;

interface

type
  TAbBytes = record
  public
    class function AsString(ASource: Pointer): string; static;
    class function StrLCopy(ADest: PByte; const ASource: string; AMaxLen: Cardinal): PByte; static;
    class function StrLen(ABuffer: Pointer): Cardinal; static;
    class function StrPCopy(ADest: PByte; const ASource: string): PByte; static;
    class function StrPLCopy(ADest: Pointer; const ASource: string; AMaxLen: Cardinal): PByte; static;
  end;

implementation

uses
  System.SysUtils;

{ TAbBytes }

class function TAbBytes.AsString(ASource: Pointer): string;
var
  iLen: Integer;
  pBytes: TBytes;
begin
  iLen := StrLen(ASource);
  SetLength(pBytes, iLen);
  Move(ASource^, pBytes[0], iLen);
  Result := TEncoding.ANSI.GetString(pBytes);
end;

class function TAbBytes.StrLCopy(ADest: PByte; const ASource: string; AMaxLen: Cardinal): PByte;
var
  iLen: Cardinal;
  pBytes: TBytes;
begin
  Result := ADest;
  pBytes := TEncoding.ANSI.GetBytes(ASource);
  iLen := Length(pBytes);
  if iLen > AMaxLen then
    iLen := AMaxLen;
  Move(pBytes[0], ADest^, iLen);
  ADest[iLen] := 0;
end;

class function TAbBytes.StrLen(ABuffer: Pointer): Cardinal;
var
  pBuffer: PByte;
begin
  pBuffer := PByte(ABuffer);
  for Result := 0 to MaxInt do
  begin
    if pBuffer^ <> 0 then
      Inc(pBuffer)
    else
      Break;
  end;
end;

class function TAbBytes.StrPCopy(ADest: PByte; const ASource: string): PByte;
begin
  Result := StrLCopy(ADest, ASource, Length(ASource));
end;

class function TAbBytes.StrPLCopy(ADest: Pointer; const ASource: string; AMaxLen: Cardinal): PByte;
begin
  Result := StrLCopy(ADest, ASource, AMaxLen);
end;

end.
