#include "main.h"

/*
 * Author:  Meine Mac-Obegba
 * Department:  WinMingle Community Software Engineering Program
 * Project Directory:  Pointers_arrays_strings
 * Repository:  winmingle-low_level_programming
 * Compilation:  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 2-strlen.c - A function that prints string in reverse.
 * Date: 1st May, 2026
 */


void print_rev(char *s)
{
    char *start;
    int length;

    start = s;
	length = 0;

	while (*s != '\0')
        {
                length++;
                s++;
        }
    
	while (length > 0)
	{
        length--;
        _putchar(start[length]);
    }
    _putchar('\n');
}
