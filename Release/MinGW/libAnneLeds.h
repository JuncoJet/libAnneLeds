#define WINAPI __stdcall
void* WINAPI newAnne();
int WINAPI conv(void* kdb,char* k);
int WINAPI rgb(void* kdb,int r,int g,int b);
void WINAPI clear(void* kdb);
void WINAPI freeAnne(void* kdb);
void WINAPI onKey(void* kdb,char* k,int rgb);
void WINAPI onLed(void* kdb,int k,int rgb);
void WINAPI show(void* kdb);
int WINAPI openDev(void* kbd,int vid,int pid);
void WINAPI closeDev(void* kbd);
