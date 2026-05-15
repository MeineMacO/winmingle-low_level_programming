#include "main.h"

/*
 * Author:  Meine Mac-Obegba
 * Department:  WinMingle Community Software Engineering Program
 * Project Directory:  Pointers_arrays_strings
 * Repository:  winmingle-low_level_programming
 * Compilation:  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 6-puts2.c - A function that prints every other character of a string, starting with the first.
 * Date: 1st May, 2026
 */

void puts2(char *str)
{
    int i;
	i = 0;

	while (str[i] != '\0')
	{
	    if (i % 2 == 0)
		{
		    _putchar(str[i]);
		}
		i++;
    }
    _putchar('\n');
}

   

