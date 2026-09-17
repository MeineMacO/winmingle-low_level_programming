#ifndef MAIN_H
#define MAIN_H


/*
* Author:  Meine Mac-Obegba
* Department:  WinMingle Community Software Engineering Program
* Project Directory:  0x09-static_libraries
* Repository:  winmingle-low_level_programming
* Compilation:  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
* Description: main.h - Header file containing function prototypes
* Date: 1st June, 2026
*/

int _putchar(char c);

int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif /* MAIN_H */

