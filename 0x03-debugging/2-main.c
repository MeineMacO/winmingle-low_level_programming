#include <stdio.h>
#include "main.h"

/*
*Authur: Meine Mac-Obegba
*Department: WinMingle Community Software Engineering Program
*Project Directory: 0x03-debugging
*Repository: winmingle-low_level_programming
*Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
*Description: Main - Fix the function largest_number() to return the correct result for any 3 integers.
*Date: 24th March, 2026
*/
 
int main(void)
{
    int result;
    result = largest_number(107, 972, 0);
    printf("%d is the largest number\n", result);

    return (0);
}

