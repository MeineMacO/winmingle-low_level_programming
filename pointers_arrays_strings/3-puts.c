#include "main.h"

/*
 * Author:  Meine Mac-Obegba
 * Department:  WinMingle Community Software Engineering Program
 * Project Directory:  0x04. C - More functions, more nested loops
 * Repository:  winmingle-low_level_programming
 * Compilation:  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 3-puts.c - A function that prints a string, followed by a new line, to stdout.
 * Date: 1st May, 2026
 */


void _puts(char *str)
{
    while (*str != '\0')
    {
        _putchar(*str);
        str++;
	}
    _putchar('\n');
}                                                                               

