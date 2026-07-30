#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x08-recursion
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main The 0-puts_recursion.c funtion that prints a string, followed by a new line.
* Date: 1st June, 2026
*/



void _puts_recursion(char *s)
{ 
	if (*s == '\0')
	{   
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
