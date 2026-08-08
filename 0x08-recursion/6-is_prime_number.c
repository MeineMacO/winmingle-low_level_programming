#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x08-recursion
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  The 6-is_prime_number.c funtion that returns 1 if the input integer is a prime number, otherwise return 0 and prime_helper function a  recursive helper to test divisors for primality
* Date: 1st June, 2026
*/

/*
 * prime_helper - recursive helper function to test divisors from 2 upward for primality
*/


int prime_helper(int n, int divisor)
{
 	if (divisor * divisor > n)
	    return (1);  
    if (n % divisor == 0)
	    return (0);  
    return (prime_helper(n, divisor + 1));
}


int is_prime_number(int n)
{
    if (n <= 1)
	    return (0);
    return (prime_helper(n, 2));
}

