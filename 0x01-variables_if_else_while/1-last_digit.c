#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Variables, If, Else, and While in C
*Date: 28th February, 2026
*/
int main(void){
    int n;
	int last_digit;
	srand(time(0));
	n = rand() - RAND_MAX/2;
	last_digit = n % 10;
	if(last_digit > 5)
        printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
	else if(last_digit == 0)
        printf("Last digit of %i is %i and is 0\n", n, last_digit);
	else if(last_digit < 6)
        printf("last digit of %i is %i and is less than 6\n", n, last_digit);
    return(0);
}

