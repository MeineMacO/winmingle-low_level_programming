#include <stdio.h>
#include <stdlib.h>
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Variables, If, Else, and While in C
*Date: 28th February, 2026
*/
int main(void){
    char x = 'a';
    char y = 'A';

	while (x <= 'z'){
	    putchar(x);
		x++;
	}
		while (y <= 'Z'){
	    putchar(y);
		y++;
	}
	putchar('\n');
	
    return(0);
}

