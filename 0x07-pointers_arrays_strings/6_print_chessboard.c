#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x07-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  The 6_print_chessboard function that prints an 8x8 chessboard from char board[8][8].
* Date: 1st June, 2026
*/



void print_chessboard(char (*a)[8])
{
    int row;
    int col;

    row = 0;
    
	while (row < 8)
	{
        col = 0;
		while (col < 8)
       	{                                                               
            _putchar(a[row][col]);                                  
            col++;
        }
    	_putchar('\n');
		row++;
	}
}

