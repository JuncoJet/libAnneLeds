#include "stdafx.h"
#include "tusb.h"

TUSB::TUSB()
{
    vid=pid=0;
    hDev=0;
}

TUSB::~TUSB(){
    closeDev();
}

TUSB::TUSB(int vid,int pid){
    openDev(vid,pid);
}

bool TUSB::openDev(int vid,int pid){
    this->vid=vid;
    this->pid=pid;
    return hDev=libusb_open_device_with_vid_pid(0,vid,pid);
}

void TUSB::claimIf(int interface){
    libusb_claim_interface(hDev,interface);
}

void TUSB::releaseIf(int interface){
    libusb_release_interface(hDev,interface);
}

int TUSB::bultRead(int endp,char *data,int size,int *r){
    return libusb_bulk_transfer(hDev,endp,(unsigned char*)data,size,r,10);
}

int TUSB::bultWrite(int endp,char *data,int size,int *r){
    return libusb_bulk_transfer(hDev,endp,(unsigned char*)data,size,r,10);
}

void TUSB::closeDev(){
    if(hDev)libusb_close(hDev);
}
