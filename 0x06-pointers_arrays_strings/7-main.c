#include "main.h"
#include <stdio.h>

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x06-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - calls the 7-leet.c function that encodes a string into 1337 (leet speak).
 * Return: Always 0.
 * Date: 20th May, 2026
 */


int main(void)
{
    char s[] = "Expect the best. Prepare for the worst.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    return (0);
}

