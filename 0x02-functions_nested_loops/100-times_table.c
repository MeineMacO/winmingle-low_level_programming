#include "main.h"
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Functions, nested loops - A function that prints the n times table, starting with 0.
*Date: 14th March, 2026
*/

void print_times_table(int n){
    int row;
	int column;
	int result;

	if  ((n > 15) || (n < 0)){
	    return;
	}
	row = 0;
	while (row <= n){	
	    column = 0;
    	while (column <= n){	
		    result = row * column;
            if (column == 0){
                _putchar(result + '0');
            }
            else{
                _putchar(',');
                _putchar(' ');

                if (result < 10)
                {
                    _putchar(' ');
                    _putchar(result + '0');
                }
                else if (result < 100)
                {
                    _putchar((result / 10) + '0');
                    _putchar((result % 10) + '0');
                }
                else
                {
                    _putchar((result / 100) + '0');
                    _putchar(((result / 10) % 10) + '0');
                    _putchar((result % 10) + '0');
                }
            }

            column++;
        }

        _putchar('\n');
        row++;
    }
}   
