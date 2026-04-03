#include "main.h"

/*
 * Authur: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x04. C - More functions, more nested loops
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 5-more_numbers.c - A function that prints the numbers, from 0 to 14, 10x, followed by a new line.
 * Date: 3rd April, 2026
 */

void more_numbers(void){
    int n;
	int count;

    for(count = 0; count <= 9; count++){
        for(n = 0; n <= 14; n++){
            if (n >= 10){
                _putchar('1');            
                _putchar((n % 10) + '0');
            }
            else {
            _putchar(n + '0');
            }
		}

    _putchar('\n');
	}
}

