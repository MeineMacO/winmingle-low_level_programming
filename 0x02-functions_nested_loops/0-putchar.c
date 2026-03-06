#include "main.h"
#include <stdio.h>
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Variables, If, Else, and While in C - print -putchar

*Date: 28th February, 2026
*/
int main(void){
    
	int i = 0;
    char c;
	char a[] = "_putchar\n";

	while (i <= 8){
	   c = a[i];
	   _putchar(c);
		i++;
	}
    
    return(0);
}

