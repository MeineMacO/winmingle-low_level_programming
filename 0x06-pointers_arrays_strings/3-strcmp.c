#include "main.h"
#include <stdio.h>

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x06-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 3-strcmp.c - A function that compares two strings.
 * Return: Always 0.
 * Date: 20th May, 2026
 */


int _strcmp(char *s1, char *s2)
{
 	while (*s1 != '\0' && *s2 != '\0')
	{
        if (*s1 != *s2)
		    return (*s1 - *s2);
        s1++;
		s2++;
    }
    return (*s1 - *s2);
}
