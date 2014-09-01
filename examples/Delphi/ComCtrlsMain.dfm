object frmComCtrls: TfrmComCtrls
  Left = 0
  Top = 0
  Caption = 'AbComCtrls Example'
  ClientHeight = 524
  ClientWidth = 699
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Splitter1: TSplitter
    Left = 153
    Top = 0
    Height = 524
    ExplicitLeft = 360
    ExplicitTop = 240
    ExplicitHeight = 100
  end
  object AbTreeView: TAbTreeView
    Left = 0
    Top = 0
    Width = 153
    Height = 524
    Align = alLeft
    Indent = 19
    TabOrder = 0
    Items.NodeData = {
      0301000000200000000000000000000000FFFFFFFFFFFFFFFF00000000000000
      000000000001015C00}
    Archive = AbUnZipper
    ListView = AbListView
  end
  object Panel1: TPanel
    Left = 156
    Top = 0
    Width = 543
    Height = 524
    Align = alClient
    Caption = 'Panel1'
    TabOrder = 1
    ExplicitLeft = 264
    ExplicitTop = 272
    ExplicitWidth = 185
    ExplicitHeight = 41
    object Splitter2: TSplitter
      Left = 1
      Top = 335
      Width = 541
      Height = 3
      Cursor = crVSplit
      Align = alBottom
      ExplicitLeft = 539
      ExplicitTop = 1
      ExplicitWidth = 337
    end
    object Memo1: TMemo
      Left = 1
      Top = 338
      Width = 541
      Height = 185
      Align = alBottom
      Lines.Strings = (
        'Memo1')
      TabOrder = 0
      ExplicitLeft = 354
      ExplicitTop = 1
      ExplicitWidth = 522
    end
    object AbListView: TAbListView
      Left = 1
      Top = 1
      Width = 541
      Height = 334
      Align = alClient
      Archive = AbUnZipper
      TabOrder = 1
      TreeView = AbTreeView
      OnSelectItem = ListViewSelectItem
      ExplicitLeft = 328
      ExplicitTop = 112
      ExplicitWidth = 250
      ExplicitHeight = 150
    end
  end
  object AbUnZipper: TAbUnZipper
    Left = 96
    Top = 24
  end
  object MainMenu: TMainMenu
    Left = 16
    Top = 24
    object mnuFile: TMenuItem
      Caption = 'File'
      object mnuOpenArchive: TMenuItem
        Caption = 'Open...'
        OnClick = OpenArchiveClick
      end
    end
    object mnuView: TMenuItem
      Caption = 'View'
      object mnuAllFiles: TMenuItem
        AutoCheck = True
        Caption = 'All Files (WinZip Style)'
        GroupIndex = 1
        RadioItem = True
        OnClick = FolderStyleClick
      end
      object mnuFilesByFolder: TMenuItem
        AutoCheck = True
        Caption = 'Files By Folder (Explorer Style)'
        Checked = True
        GroupIndex = 1
        RadioItem = True
        OnClick = FolderStyleClick
      end
      object N1: TMenuItem
        Caption = '-'
        GroupIndex = 1
      end
      object mnuIcons: TMenuItem
        AutoCheck = True
        Caption = 'Icons'
        Checked = True
        GroupIndex = 2
        RadioItem = True
        OnClick = ViewStyleClick
      end
      object mnuList: TMenuItem
        AutoCheck = True
        Caption = 'List'
        GroupIndex = 2
        RadioItem = True
        OnClick = ViewStyleClick
      end
      object mnuDetails: TMenuItem
        AutoCheck = True
        Caption = 'Details'
        GroupIndex = 2
        RadioItem = True
        OnClick = ViewStyleClick
      end
    end
  end
  object OpenDialog: TOpenDialog
    Filter = 'Archive Files|*.zip;*.tar;*.gz;*.tgz;*.bz2;*.tbz'
    Options = [ofEnableSizing]
    Left = 56
    Top = 24
  end
end
