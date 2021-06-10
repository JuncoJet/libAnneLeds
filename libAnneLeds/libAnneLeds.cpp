// libAnneLeds.cpp : 定义 DLL 应用程序的入口点。
//

#include "stdafx.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
    return TRUE;
}

extern "C" TKbdObj* WINAPI newAnne(){
	libusb_init(0);
	return new TKbdObj();
}

extern "C" bool WINAPI openDev(TKbdObj* kdb,int vid,int pid){
	return kdb->openDev(vid,pid);
}

extern "C" void WINAPI closeDev(TKbdObj* kbd){
	kbd->closeDev();
}

extern "C" void WINAPI freeAnne(TKbdObj* kdb){
	delete kdb;
}

extern "C" void WINAPI show(TKbdObj* kdb){
	kdb->show();
}

extern "C" void WINAPI onLed(TKbdObj* kdb,int k,int rgb){
	kdb->on(k,rgb);
}

extern "C" void WINAPI onKey(TKbdObj* kdb,char* k,int rgb){
	kdb->on(k,rgb);
}

extern "C" void WINAPI clear(TKbdObj* kdb){
	kdb->clear();
}

extern "C" int WINAPI rgb(TKbdObj* kdb,int r,int g,int b){
	return kdb->rgb(r,g,b);
}

extern "C" int WINAPI conv(TKbdObj* kdb,char* k){
	return kdb->conv(k);
}