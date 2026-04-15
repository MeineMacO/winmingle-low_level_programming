#include <stdio.h>
#include "main.h"
  
/*
 * Author:  Meine Mac-Obegba
 * Department:  WinMingle Community Software Engineering Program
 * Project Directory:  0x04. C - More functions, more nested loops
 * Repository:  winmingle-low_level_programming
 * Compilation:  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 100-prime_factor.c - A program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
 * Date: 3rd April, 2026
 */

int main(void)
{
    prime_factor(612852475143);
    return (0);
}

void prime_factor(long n)
{
    long factor = 2;
    long largest = 0;

    while (factor * factor <= n)
    {
        if (n % factor == 0)
        {
            largest = factor;
            n /= factor;
        }
        else
        {
            factor++;
        }
    }

    if (n > 1)
        largest = n;

    printf("%ld\n", largest);
}
