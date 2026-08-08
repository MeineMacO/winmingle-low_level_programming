#include "main.h"
#include <stdio.h>

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x08-recursion
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - calls the 101-wildcmp.c funtion that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
* Date: 1st June, 2026
*/

int main(void)
{
	int r;
 
	r = wildcmp("main.c", "*.c");
	printf("%d\n", r);
	r = wildcmp("main.c", "m*a*i*n*.*c*");
	printf("%d\n", r);
	r = wildcmp("main.c", "main.c");
	printf("%d\n", r);
	r = wildcmp("main.c", "m*c");
	printf("%d\n", r);
	r = wildcmp("main.c", "ma********************************c");
	printf("%d\n", r);
	r = wildcmp("main.c", "*");
	printf("%d\n", r);
	r = wildcmp("main.c", "***");
	printf("%d\n", r);
	r = wildcmp("main.c", "m.*c");
	printf("%d\n", r);
	r = wildcmp("main.c", "**.*c");
	printf("%d\n", r);
	r = wildcmp("main-main.c", "ma*in.c");
	printf("%d\n", r);
	r = wildcmp("main", "main*d");
	printf("%d\n", r);
	r = wildcmp("abc", "*b");
	printf("%d\n", r);
	return (0);
}

