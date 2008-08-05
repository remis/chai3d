object Form1: TForm1
  Left = 343
  Top = 371
  BorderStyle = bsDialog
  Caption = 'Board example'
  ClientHeight = 423
  ClientWidth = 568
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label2: TLabel
    Left = 328
    Top = 144
    Width = 94
    Height = 20
    Caption = 'Board Status'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object GroupBox3: TGroupBox
    Left = 16
    Top = 2
    Width = 273
    Height = 241
    Caption = 'Encoders'
    TabOrder = 4
    object Button3: TButton
      Left = 24
      Top = 32
      Width = 99
      Height = 25
      Caption = 'Get encoder 0'
      TabOrder = 0
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 24
      Top = 56
      Width = 99
      Height = 25
      Caption = 'Get encoder 1'
      TabOrder = 1
      OnClick = Button4Click
    end
    object Button5: TButton
      Left = 24
      Top = 80
      Width = 99
      Height = 25
      Caption = 'Get encoder 2'
      TabOrder = 2
      OnClick = Button5Click
    end
    object Button6: TButton
      Left = 24
      Top = 104
      Width = 99
      Height = 25
      Caption = 'Get encoder 3'
      TabOrder = 3
      OnClick = Button6Click
    end
    object Button7: TButton
      Left = 24
      Top = 128
      Width = 99
      Height = 25
      Caption = 'Get encoder 4'
      TabOrder = 4
      OnClick = Button7Click
    end
    object Button8: TButton
      Left = 24
      Top = 152
      Width = 99
      Height = 25
      Caption = 'Get encoder 5'
      TabOrder = 5
      OnClick = Button8Click
    end
    object Button9: TButton
      Left = 24
      Top = 176
      Width = 99
      Height = 25
      Caption = 'Get encoder 6'
      TabOrder = 6
      OnClick = Button9Click
    end
    object Button10: TButton
      Left = 24
      Top = 200
      Width = 99
      Height = 25
      Caption = 'Get encoder 7'
      TabOrder = 7
      OnClick = Button10Click
    end
    object Edit2: TEdit
      Left = 128
      Top = 34
      Width = 121
      Height = 21
      TabOrder = 8
    end
    object Edit3: TEdit
      Left = 128
      Top = 59
      Width = 121
      Height = 21
      TabOrder = 9
    end
    object Edit4: TEdit
      Left = 128
      Top = 84
      Width = 121
      Height = 21
      TabOrder = 10
    end
    object Edit5: TEdit
      Left = 128
      Top = 108
      Width = 121
      Height = 21
      TabOrder = 11
    end
    object Edit6: TEdit
      Left = 128
      Top = 132
      Width = 121
      Height = 21
      TabOrder = 12
    end
    object Edit7: TEdit
      Left = 128
      Top = 156
      Width = 121
      Height = 21
      TabOrder = 13
    end
    object Edit8: TEdit
      Left = 128
      Top = 180
      Width = 121
      Height = 21
      TabOrder = 14
    end
    object Edit9: TEdit
      Left = 128
      Top = 204
      Width = 121
      Height = 21
      TabOrder = 15
    end
  end
  object Button1: TButton
    Left = 336
    Top = 32
    Width = 137
    Height = 41
    Caption = 'Start Servotogo Board'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 336
    Top = 72
    Width = 137
    Height = 41
    Caption = 'Start Sensoray626 Board'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Edit1: TEdit
    Left = 328
    Top = 168
    Width = 217
    Height = 21
    TabOrder = 2
  end
  object GroupBox1: TGroupBox
    Left = 24
    Top = 248
    Width = 537
    Height = 169
    Caption = 'DAC'
    TabOrder = 3
    object Label1: TLabel
      Left = 264
      Top = 77
      Width = 92
      Height = 20
      Caption = 'Volts to DAC'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Button11: TButton
      Left = 16
      Top = 48
      Width = 99
      Height = 25
      Caption = 'Write DAC 0'
      TabOrder = 0
      OnClick = Button11Click
    end
    object Button12: TButton
      Left = 16
      Top = 72
      Width = 99
      Height = 25
      Caption = 'Write DAC 1'
      TabOrder = 1
      OnClick = Button12Click
    end
    object Button13: TButton
      Left = 16
      Top = 96
      Width = 99
      Height = 25
      Caption = 'Write DAC 2'
      TabOrder = 2
      OnClick = Button13Click
    end
    object Button14: TButton
      Left = 16
      Top = 120
      Width = 99
      Height = 24
      Caption = 'Write DAC 3'
      TabOrder = 3
      OnClick = Button14Click
    end
    object Button15: TButton
      Left = 120
      Top = 48
      Width = 99
      Height = 25
      Caption = 'Write DAC 4'
      TabOrder = 4
      OnClick = Button15Click
    end
    object Button16: TButton
      Left = 120
      Top = 72
      Width = 99
      Height = 25
      Caption = 'Write DAC 5'
      TabOrder = 5
      OnClick = Button16Click
    end
    object Button17: TButton
      Left = 120
      Top = 96
      Width = 99
      Height = 25
      Caption = 'Write DAC 6'
      TabOrder = 6
      OnClick = Button17Click
    end
    object Button18: TButton
      Left = 120
      Top = 120
      Width = 99
      Height = 25
      Caption = 'Write DAC 7'
      TabOrder = 7
      OnClick = Button18Click
    end
    object TckDACvolts: TTrackBar
      Left = 264
      Top = 32
      Width = 257
      Height = 33
      Min = -10
      Orientation = trHorizontal
      Frequency = 1
      Position = 0
      SelEnd = 0
      SelStart = 0
      TabOrder = 8
      TickMarks = tmBottomRight
      TickStyle = tsAuto
      OnChange = TckDACvoltsChange
    end
    object Edit18: TEdit
      Left = 368
      Top = 76
      Width = 153
      Height = 21
      TabOrder = 9
    end
    object Button19: TButton
      Left = 328
      Top = 112
      Width = 145
      Height = 41
      Caption = 'Zero All DACs'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 10
      OnClick = Button19Click
    end
  end
end