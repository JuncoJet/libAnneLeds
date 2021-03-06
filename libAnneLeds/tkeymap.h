#ifndef TKEYMAP_H
#define TKEYMAP_H
#include <string>
#include <map>
#include "tleds.h"
using namespace std;

class TKeyMap:public TLEDS
{
    map<string,int> keys;
public:
    TKeyMap();
    TKeyMap* on(string k,int rgb);
    TKeyMap* off(string k);
    TKeyMap* on(int k,int rgb);
    TKeyMap* off(int k);
    int conv(string k);
};

#endif // TKEYMAP_H
