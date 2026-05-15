#include "main.h"

/*
 * Author:  Meine Mac-Obegba
 * Department:  WinMingle Community Software Engineering Program
 * Project Directory:  Pointers_arrays_strings
 * Repository:  winmingle-low_level_programming
 * Compilation:  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 5-rev_string.c - A function that reverses a string.
 * Date: 1st May, 2026
 */

void _puts(char *str)
{
        while (*str != '\0')
        {
                _putchar(*str);
                str++;
	}
        _putchar('\n');
}



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



void rev_string(char *s)
{
    int start;
	int end;
	char temp;

    start = 0;
	end = _strlen(s) - 1;
    
	while (start < end)
	{
        temp = s[start];
        s[start] = s[end];
		s[end] = temp;
		start++;
	    end--;
	}
}


