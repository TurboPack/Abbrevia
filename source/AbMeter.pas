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
{* ABBREVIA: AbMeter.pas                                 *}
{*********************************************************}
{* ABBREVIA: Progress meter                              *}
{*   Use AbQMeter.pas for CLX                            *}
{*********************************************************}

unit AbMeter;

{$I AbDefine.inc}

interface

uses
  Classes,
  Windows, Controls, Graphics, Forms, ExtCtrls, AbBrowse;

type
  TAbMeterOrientation = (moHorizontal, moVertical);

  TAbCustomMeter = class(TGraphicControl, IAbProgressMeter)
  {.Z+}
  protected {private}
    {property variables}
    FBorderStyle   : TBorderStyle;
    FCtl3D         : Boolean;
    FOrientation   : TAbMeterOrientation;
    FPercent       : Integer;
  	FTickMarks     : Byte;
    FUsedColor     : TColor;
    FUnusedColor   : TColor;

    {internal methods}
    function  GetVersion : string;
    procedure Paint;
      override;
    procedure SetBorderStyle(const Value : TBorderStyle);
    procedure SetCtl3D(const Value : Boolean);
    procedure SetOrientation(const O : TAbMeterOrientation);
    procedure SetTickMarks(const Value: Byte);
    procedure SetUnusedColor(const C : TColor);
    procedure SetUsedColor(const C : TColor);
    procedure SetVersion(Value : string);
    property Version : string
      read  GetVersion write SetVersion stored False;

  {.Z-}
  public {methods}
    constructor Create(AOwner : TComponent);
      override;
    procedure DoProgress(Progress : Byte);
    procedure Reset;

  public {properties}
    property BorderStyle : TBorderStyle
      read FBorderStyle write SetBorderStyle default bsSingle;
    property Ctl3D : Boolean
      read FCtl3D write SetCtl3D default True;
    property Orientation : TAbMeterOrientation
      read FOrientation write SetOrientation;
    property TickMarks: Byte
		  read FTickMarks write SetTickMarks default 10;
    property UnusedColor : TColor
      read FUnusedColor write SetUnusedColor;
    property UsedColor : TColor
      read FUsedColor write SetUsedColor;
  end;

  TAbMeter = class(TAbCustomMeter)
  published
    property Anchors;
    property Constraints;
    property Align;
    property BorderStyle;
    property Ctl3D;
    property Font;
    property OnClick;
    property OnDblClick;
    property OnMouseDown;
    property OnMouseMove;
    property OnMouseUp;
    property Orientation;
    property ParentFont;
    property ParentShowHint;
    property ShowHint;
    property TickMarks;
    property UnusedColor;
    property UsedColor;
    property Version;
    property Visible;
  end;
  {.Z+}


implementation

uses
  Types, AbConst;

{ == TAbCustomMeter ======================================================== }
constructor TAbCustomMeter.Create(AOwner : TComponent);
begin
  inherited Create(AOwner);
  if NewStyleControls then
    ControlStyle := ControlStyle + [csOpaque]
  else
    ControlStyle := ControlStyle + [csOpaque, csFramed];

  FBorderStyle := bsSingle;
  FCtl3D       := True;
  FOrientation := moHorizontal;
  FTickMarks   := 10;
  FUnusedColor := clBtnFace;
  FUsedColor   := clNavy;
  Width        := 150;
  Height       := 16;
end;
{ -------------------------------------------------------------------------- }
function TAbCustomMeter.GetVersion : string;
begin
  Result := AbVersionS;
end;
{ -------------------------------------------------------------------------- }
procedure TAbCustomMeter.DoProgress(Progress : Byte);
begin
  if (Progress <> FPercent) then begin
    FPercent := Progress;
    if (FPercent >= 100) then
      FPercent := 0;
    Refresh;
    Application.ProcessMessages;
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TAbCustomMeter.Paint;
const
  VSpace = 2;
  HSpace = 1;
  LSpace = 1;
  RSpace = 1;
