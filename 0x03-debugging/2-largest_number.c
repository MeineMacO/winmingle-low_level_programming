#include <stdio.h>
#include <stdlib.h>
/*
*Authur: Meine Mac-Obegba
*Department: WinMingle Community Software Engineering Program
*Project Directory: 0x03-debugging
*Repository: winmingle-low_level_programming
*Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
*Description: Fix the function largest_number() to return the correct result for any 3 integers.
*Date: 24th March, 2026
*/
int largest_number(int a, int b, int c)
{
    int largest;
 
	if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;
 
    return (largest);
}

