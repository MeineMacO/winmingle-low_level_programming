#include <stdio.h>
#include <stdlib.h>
/*
*Authur: Meine Mac-Obegba
*Department: WinMingle Community Software Engineering Program
*Project Directory: 0x03-debugging
*Repository: winmingle-low_level_programming
*Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
*Description: A function that prints if integer is positive or negative
*Date: 24th March, 2026
*/
void positive_or_negative(int i){
    
	if(i > 0)
        printf("%i is positive\n", i);
	else if(i < 0)
        printf("%i is negative\n", i);
	else
        printf("%i is zero\n", i);
	
}

