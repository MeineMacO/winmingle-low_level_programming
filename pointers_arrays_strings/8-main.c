#include "main.h"

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: Pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  main file - calls the function that prints n elements of an array of integers.
 * Return: Always 0.
 * Date: 1st May, 2026
 */


int main(void)
{
    int a[] = {98, 402, -198, 298, -1024};

    print_array(a, 5);
    return (0);
}



