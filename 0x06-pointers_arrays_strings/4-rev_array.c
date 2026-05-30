#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x06-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  4-rev_array.c - A function that reverses the contents of an array of integers.
 * Return: Always 0.
 * Date: 20th May, 2026
 */


void reverse_array(int *a, int n)
{
    int start;
	int end;
    int temp;

    start = 0;
    end = n - 1;

    while (start < end)
	{
	    temp = a[start];
        a[start] = a[end];
        a[end] = temp;
		start++;
		end--;
	}
}


