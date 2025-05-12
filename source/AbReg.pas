(* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is TurboPower Abbrevia
 *
 * The Initial Developer of the Original Code is
 * TurboPower Software
 *
 * Portions created by the Initial Developer are Copyright (C) 1997-2002
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * ***** END LICENSE BLOCK ***** *)

{*********************************************************}
{* ABBREVIA: AbReg.pas                                   *}
{*********************************************************}
{* ABBREVIA: Registrations (VCL)                         *}
{*********************************************************}

unit AbReg;

{$I AbDefine.inc}

{$R AbReg.res}

interface

uses
  Classes,
  {$IFDEF MSWINDOWS}
  AbCBrows, AbCabExt, AbCabMak, AbCabKit,
  {$ENDIF}
  AbZBrows, AbUnzper, AbZipper, AbZipKit, AbSelfEx;

procedure Register;

implementation

uses
  AbUtils,
  AbPeDir,
  AbPeFn,
  AbPePass,
  AbPeVer,
  AbPeCol,
  DesignIntf,
  DesignEditors,
  SysUtils;

procedure Register;
begin
{$IFNDEF FPC}
  RegisterPropertyEditor( TypeInfo( string ), TAbZipBrowser, 'FileName',
                          TAbFileNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipper, 'FileName',
                          TAbFileNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbUnZipper, 'FileName',
                          TAbFileNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipKit, 'FileName',
                          TAbFileNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipBrowser, 'LogFile',
                          TAbLogNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipper, 'LogFile',
                          TAbLogNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbUnZipper, 'LogFile',
                          TAbLogNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipKit, 'LogFile',
                          TAbLogNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbMakeSelfExe, 'SelfExe',
                          TAbExeNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbMakeSelfExe, 'StubExe',
                          TAbExeNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbMakeSelfExe, 'ZipFile',
                          TAbFileNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipBrowser, 'BaseDirectory',
                          TAbDirectoryProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipper, 'BaseDirectory',
                          TAbDirectoryProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbUnZipper, 'BaseDirectory',
                          TAbDirectoryProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipKit, 'BaseDirectory',
                          TAbDirectoryProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipBrowser, 'TempDirectory',
                          TAbDirectoryProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipper, 'TempDirectory',
                          TAbDirectoryProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbUnZipper, 'TempDirectory',
                          TAbDirectoryProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipKit, 'TempDirectory',
                          TAbDirectoryProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipBrowser, 'Version',
                          TAbVersionProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipper, 'Version',
                          TAbVersionProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbUnZipper, 'Version',
                          TAbVersionProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipKit, 'Version',
                          TAbVersionProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbMakeSelfExe, 'Version',
                          TAbVersionProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipBrowser, 'Password',
                          TAbPasswordProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipper, 'Password',
                          TAbPasswordProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbUnZipper, 'Password',
                          TAbPasswordProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbZipKit, 'Password',
                          TAbPasswordProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbCabBrowser, 'FileName',
                          TAbCabNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbMakeCab, 'FileName',
                          TAbCabNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbCabExtractor, 'FileName',
                          TAbCabNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbCabKit, 'FileName',
                          TAbCabNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbCabBrowser, 'BaseDirectory',
                          TAbDirectoryProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbMakeCab, 'BaseDirectory',
                          TAbDirectoryProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbCabExtractor, 'BaseDirectory',
                          TAbDirectoryProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbCabKit, 'BaseDirectory',
                          TAbDirectoryProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbCabBrowser, 'LogFile',
                          TAbLogNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbMakeCab, 'LogFile',
                          TAbLogNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbCabExtractor, 'LogFile',
                          TAbLogNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbCabKit, 'LogFile',
                          TAbLogNameProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbCabBrowser, 'TempDirectory',
                          TAbDirectoryProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbMakeCab, 'TempDirectory',
                          TAbDirectoryProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbCabExtractor, 'TempDirectory',
                          TAbDirectoryProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbCabKit, 'TempDirectory',
                          TAbDirectoryProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbCabBrowser, 'Version',
                          TAbVersionProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbMakeCab, 'Version',
                          TAbVersionProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbCabExtractor, 'Version',
                          TAbVersionProperty );
  RegisterPropertyEditor( TypeInfo( string ), TAbCabKit, 'Version',
                          TAbVersionProperty );
{$ENDIF}

  RegisterComponents( 'Abbrevia',
                      [ TAbZipBrowser,
                        TAbUnzipper,
                        TAbZipper,
                        TAbZipKit,
                        {$IFDEF MSWINDOWS}
                        TAbCabBrowser,
                        TAbCabExtractor,
                        TAbMakeCab,
                        TAbCabKit,
                        {$ENDIF}
                        TAbMakeSelfExe ]);
end;

end.
