VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3030
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4560
   LinkTopic       =   "Form1"
   ScaleHeight     =   3030
   ScaleWidth      =   4560
   StartUpPosition =   3  '窗口缺省
   Begin VB.CommandButton Command1 
      Caption         =   "点亮abc"
      Height          =   495
      Left            =   1680
      TabIndex        =   0
      Top             =   1320
      Width           =   1215
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
    kbd = newAnne
    If openDev(kbd, &H3311, &HA295) Then
        onKey kbd, "a", &HFF0000
        onKey kbd, "b", &HFF0000
        onKey kbd, "c", &HFF0000
        ledShow kbd '存在命名冲突已更名
        closeDev kbd
    Else
        MsgBox "设备无法打开！"
    End If
    freeAnne kbd
End Sub
