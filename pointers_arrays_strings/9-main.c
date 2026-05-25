#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: Pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - calls the function that copies a string from src to dest.
 * Return: Always 0.
 * Date: 1st May, 2026
 */


int main(void)
{
    char *src = "First, solve the problem. Then, write the code";
    char dest[70];
    _strcpy(dest, src);
	_puts(dest);
	_puts(src);
    return (0);
}



