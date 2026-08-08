#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x08-recursion
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - calls the 100-is_palindrome.c funtion that returns 1 if a string is a palindrome and 0 if not and 2  recursive helper functions _strlen_recursion that returns the length of a string using recursion and a palindrome_helper that uses the index approach to move the left and right index pointers toward each other on each recursive call.
* Date: 1st June, 2026
*/



/*
 * _strlen_recursion - a helper function that returns the length of a string using recursion
*/
int _strlen_recursion(char *s)
{
   if (*s == '\0')
       return (0);
   return (1 + _strlen_recursion(s + 1));
}




/*
 * a palindrome_helper that uses the index approach to move the left and right index pointers toward each other on each recursive call.
*/
int palindrome_helper(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	if (s[left] != s[right])
		return (0);
	return (palindrome_helper(s, left + 1, right - 1));
}




int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (palindrome_helper(s, 0, len - 1));
}
