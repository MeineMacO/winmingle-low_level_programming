#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x06-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  5-string_toupper.c - A function that changes all lowercase letters of a string to uppercase.
everses the contents of an array of integers.
 * Return: Always 0.
 * Date: 20th May, 2026
 */


char *string_toupper(char *str)
{
    int i;

    i = 0;
	while (str[i] != '\0')
    {
	    if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;  /* ASCII distance between a and \
A is 32 */
        i++;
	}
    return (str);
}
