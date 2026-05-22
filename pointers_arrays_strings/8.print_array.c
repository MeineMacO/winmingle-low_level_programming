#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: Pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  8.print_array.c - the function that prints n elements of an array of integers.
 * Return: Always 0.
 * Date: 1st May, 2026
 */


void print_int(int n)
{
    if (n < 0)
    {
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
	    print_int(n / 10);
    }
	_putchar('0' + (n % 10));
}




void print_array(int *a, int n)
{
    int i;
	i = 0;
	while (i < n)
    {
	    if (i > 0)
        {
		    _putchar(',');
            _putchar(' ');
        }
        print_int(a[i]);   /*A function that prints a single integer using _putchar recursively */
	    i++;
	}
	_putchar('\n');
}






