#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x08-recursion
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - The 101-wildcmp.c funtion that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
* Date: 1st June, 2026
*/

int wildcmp(char *s1, char *s2)
{
    if (*s2 == '\0')
    {
	    return (*s1 == '\0');    
	} 
	if (*s2 == '*')
    {
	    return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
    if (*s1 == *s2)
	{ 
        return (wildcmp(s1 + 1, s2 + 1));
    }
    return (0);
}

