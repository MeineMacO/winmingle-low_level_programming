#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x06-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 7-leet.c - The function that encodes a string into 1337 (leet speak).
 * Return: Always 0.
 * Date: 20th May, 2026
 */


char *leet(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'A')
		    str[i] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
            str[i] = '3';
        else if (str[i] == 'o' || str[i] == 'O')
		    str[i] = '0';
        else if (str[i] == 't' || str[i] == 'T')
            str[i] = '7';
        else if (str[i] == 'l' || str[i] == 'L')
		    str[i] = '1';
        i++;
    }
    return (str);
}

