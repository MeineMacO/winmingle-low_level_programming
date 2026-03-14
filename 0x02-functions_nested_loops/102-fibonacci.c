#include <stdio.h>
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Functions, nested loops - A program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
*Date: 14th March, 2026
*/

int main(void){
    unsigned long int previous = 1;
    unsigned long int current = 2;
    unsigned long int next;
    int count = 1;

    printf("%lu, %lu", previous, current);

    while (count <= 48)
    {
        next = previous + current;
        printf(", %lu", next);

        previous = current;
        current = next;

        count++;
    }

    printf("\n");
    return (0);
}
