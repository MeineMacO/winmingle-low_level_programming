#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x04. C - More functions, more nested loops
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  The function that prints the numbers, from 0 to 9, except 2 and 4, followed by a new line.
 * Return: Always 0.
 * Date: 3rd April, 2026
 */

void print_most_numbers(void){
    int n;
    for(n = 0; n <= 9; n++){
	    if ((n != 2) && (n != 4)){
            _putchar(n + '0');
		}

    }

    _putchar('\n');
}

