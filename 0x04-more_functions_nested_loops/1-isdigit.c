#include "main.h"

/*
 * Authur: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x04. C - More functions, more nested loops
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 1-isdigit.c - A function that checks  for a digit (0 through 9).
 * Date: 3rd April, 2026
 */

int _isdigit(int c){

        if (c >= '0' && c <= '9')
           return(1);
        else
           return (0);

        }


