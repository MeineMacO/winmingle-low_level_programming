#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x04. C - More functions, more nested loops
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 8-print_square.c - The function that prints a square, followed by a new line.
 * Return: Always 0.
 * Date: 3rd April, 2026
 */
void print_square(int size)
{
    int hash;
    int count;

	if (size <= 0)
	{
        _putchar('\n');
		return;
	}

    for(count = 0; count < size; count++)
	{
        for(hash = 0; hash < size; hash++)
    	{
            _putchar('#');            
	    }            
        _putchar('\n');
    }
}

