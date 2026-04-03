#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x04. C - More functions, more nested loops
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  10-print_triangle.c - The function that prints a triangle, followed by a new line.
 * Return: Always 0.
 * Date: 3rd April, 2026
 */

void print_triangle(int size)
{
    int hash;
	int space;

	if (size <= 0)
	{
        _putchar('\n');
		return;
	}

    for(hash = 1; hash <= size; hash++)
	{
	
        for(space = 0; space < size - hash; space++)
		{
           _putchar(' ');            
		 
		}
		for(space = 0; space < hash; space++)
		{
           _putchar('#');            
		 
		}            
        _putchar('\n');
    }
}

