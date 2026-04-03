#include "main.h"

/*
 * Authur: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x04. C - More functions, more nested loops
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 0-isupper.c - A function that checks for uppercase character
 * Date: 3rd April, 2026
 */

int _isupper(int c){

        if (c >= 'A' && c <= 'Z')
           return(1);
        else
           return (0);

        }


