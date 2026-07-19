#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x07-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  The 7_print_diagsums function that prints the sum of the two diagonals of a square matrix.
* Date: 1st June, 2026
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



void print_diagsums(int *a, int size)
{
    int i;
    int left_sum;
    int right_sum;

    left_sum = 0;
    right_sum = 0;
    i = 0;

    while (i < size)
	{
        left_sum += a[i * size + i];
        right_sum += a[i * size + (size - 1 - i)];                 				    i++;
    }
	print_number(left_sum);    
	_putchar(',');
	_putchar(' ');
	print_number(right_sum);
	_putchar('\n');
}

