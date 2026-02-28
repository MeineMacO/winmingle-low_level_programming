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
	srand(time(0));
	n = rand() - RAND_MAX/2;
	if(n>0)
        printf("%i is positive\n", n);
	else if(n<0)
        printf("%i is negative\n", n);
	else
        printf("%i is zero\n", n);
	
    return(0);
}

