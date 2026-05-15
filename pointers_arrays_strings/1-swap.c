#include "main.h"

/*
 * Author:  Meine Mac-Obegba
 * Department:  WinMingle Community Software Engineering Program
 * Project Directory:  0x04. C - More functions, more nested loops
 * Repository:  winmingle-low_level_programming
 * Compilation:  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 0-reset_to_98.c - A function that swaps the values of two integers.
 * Date: 1st May, 2026
 */


void swap_int(int *a, int *b)
{
    int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
