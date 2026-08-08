#include "main.h"


/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x08-recursion
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - The 3-factorial.c funtion that returns the factorial of a given number.
* Date: 1st June, 2026
*/

int factorial(int n)
{
    if (n < 0)
	    return (-1);
    if (n == 0)
	    return (1);
    return (n * factorial(n - 1));
}

