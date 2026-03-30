#include <stdio.h>

/*
*Authur: Meine Mac-Obegba
*Department: WinMingle Community Software Engineering Program
*Project Directory: 0x03-debugging
*Repository: winmingle-low_level_programming
*Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
*Description: Fix the function print_remaining_days() to handle leap years correctly.

*Date: 24th March, 2026
*/

void print_remaining_days(int month, int day, int year){

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){

        if (month > 2)
        	day++;
 
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else{
        if (month == 2 && day == 60)
        	printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        else{
        	
			printf("Day of the year: %d\n", day);
        	printf("Remaining days: %d\n", 365 - day);
        }
    }
}

