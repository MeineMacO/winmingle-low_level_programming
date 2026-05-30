#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x06-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 101-print_number.c - The function that prints an integer using only _putchar.
 * Return: Always 0.
 * Date: 20th May, 2026
 */


void print_number(int n)
{
    if (n < 0)
	{
        _putchar('-');
        n = -n;
    }
	if (n / 10 != 0)
        print_number(n / 10);
    _putchar('0' + (n % 10));
}


