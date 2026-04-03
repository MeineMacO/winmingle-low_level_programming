#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x04. C - More functions, more nested loops
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  6-print_line.c - The function that draws a straight line in the terminal.
 * Return: Always 0.
 * Date: 3rd April, 2026
 */

void print_line(int n){
    int count;

	if (n <= 0)
	{
        _putchar('\n');
		return;
	}
    for(count = 1; count <= n; count++)
	{
        _putchar('_');            
    }
    _putchar('\n');

}


