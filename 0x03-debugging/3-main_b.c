#include <stdio.h>
#include "main.h"

/*
*Authur: Meine Mac-Obegba
*Department: WinMingle Community Software Engineering Program
*Project Directory: 0x03-debugging
*Repository: winmingle-low_level_programming
*Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
*Description: Main file for - Fix the function print_remaining_days() to handle leap years correctly.

*Date: 24th March, 2026
*/
 
int main(void){

    int month = 2;
    int day = 29;
    int year = 2000;
    int day_of_year;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day_of_year = convert_day(month, day);

    print_remaining_days(month, day_of_year, year);

    return (0);
}
