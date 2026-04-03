#include "main.h"

/*
 * Authur: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x04. C - More functions, more nested loops
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 3-print_numbers.c - A function that prints the numbers, from 0 to 9, followed by a new line.
 * Date: 3rd April, 2026
 */

void print_numbers(void){
    int n;
    for(n = 0; n <= 9; n++){
        _putchar(n + '0');

    }

    _putchar('\n');
}

