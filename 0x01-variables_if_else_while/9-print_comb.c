#include <stdio.h>
#include <stdlib.h>
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Variables, If, Else, and While in C
*Date: 28th February, 2026
*/
int main(void){
    char x = '0';

	while (x <= '9'){
	    putchar(x);
		if (x != '9'){
		    putchar(',');
			putchar(' ');
			}
		x++;
	}
    putchar('\n');	
    return(0);
}


