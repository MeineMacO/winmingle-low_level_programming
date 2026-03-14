#include "main.h"
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Functions, nested loops - A function that prints the 9 times table, starting with 0.
*Date: 14th March, 2026
*/

void times_table(void){
    int x = 0;
	int y;
	int z;
	
	while (x <= 9){
	    y = 0;
		while (y <= 9){	    
		    z = x * y;
            if (y != 0){
                _putchar(',');
				_putchar(' ');

                if (z < 10){
			    	_putchar(' ');
				}
			}
            
            if (z >= 10){
			    _putchar((z / 10) + '0');
                _putchar((z % 10) + '0');
             }
		
            else {
			    _putchar(z + '0');
		    }	
            y++;
        }   
        _putchar('\n');
		x++;
     }

} 

