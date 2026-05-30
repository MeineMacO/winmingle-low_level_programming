#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x06-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  2-strncpy.c -A function that copies a string.
 * Return: Always 0.
 * Date: 20th May, 2026
 */


char *_strncpy(char *dest, char *src, int n)
{
    int i;
    i = 0;

    while (i < n && src[i] != '\0')    /* copy up to n characters from src */
    {
	    dest[i] = src[i];
        i++;
	}

    while (i < n)    /* pad remaining bytes with null if src was shorter than n */
    {
	    dest[i] = '\0';
        i++;
    }
	return (dest);
}

