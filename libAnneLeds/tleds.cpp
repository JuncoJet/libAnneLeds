#include "stdafx.h"
#include "tleds.h"

TLEDS::TLEDS()
{
    clear();
}

TLEDS::~TLEDS(){
}

TLEDS* TLEDS::clear(){
    memset(leds,0,sizeof(leds));
    return this;
}

void TLEDS::on(int k,int rgb){
    leds[k>>8&0xFF][k&0xFF]=rgb;
}

void TLEDS::off(int k){
    leds[k>>8&0xFF][k&0xFF]=0;
}

void TLEDS::show(){
    int r,y;
    claimIf(1);
    for(int x=0;x<6;x++){
        char buf[64]="\x7B\x10\x41\x60\x37\x00\x00\x7D\x20\x03\xFF\x02";
        buf[3]+=x;
        buf[sizeof(buf)-1]=0;
        for(int y=0,i=12;i<sizeof(buf),y<17;i+=3,y++){
            buf[i]=leds[x][y]>>16&0xFF;
            buf[i+1]=leds[x][y]>>8&0xFF;
            buf[i+2]=leds[x][y]&0xFF;
        }
        bultWrite(3,buf,sizeof(buf),&r);
        bultRead(0x84,buf,sizeof(buf),&r);
    }
    releaseIf(1);
}

int TLEDS::rgb(int r, int g, int b){
    return r<<16|g<<8|b;
}
