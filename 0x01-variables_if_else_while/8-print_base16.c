#include <stdio.h>
#include <stdlib.h>
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Variables, If, Else, and While in C
*Date: 28th February, 2026
*/
int main(void){
    int x = 0;
    char y = 'a';

	while (x <= 9){
	    putchar(x + '0');
		x++;
	}
	
	while (y <= 'f'){
	    putchar(y);
		y++;
	}
	putchar('\n');
	
    return(0);
}

