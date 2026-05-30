#include "main.h"
#include <stdio.h>

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x06-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - calls the 100-rot13.c function that encodes a string using using rot13.
 * Return: Always 0.
 * Date: 20th May, 2026
 */


int main(void)
{
    char s[] = "ROT13 (rotate by 13 places)";
    char *p;

    p = rot13(s);
    printf("%s\n", p);
    printf("%s\n", rot13(s));
    return (0);
}

