#include <stdio.h>
#include <stdlib.h>
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Variables, If, Else, and While in C
*Date: 28th February, 2026
*/
int main(void){
    int x = 0;
    int y;

    while (x <= 8){
        y = x + 1;

        while (y <= 9){
            putchar(x + '0');
            putchar(y + '0');

            if (x != 8 || y != 9){
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
