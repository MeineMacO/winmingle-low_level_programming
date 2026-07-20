#ifndef MAIN_H
#define MAIN_H


/*
* Author:  Meine Mac-Obegba
* Department:  WinMingle Community Software Engineering Program
* Project Directory:  0x07-pointers_arrays_strings
* Repository:  winmingle-low_level_programming
* Compilation:  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
* Description: main.h - Header file containing function prototypes
* Date: 1st June, 2026
*/

int _putchar(char c);

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);


#endif /* MAIN_H */



