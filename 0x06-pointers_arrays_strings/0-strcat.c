#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x06-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 0-strcat.c -The function that concatenates two strings.
 * Return: Always 0.
 * Date: 20th May, 2026
 */


char *_strcat(char *dest, char *src)
{
    int i;
    int j;
	i = 0;
    j = 0;

    while (dest[i] != '\0')    /* move i to end of dest */
        i++;

    while (src[j] != '\0')    /* append src to dest */
    {
	    dest[i] = src[j];
        i++;
		j++;
    }
    dest[i] = '\0';
	return (dest);
}

