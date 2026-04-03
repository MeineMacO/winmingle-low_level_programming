#include "main.h"
#include <stdio.h>

/*
 * Authur: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x04. C - More functions, more nested loops
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - checks the function that checks for a digit (0 through 9).
 * Return: Always 0.
 * Date: 3rd April, 2026
 */

int main(void){
    char c;


    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}

