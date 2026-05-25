#include <stdio.h>
#include <stdlib.h>

/*
 * Author: Meine Mac-Obegba
 * Department: WinMingle Community Software Engineering Program
 * Project Directory: 0x04. C -pointers_arrays_strings
 * Repository: winmingle-low_level_programming
 * Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
 * Description:  crackme.c - Sample crackme for testing 101-keygen.c
 * Password rule: sum of all ASCII values of characters must equal 2772
 * Compile: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 crackme.c -o crackme
 * Return: Always 0.
 * Date: 1st May, 2026
 */

int main(void)
{
    char password[100];
    int sum;
	int i;

    sum = 0;
	i = 0;

    printf("Enter password: ");
	fgets(password, sizeof(password), stdin);

    while (password[i] != '\n' && password[i] != '\0')    /* sum all ASCII values until newline or null */
	{
	    sum += password[i];
        i++;
	}

    if (sum == 2772)
	    printf("Tada! Congrats\n");
    else
	    printf("Wrong password: %d\n", sum);
        
	return (0);
}


