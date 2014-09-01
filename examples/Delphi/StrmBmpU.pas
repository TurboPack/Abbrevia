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
{* ABBREVIA: STRMBMPU.DPR                                *}
{* Copyright (c) TurboPower Software Co 1997             *}
{* All rights reserved.                                  *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit StrmBmpU;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, ExtCtrls;

type
  TForm1 = class(TForm)
    Image1: TImage;
    Button1: TButton;
    Memo1: TMemo;
    procedure Button1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

uses
  AbUnzPrc,
  AbZipPrc;

{$R *.DFM}

procedure TForm1.Button1Click(Sender: TObject);
var
  UStrm  : TMemoryStream;
  CStrm  : TMemoryStream;
  Image2 : TImage;
begin
  { Create the compressed stream and the uncompressed stream. }
  UStrm := TMemoryStream.Create;
  CStrm := TMemoryStream.Create;

  { Copy the bitmap image to the memory stream. }
  Image1.Picture.Bitmap.SaveToStream(UStrm);

  { Set the stream position to the beginning. }
  UStrm.Position := 0;

  { Compress the stream. }
  DeflateStream(UStrm, CStrm);

  { Remove all data from the uncompressed stream. }
  UStrm.Clear;

  { Reset the compressed stream back to the beginning. }
  CStrm.Position := 0;

  { Decompress the stream back to the original uncompressed }
  { stream and then reset the stream position back to 0.    }
  InflateStream(CStrm, UStrm);
  UStrm.Position := 0;

  { Now create a new TImage. Make it the same size as the }
  { original image but move it down and to the left.      }
  Image2 := TImage.Create(Self);
  Image2.Top := Image1.Top + 20;
  Image2.Left := Image1.Left + 20;
  Image2.Width := Image1.Width;
  Image2.Height := Image1.Height;
  Image2.Parent := Self;

  { Delete the original TImage. }
  Image1.Free;

  { Load the new bitmap with the data from the stream }
  { that contains the decompressed image. }
  Image2.Picture.Bitmap.LoadFromStream(UStrm);

  { Free the memory streams. }
  UStrm.Free;
  CStrm.Free;
end;

end.
