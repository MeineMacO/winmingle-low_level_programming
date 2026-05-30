#include "main.h"
#include <stdio.h>

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x06-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - calls the 2-strncpy.c function that copies a string.
 * Return: Always 0.
 * Date: 20th May, 2026
 */


int main(void)
{
    char s1[98];
    int i;

    for (i = 0; i < 97; i++)
        s1[i] = '*';
    s1[i] = '\0';

    printf("%s\n", s1);
    _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    return (0);
}


