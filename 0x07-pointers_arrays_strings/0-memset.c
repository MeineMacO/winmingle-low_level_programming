#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x07-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  0-memset.c - A function that fills memory with a constant byte.
* Date: 1st June, 2026
*/

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;
    i = 0;
	while (i < n)
	{
	    s[i] = b;
        i++;
	}
    return (s);
}

