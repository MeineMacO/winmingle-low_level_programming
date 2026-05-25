#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x06-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  1-strncat.c - A function that concatenates two strings, using at most n bytes from src.
 * Return: Always 0.
 * Date: 20th May, 2026
 */


char *_strncat(char *dest, char *src, int n)
{
    int i;
    int j;
	i = 0;
	j = 0;

    while (dest[i] != '\0')    /* move i to end of dest */
    	i++;

    while (src[j] != '\0' && j < n)    /* append at most n characters from src */
    {
	    dest[i] = src[j];
        i++;
		j++;
	}
    dest[i] = '\0';
	return (dest);
}


