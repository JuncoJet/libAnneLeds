#include "stdafx.h"
#include "tkbdobj.h"

TKbdObj::TKbdObj()
{

}

TKbdObj::TKbdObj(int vid,int pid){
    openDev(vid,pid);
}
