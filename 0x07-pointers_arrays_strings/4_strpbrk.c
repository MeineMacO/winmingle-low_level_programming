#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x07-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  The function that finds first occurrence in s of any bytes in accept.
* Date: 1st June, 2026
*/



char *_strpbrk(char *s, char *accept)
{
    int i;

    while (*s != '\0')
    {
	    i = 0;
        while (accept[i] != '\0')
		{
		    if (*s == accept[i])
			    return (s);
            i++;
		}
        s++;
	}
    return (0);
}



