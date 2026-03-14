#include <stdio.h>
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Functions, nested loops - A function that prints all natural numbers from n to 98, followed by a new line.
*Date: 14th March, 2026
*/

void print_to_98(int n){
    if (n <= 98){
	    while(n < 98){
            printf("%d, ", n);
			n++;
        }
    }
    else{
        while (n > 98){
            printf("%d, ", n);
            n--;
        }
    }

    printf("98\n");

} 

