#include <stdio.h>

/*
*Authur: Meine Mac-Obegba
*Department: WinMingle Community Software Engineering Program
*Project Directory: 0x03-debugging
*Repository: winmingle-low_level_programming
*Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
*Description: Main file that stops an infinite loop by commenting out the problematic line.
*Date: 24th March, 2026
*/
 
/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{
    int i;
 
    printf("Infinite loop incoming :(\n");
 
    i = 0;
 
    while (i < 10)
    {
        putchar(i);    /*putchar(i); will not print numbers but non visible characters. putchar(i + '0') will make it print numbers zero to nine*/
    	i++;           /*i was not incremented in this while loop and this will cause an infiniteloop so i added i++ to avoid the infinite loop*/
    }
    putchar('\n');     /*I added this to make the output look better*/
	printf("Infinite loop avoided! \\o/\n");
 
    return (0);
}

