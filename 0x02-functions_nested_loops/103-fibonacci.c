#include <stdio.h>
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Functions, nested loops - By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000. A program that finds and prints the sum of the even-valued terms, followed by a new line.
*Date: 15th March, 2026
*/

int main(void){
    unsigned long int previous = 1;
    unsigned long int current = 2;
    unsigned long int next;
    unsigned long int sum = 0;

    while (current <= 4000000){
	    if (current % 2 == 0)
            sum = sum + current;
	    next = previous + current;
        previous = current;
        current = next;
    }
	   printf("%lu\n", sum);
       return (0);
}
