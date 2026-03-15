#include <stdio.h>
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Functions, nested loops - A program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line without using long long, malloc, pointers, arrays/tables, or structures.
*Date: 15th March, 2026
*/

int main(void){
    int count = 3;
    unsigned int previous = 1;
    unsigned int current = 2;
    unsigned int next;

    printf("%u, %u", previous, current);

    for (count = 3; count <= 98; count++) {
        next = previous + current;
        printf(", %u", next);
        previous = current;
        current = next;
    }

    printf("\n");
    return 0;
}
