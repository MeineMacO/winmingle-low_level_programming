#include <unistd.h>

/*
 * Author:  Meine Mac-Obegba
 * Department:  WinMingle Community Software Engineering Program
 * Project Directory:  0x04. C - More functions, more nested loops
 * Repository:  winmingle-low_level_programming
 * Compilation:  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  _putchar.c - A function that writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 * Date: 1st May, 2026
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
