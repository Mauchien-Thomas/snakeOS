#include "kernel.h"


void clear_screen(char* screen){
	for(int i = 0; i < 80 *25 * 2;i = i+2){
		screen[i] = ' ';
		screen[i + 1] = 0x0f;
	}
}
void kernel_main(){
	char* screen = (char*) 0xb8000;
	clear_screen(screen);

	screen[0] = 'E';
	screen[1] = 0x0f;
	
	while(1){
	}
}
