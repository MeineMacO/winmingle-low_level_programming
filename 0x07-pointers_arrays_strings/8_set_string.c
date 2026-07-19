#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x07-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  The function that sets the value of a pointer to a char.
* Date: 1st June, 2026
*/


void set_string(char **s, char *to)
{
    *s = to;
}

