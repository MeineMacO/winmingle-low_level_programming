#include <stdio.h>
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Variables, If, Else, and While in C
*Date: 1st March, 2026
*/

int main(void){
    int x = 0;
    int y;

    while (x <= 98){
        y = x + 1;

        while (y <= 99){
            putchar((x / 10) + '0');
            putchar((x % 10) + '0');
            putchar(' ');
            putchar((y / 10) + '0');
            putchar((y % 10) + '0');

            if (x != 98 || y != 99){
                putchar(',');
                putchar(' ');
            }

            y++;
        }

        x++;
    }

    putchar('\n');
    return (0);
}
	
