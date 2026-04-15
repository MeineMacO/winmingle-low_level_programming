#include "main.h"
  
/*
 * Author:  Meine Mac-Obegba
 * Department:  WinMingle Community Software Engineering Program
 * Project Directory:  0x04. C - More functions, more nested loops
 * Repository:  winmingle-low_level_programming
 * Compilation:  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  101-print_number.c - A program that prints an integer.
 * Date: 3rd April, 2026
 */
void print_number(int n)
{
    if (n < 0) /*Handling negative numbers*/
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10)
    {
        print_number(n / 10); /*recursion*/
    }
    _putchar((n % 10) + '0');
}
