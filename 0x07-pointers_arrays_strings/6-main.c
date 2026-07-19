#include "main.h"
#include <stdio.h>

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x07-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - calls the 6_print_chessboard function that prints an 8x8 chessboard from char board[8][8].
* Date: 1st June, 2026
*/



int main(void)
{
    char board[8][8] = {
        {'r','k','b','q','k','b','k','r'},
        {'p','p','p','p','p','p','p','p'},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {'P','P','P','P','P','P','P','P'},
        {'R','K','B','Q','K','B','K','R'}
    };
   
    print_chessboard(board);
    return (0);
}