var
  ClRect, R  : TRect;
  ClWidth    : Integer;
  ClHeight   : Integer;
  BlockWidth : Integer;
  BlockCount : Integer;
  i : Integer;
begin
  ClRect := ClientRect;

  ClWidth := ClRect.Right - CLRect.Left + 1;
  ClHeight := ClRect.Bottom - ClRect.Top + 1;

  if (Orientation = moHorizontal) then
    BlockWidth := ((ClWidth - LSpace - RSpace - (9 * VSpace)) div FTickMarks) + 1
  else
    BlockWidth := ((ClHeight - LSpace - RSpace - (9 * HSpace)) div FTickMarks) + 1;
  BlockCount  := FPercent div FTickMarks;

  if not Assigned((Canvas as TControlCanvas).Control) then begin
    TControlCanvas(Canvas).Control := self;
  end;
  with Canvas do begin
    Brush.Color := FUnusedColor;
    FillRect(Rect(ClRect.Left, ClRect.Top, ClRect.Left + ClWidth - 1,
      ClRect.Top + ClHeight - 1));
    Brush.Color := FUsedColor;
    if (BlockCount > 0) then begin
      if (Orientation = moHorizontal) then begin
        R.Top := ClRect.Top + HSpace;
        R.Bottom := ClRect.Bottom - HSpace;
        for i := 0 to Pred(BlockCount) do begin
          R.Left := ClRect.Left + LSpace + (i * VSpace) +
            (i * BlockWidth);
          R.Right := R.Left + BlockWidth;
          FillRect(R);
        end;
      end else begin {moVertical}
        R.Left := ClRect.Left + VSpace;
        R.Right := ClRect.Right - VSpace;
        for i := 0 to Pred(BlockCount) do begin
          R.Bottom := ClRect.Bottom - LSpace - (i * HSpace) -
            (i * BlockWidth);
          R.Top := R.Bottom - BlockWidth;
          FillRect(R);
        end;
      end;
    end;
  end;
  if (BorderStyle <> bsNone) then begin
    if Ctl3D then
      Frame3D(Canvas, ClRect, clBtnShadow, clBtnHighlight, 1)
    else
      Frame3D(Canvas, ClRect, clBlack, clBlack, 1);
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TAbCustomMeter.Reset;
begin
  DoProgress(0);
end;
{ -------------------------------------------------------------------------- }
procedure TAbCustomMeter.SetBorderStyle(const Value : TBorderStyle);
begin
  if (Value <> FBorderStyle) then begin
    FBorderStyle := Value;
    Invalidate;
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TAbCustomMeter.SetCtl3D(const Value : Boolean);
begin
  if (Value <> FCtl3D) then begin
    FCtl3D := Value;
    Invalidate;
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TAbCustomMeter.SetOrientation(const O : TAbMeterOrientation);
var
  Temp : Integer;
begin
  if (O <> FOrientation) then begin
    FOrientation := O;
    if not (csLoading in ComponentState) then begin
      Temp := Width;
      Width := Height;
      Height := Temp;
    end;
    Invalidate;
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TAbCustomMeter.SetTickMarks(const Value: Byte);
begin
	if Value <= 0 then
	  FTickMarks := 10
	else
	  FTickMarks := Value;
end;
{ -------------------------------------------------------------------------- }
procedure TAbCustomMeter.SetUnusedColor(const C : TColor);
begin
  if (C <> FUnusedColor) then begin
    FUnusedColor := C;
    Invalidate;
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TAbCustomMeter.SetUsedColor(const C : TColor);
begin
  if (C <> FUsedColor) then begin
    FUsedColor := C;
    Invalidate;
  end;
end;
{ -------------------------------------------------------------------------- }
procedure TAbCustomMeter.SetVersion(Value : string);
begin
  {NOP}
end;

end.
