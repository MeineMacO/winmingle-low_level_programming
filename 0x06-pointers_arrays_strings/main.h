#ifndef MAIN_H
#define MAIN_H

/*
*Author: Meine Mac-Obegba
*Department: WinMingle Community Software Engineering Program
*Project Directory: 0x06-pointers_arrays_stringss
*Repository: winmingle-low_level_programming
*Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
*Description: main.h - Header file containing function prototypes
*Date: 20th May, 2026
*/

int _putchar(char c);

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);

#endif /* MAIN_H */

