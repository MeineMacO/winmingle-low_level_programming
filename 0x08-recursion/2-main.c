#include "main.h"
#include <stdio.h>

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x08-recursion
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - calls the 2-strlen_recursion.c funtion that returns the length of a string.
* Date: 1st June, 2026
*/


int main(void)
{
	int n;
 
	n = _strlen_recursion("Corbin Coleman");
	printf("%d\n", n);
	return (0);
}

