#include "main.h"
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Functions, nested loops - A function that prints the sign of a number.
*Date: 9th March, 2026
*/

int print_sign(int n){
    if (n > 0) {
        _putchar('+');
        return (1);
    }
    else if (n == 0){
        _putchar('0');
        return (0);
    }
    else{
        _putchar('-');
        return (-1);
    }  

   	}
    

