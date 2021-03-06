#ifndef TUSB_H
#define TUSB_H
#include "libusb.h"

class TUSB
{
public:
    libusb_device_handle *hDev;
    int vid,pid;
    TUSB();
    ~TUSB();
    TUSB(int vid,int pid);
    bool openDev(int vid,int pid);
    void claimIf(int interface);
    void releaseIf(int interface);
    int bultRead(int endp,char *data,int size,int *r);
    int bultWrite(int endp,char *data,int size,int *r);
    void closeDev();
};

#endif // TUSB_H
