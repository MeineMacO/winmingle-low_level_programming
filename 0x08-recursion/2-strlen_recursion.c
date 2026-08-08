#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x08-recursion
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  The 2-strlen_recursion.c funtion that returns the length of a string.
* Date: 1st June, 2026
*/


int _strlen_recursion(char *s)
{
    if (*s == '\0')
	    return (0);
	return (1 + _strlen_recursion(s + 1));
}

