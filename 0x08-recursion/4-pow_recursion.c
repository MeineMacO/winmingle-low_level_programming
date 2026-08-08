#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x08-recursion
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  The 4-pow_recursion.c funtion that returns the value of x raised to the power of y.
* Date: 1st June, 2026
*/

int _pow_recursion(int x, int y)
{
    if (y < 0)
	    return (-1);
    if (y == 0)
	    return (1);
    return (x * _pow_recursion(x, y - 1));
}

