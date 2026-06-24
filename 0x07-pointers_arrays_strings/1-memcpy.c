#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x07-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  1-memcpy.c - A function that copies memory area.
* Date: 1st June, 2026
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
	i = 0;
    while (i < n)
	{
        dest[i] = src[i];
    	i++;
    }
    return (dest);
}

