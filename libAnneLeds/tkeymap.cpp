#include "stdafx.h"
#include "tkeymap.h"

TKeyMap::TKeyMap()
{
    string k[6][17]={
        {"esc","","f1","f2","f3","f4","f5","f6","f7","f8","f9","f10","f11","f12","ps","sl","pause"},
        {"`","1","2","3","4","5","6","7","8","9","0","-","=","back","ins","home","pu"},
        {"tab","q","w","e","r","t","y","u","i","o","p","[","]","\\","del","end","pd"},
        {"cl","a","s","d","f","g","h","j","k","l",";","'","\r","","","",""},
        {"lshift","","z","x","c","v","b","n","m",",",".","/","rshift","","","up",""},
        {"lctrl","","win","lalt","",""," ","","","ralt","fn","menu","rctrl","","left","down","right"}
    };
    for(int x=0;x<6;x++){
        for(int y=0;y<17;y++){
            keys[k[x][y]]=x<<8|y;
        }
    }
}

TKeyMap* TKeyMap::on(string k,int rgb){
    TLEDS::on(keys[k],rgb);
    return this;
}

TKeyMap* TKeyMap::off(string k){
    TLEDS::off(keys[k]);
    return this;
}

TKeyMap* TKeyMap::on(int k, int rgb){
    TLEDS::on(k,rgb);
    return this;
}

TKeyMap* TKeyMap::off(int k){
    TLEDS::off(k);
    return this;
}

int TKeyMap::conv(string k){
    return keys[k];
}
