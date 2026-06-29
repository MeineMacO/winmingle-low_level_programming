#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x07-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  3-strspn.c - The function that returns length of prefix substring matching bytes from accept.
* Date: 1st June, 2026
*/


unsigned int _strspn(char *s, char *accept)
{
    unsigned int count;
    int i;
	int found;

    count = 0;
	while (*s != '\0')
    {
	    found = 0;
        i = 0;
		while (accept[i] != '\0')
        {
		    if (*s == accept[i])
            {
			    found = 1;
				break;
            }
			i++;
		}
        if (found == 0)
	    	break; 
        count++;
		s++;
    }
    return (count);
}


