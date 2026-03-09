#include "main.h"
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Functions, nested loops - A function that prints 10 times the alphabet, in lowercase, followed by a new line.
*Date: 9th March, 2026
*/
void print_alphabet_x10(void){
    int i = 0;
    char x;

    while(i <= 9){
	    x = 'a';
    	while (x <= 'z'){
	    _putchar(x);
		x++;
    	}
	i++;
    _putchar('\n');	
	}
    
}

