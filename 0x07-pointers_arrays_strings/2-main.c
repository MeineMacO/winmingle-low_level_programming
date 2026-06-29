#include "main.h"
#include <stdio.h>

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x07-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - calls the 2-strchr.c function that Locate character in string; return pointer to first occurrence or NULL.
* Date: 1st June, 2026
*/


int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');
    if (f != NULL)
        printf("%s\n", f);
    return (0);
}


