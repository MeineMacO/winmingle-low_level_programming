#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x07-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  The 5_strstr.c function that locates substring needle in haystack.
* Date: 1st June, 2026
*/


char *_strstr(char *haystack, char *needle)
{
    int i;
    
	if (needle[0] == '\0')
        return (haystack);
    while (*haystack != '\0')
	{
        if (*haystack == needle[0])
        {
		    i = 0;
           
		    while (haystack[i] != '\0' && needle[i] != '\0' && haystack[i] == needle[i])
                i++;

            if (needle[i] == '\0')
                return (haystack);
        }
        haystack++;
	}
	return (0);  
}




