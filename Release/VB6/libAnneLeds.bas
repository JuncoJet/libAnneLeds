Attribute VB_Name = "libAnneLeds"
Public Declare Function newAnne Lib "libAnneLeds" () As Long
Public Declare Function conv Lib "libAnneLeds" (ByVal kbd As Long, ByVal k As String) As Long
Public Declare Function rgb Lib "libAnneLeds" (ByVal kbd As Long, ByVal r As Long, ByVal g As Long, ByVal b As Long) As Long
Public Declare Sub clear Lib "libAnneLeds" (ByVal kbd As Long)
Public Declare Sub freeAnne Lib "libAnneLeds" (ByVal kbd As Long)
Public Declare Sub onKey Lib "libAnneLeds" (ByVal kbd As Long, ByVal k As String, ByVal rgb As Long)
Public Declare Sub onLed Lib "libAnneLeds" (ByVal kbd As Long, ByVal k As Long, ByVal rgb As Long)
Public Declare Sub show Lib "libAnneLeds" (ByVal kbd As Long)
Public Declare Function openDev Lib "libAnneLeds" (ByVal kbd As Long, ByVal vid As Long, ByVal pid As Long) As Boolean
Public Declare Sub closeDev Lib "libAnneLeds" (ByVal kbd As Long)

'void* WINAPI newAnne();
'int WINAPI conv(void* kdb,char* k);
'int WINAPI rgb(void* kdb,int r,int g,int b);
'void WINAPI clear(void* kdb);
'void WINAPI freeAnne(void* kdb);
'void WINAPI onKey(void* kdb,char* k,int rgb);
'void WINAPI onLed(void* kdb,int k,int rgb);
'void WINAPI show(void* kdb);
'bool WINAPI openDev(void* kbd,int vid,int pid);
'void WINAPI closeDev(void* kbd);
