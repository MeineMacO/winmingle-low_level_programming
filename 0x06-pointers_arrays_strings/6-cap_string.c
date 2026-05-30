#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x06-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  6-cap_string.c -The function that capitalizes all first letters of each word of a string.
 * Return: Always 0.
 * Date: 20th May, 2026
 */


char *cap_string(char *str)
{
    int i;
    int cap_next;
	
	i = 0;
    cap_next = 1;  /* capitalize the first character */

    while (str[i] != '\0')
    {
	    if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '\'' || str[i] == '-' || str[i] == '(')
        {
		    cap_next = 1;
        }
        else if (cap_next == 1)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
            cap_next = 0;
        }
        i++;
    }
	return (str);
}
