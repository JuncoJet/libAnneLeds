#include <stdio.h>
#include <conio.h>
#include "libAnneLeds.h"

int main(int argc, char *argv[])
{
	int rgb=0xFF0000;
	void* kbd=newAnne();
	if(openDev(kbd,0x3311,0xA295)){
		onKey(kbd,"a",rgb);
		onKey(kbd,"b",rgb);
		onKey(kbd,"c",rgb);
		show(kbd);
		closeDev(kbd);
	}else{
		puts("设备无法打开！");
	}
	freeAnne(kbd);
	getch();
}
