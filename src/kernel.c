#include "kernel.h"

void kernel_main(){
	char* screen = (char*) 0xb8000;
	screen[0] = 'E';
	screen[1] = 0x0f;
	
	while(1){
	}
}
