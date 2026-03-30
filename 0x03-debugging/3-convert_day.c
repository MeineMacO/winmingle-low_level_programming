#include "main.h"

/*
*Authur: Meine Mac-Obegba
*Department: WinMingle Community Software Engineering Program
*Project Directory: 0x03-debugging
*Repository: winmingle-low_level_programming
*Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
*Description: The file that converts date to day of the year.

*Date: 24th March, 2026
*/

int convert_day(int month, int day){

    int days_in_month[] = {
        0, 31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };/*Number of days of the 12 months in a year*/
   
    int i;
    int day_of_year = 0;

    for (i = 1; i < month; i++)
    {
        day_of_year += days_in_month[i];
    }

    day_of_year += day;

    return (day_of_year);
}
