#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x06-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  100-rot13.c - The function that encodes a string using using rot13.
 * Return: Always 0.
 * Date: 20th May, 2026
 */


char *rot13(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    { 
	    if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = 'a' + (str[i] - 'a' + 13) % 26;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = 'A' + (str[i] - 'A' + 13) % 26;
        i++;
	}
    return (str);
}

