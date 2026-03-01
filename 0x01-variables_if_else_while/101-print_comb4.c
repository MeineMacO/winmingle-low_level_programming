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
	int z;

    while (x <= 7){
        y = x + 1;

        while (y <= 8){
	    	z = y + 1;
            while (z <= 9){
                putchar(x + '0');
                putchar(y + '0');
				putchar(z + '0');

				if (x != 7 || y != 8 || z != 9){
                    putchar(',');
                    putchar(' ');
                }

            z++;
            }

        y++;
        }
    x++;
	}
putchar('\n');
return (0);
}
