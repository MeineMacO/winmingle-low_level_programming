#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x08-recursion
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  The 5-sqrt_recursion.c funtion that returns the natural square root of a number and a recursive helper function sqrt_helper
* Date: 1st June, 2026
*/


/*
* sqrt_helper - recursive helper function to find square root with guesses increasing by 1
*/

int sqrt_helper(int n, int guess)
{
    if (guess * guess > n)    
    	return (-1);
    if (guess * guess == n)
	    return (guess);
    return (sqrt_helper(n, guess + 1));
}


int _sqrt_recursion(int n)
{
    if (n < 0)
	    return (-1);
    if (n == 0)
	    return (0);
    return (sqrt_helper(n, 1));
}

