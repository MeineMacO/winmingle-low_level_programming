#include <stdio.h>
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Functions, nested loops - A program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
*Date: 14th March, 2026
*/

int main(void){
    int number = 0;
    int sum = 0;

    while (number < 1024)
    {
        if ((number % 3 == 0) || (number % 5 == 0)) {
            sum = sum + number;
        }

        number++;
    }

    printf("%d\n", sum);

    return (0);
}
