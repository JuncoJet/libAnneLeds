#ifndef TLEDS_H
#define TLEDS_H
#include "tusb.h"

class TLEDS:public TUSB
{
    //64-12-1=51
    //51/3=17
    //51*6=306
    int leds[6][17];
public:
    TLEDS();
    ~TLEDS();
    void on(int k,int rgb);
    void off(int k);
    TLEDS* clear();
    void show();
    int rgb(int r,int g,int b);
};

#endif // TLEDS_H
