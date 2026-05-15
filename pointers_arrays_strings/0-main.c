#include "main.h"
#include <stdio.h>

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x04. C -pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - calls the reset_to_98 function
 * Return: Always 0.
 * Date: 1st May, 2026
 */


int main(void)
{
    int n;
    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}


