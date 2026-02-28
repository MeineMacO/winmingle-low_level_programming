#include <stdio.h>
/*
*Authur: Meine Mac-Obegba
*Program: WinMingle Community C Training
*Description: Write a C program that prints the size of various types on your machine.
*Date: 26th February, 2026.
*/
int main(void){

	printf("Size of a char: %zu byte(s)\n", sizeof(char));
    printf("Size of an int: %zu byte(s)\n", sizeof(int));
    printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
    printf("Size of a float: %zu byte(s)\n", sizeof(float));

    return(0);
}
