#include "main.h"
#include <stdio.h>

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x06-pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - calls the 6-cap_string.c function that capitalizes all first letters of the words of a strsng.
 * Return: Always 0.
 * Date: 20th May, 2026
 */


int main(void)
{
    char str[] = "expect the best. prepare for the worst. capitalize on what comes.\nhello world!";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    return (0);
}

