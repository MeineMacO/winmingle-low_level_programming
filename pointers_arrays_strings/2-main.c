#include "main.h"
#include <stdio.h>

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x04. C -pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - calls the function that returns the length of a string.
 * Return: Always 0.
 * Date: 1st May, 2026
 */


int main(void)
{
    char *str = "My first strlen!";
    int len = _strlen(str);
    printf("%d\n", len);
    return (0);
}

