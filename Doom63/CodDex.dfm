object Dex: TDex
  Left = 839
  Top = 415
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Dic'#539'ionar'
  ClientHeight = 441
  ClientWidth = 630
  Color = 10655613
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poScreenCenter
  TextHeight = 15
  object Bunvenit: TStaticText
    Left = 32
    Top = 48
    Width = 271
    Height = 27
    Caption = 'Bun venit la dic'#539'ionarul Doom63!'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -17
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
  end
  object Sinonim: TRadioButton
    Left = 408
    Top = 131
    Width = 185
    Height = 57
    Cursor = crHandPoint
    Caption = 'Sinonim'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
  end
  object Antonim: TRadioButton
    Left = 408
    Top = 178
    Width = 185
    Height = 57
    Cursor = crHandPoint
    Caption = 'Antonim'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
  end
  object Cuvantdorit: TStaticText
    Left = 32
    Top = 102
    Width = 172
    Height = 27
    Caption = 'Introduce'#539'i cuv'#226'ntul!'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -17
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
  end
  object Inapoititlu: TButton
    Left = 456
    Top = 408
    Width = 160
    Height = 25
    Cursor = crHandPoint
    Caption = #206'napoi la titlu'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    OnClick = InapoititluClick
  end
  object Cuvantales: TEdit
    Left = 32
    Top = 144
    Width = 265
    Height = 31
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
  end
  object Iesiredex: TButton
    Left = 456
    Top = 361
    Width = 160
    Height = 25
    Cursor = crHandPoint
    Caption = 'Ie'#537'ire'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
    OnClick = IesiredexClick
  end
  object Cauta: TButton
    Left = 408
    Top = 60
    Width = 185
    Height = 65
    Cursor = crHandPoint
    Caption = 'Caut'#259
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 7
    OnClick = CautaClick
  end
  object Rezultat: TMemo
    Left = 32
    Top = 224
    Width = 289
    Height = 162
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    Lines.Strings = (
      'Rezultat')
    ParentFont = False
    ReadOnly = True
    TabOrder = 8
  end
  object sinonimAles: TButton
    Left = 408
    Top = 241
    Width = 185
    Height = 25
    Caption = 'Sinonim'
    TabOrder = 9
    OnClick = SinonimalesClick
  end
  object Antonimales: TButton
    Left = 408
    Top = 287
    Width = 185
    Height = 25
    Caption = 'Antonim'
    TabOrder = 10
    OnClick = AntonimalesClick
  end
end
