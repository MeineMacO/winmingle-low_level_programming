#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: Pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - calls the function that prints a string in reverse.
 * Return: Always 0.
 * Date: 1st May, 2026
 */


int main(void)
{
    char *s = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(s);
    return (0);
}

