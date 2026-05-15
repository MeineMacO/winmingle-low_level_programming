#include "main.h"

/*
 * Author:  Meine Mac-Obegba
 * Department:  WinMingle Community Software Engineering Program
 * Project Directory:  Pointers_arrays_strings
 * Repository:  winmingle-low_level_programming
 * Compilation:  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 2-strlen.c - A function that returns the length of a string.
 * Date: 1st May, 2026
 */


int _strlen(char *s)
{
    int length;

    length = 0;
	while (*s != '\0')
        {
                length++;
                s++;
        }
        return (length);
}
