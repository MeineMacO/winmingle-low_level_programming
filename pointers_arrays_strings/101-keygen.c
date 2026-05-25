#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x04. C -pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  101-keygen.c - A program that generates random valid passwords for a crackme program.
 * Return: Always 0.
 * Date: 1st May, 2026

 * main - generates a random valid password
 * The password rule: sum of ASCII values of all characters must be exactly 2772
 */



int main(void)
{
 	int i;
	int sum;
	int remaining;
    char password[100];

	srand(time(NULL));

    sum = 0;
    
	for (i = 0; i < 20; i++)
    {
        password[i] = 33 + rand() % 94;
        sum += password[i];
    }

    /* Keep regenerating last character to ensure final character stays printable ASCII close to 2772*/
    while ((2772 - sum) > 126)
    {
        password[i] = 33 + rand() % 94;
        sum += password[i];
        i++;
    }

    /* Final printable character */
    remaining = 2772 - sum;
    password[i] = remaining;
    password[i + 1] = '\0';

    printf("%s\n", password);

    return (0);
}
