#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: Pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  9-stripy.c - The function that copies a string from src to dest.
 * Return: Always 0.
 * Date: 1st May, 2026
 */


char *_strcpy(char *dest, char *src)
{
    int i;
	i = 0;
    
	while (src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0'; /* null-terminate the destination */
        return (dest);
}


