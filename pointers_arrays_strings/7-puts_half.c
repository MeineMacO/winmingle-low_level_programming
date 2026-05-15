#include "main.h"

/*
 * Author:  Meine Mac-Obegba
 * Department:  WinMingle Community Software Engineering Program
 * Project Directory:  Pointers_arrays_strings
 * Repository:  winmingle-low_level_programming
 * Compilation:  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 7-puts_half.c - A function that prints half of a string.
 * Date: 1st May, 2026
 */

void puts_half(char *str)
{
   int start;
   int length;
   int i;

   length = _strlen(str);

   if (length % 2 == 0)
       start = length / 2;    /*for even length*/
    else
       start = (length / 2) + 1;     /* for odd length*/

   i = start;

	while (str[i] != '\0')
	{
	    _putchar(str[i]);
		i++;
    }
    _putchar('\n');
}

   

int _strlen(char *s)
{
    int length;

    length = 0;
	while (*s != '\0')
        {
                length++;
                s++;
        }
        return (length);
}

