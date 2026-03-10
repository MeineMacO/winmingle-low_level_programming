#include "main.h"
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Functions, nested loops - A function that  prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
*Date: 10th March, 2026
*/

void jack_bauer(void){
    int x = 0;
	int y;
	
	while (x <= 23){
	    y = 0;
		while (y <= 59){
            _putchar((x / 10) + '0');
            _putchar((x % 10) + '0');
            _putchar(':');
            _putchar((y / 10) + '0');
            _putchar((y % 10) + '0');
            _putchar('\n');
            y++;
        }   
        x++;
    }

} 

