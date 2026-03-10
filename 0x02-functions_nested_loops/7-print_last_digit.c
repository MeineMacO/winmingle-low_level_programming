#include "main.h"
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Functions, nested loops - A function that  prints the last digit of a number.
*Date: 10th March, 2026
*/

int print_last_digit(int n){
    int last_digit;
	last_digit = n % 10;
    if (last_digit < 0)
	    last_digit = -last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
    

