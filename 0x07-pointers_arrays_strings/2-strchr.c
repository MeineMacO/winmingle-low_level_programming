#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x07-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  2-strchr.c - A function that Locate character in string; return pointer to first occurrence or NULL.
* Date: 1st June, 2026
*/


char *_strchr(char *s, char c)
{
    while (*s != '\0')
	{
        if (*s == c)
		    return (s);
        s++;
    }

    if (*s == c)
	    return (s);

    return (0);
}


