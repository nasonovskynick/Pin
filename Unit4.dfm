object Form4: TForm4
  Left = 0
  Top = 0
  Caption = #1042#1099#1073#1086#1088' '#1090#1080#1087#1072' '#1087#1080#1085#1072
  ClientHeight = 160
  ClientWidth = 373
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 16
  object Label1: TLabel
    Left = 24
    Top = 35
    Width = 109
    Height = 16
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1090#1080#1087' '#1087#1080#1085#1072':'
  end
  object ComboBox1: TComboBox
    Left = 139
    Top = 32
    Width = 206
    Height = 24
    TabOrder = 0
    Items.Strings = (
      'bold'
      'star'
      'press fit'
      'harpoon')
  end
  object Button1: TButton
    Left = 8
    Top = 96
    Width = 161
    Height = 41
    Caption = #1055#1088#1080#1085#1103#1090#1100' '#1079#1085#1072#1095#1077#1085#1080#1077
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 184
    Top = 96
    Width = 161
    Height = 41
    Caption = #1054#1090#1084#1077#1085#1072
    TabOrder = 2
    OnClick = Button2Click
  end
end
