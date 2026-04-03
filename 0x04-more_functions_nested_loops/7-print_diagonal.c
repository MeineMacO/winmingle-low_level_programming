#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x04. C - More functions, more nested loops
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description: 7-print_diagonal.c - The function that draws a diagonal line on the terminal.
 * Return: Always 0.
 * Date: 3rd April, 2026
 */

void print_diagonal(int n)
{
    int count;
	int space;

	if (n <= 0)
	{
        _putchar('\n');
		return;
	}
    for(count = 1; count <= n; count++)
	{
        for(space = 1; space < count; space++)
		{
            _putchar(' ');
		}
        _putchar('\\');            
        _putchar('\n');
    }
}


