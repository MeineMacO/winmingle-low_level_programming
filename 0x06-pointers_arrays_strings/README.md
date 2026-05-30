# C - More Pointers, Arrays, and Strings

## Author
Meine Mac-Obegba
WinMingle Community Software Engineering Program

## Repository
winmingle-low_level_programming

## Description
This project builds on the foundations of pointers, arrays, and strings in C.
It covers string concatenation, comparison, copying, array reversal, and
string transformation functions \u2014 all implemented without standard library
functions except where explicitly stated.

## Compilation
All files are compiled with:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Files

| File | Function | Description |
|---|---|---|
| `main.h` | \u2014 | Header file containing all function prototypes |
| `_putchar.c` | `_putchar` | Writes a character to stdout using `write` |
| `0-strcat.c` | `_strcat` | Concatenates two strings |
| `1-strncat.c` | `_strncat` | Concatenates at most n bytes of src onto dest |
| `2-strncpy.c` | `_strncpy` | Copies at most n bytes from src to dest |
| `3-strcmp.c` | `_strcmp` | Compares two strings lexicographically |
| `4-rev_array.c` | `reverse_array` | Reverses an array of integers in place |
| `5-string_toupper.c` | `string_toupper` | Converts all lowercase letters to uppercase |
| `6-cap_string.c` | `cap_string` | Capitalizes the first letter of each word |
| `7-leet.c` | `leet` | Encodes a string into 1337 speak |
| `100-rot13.c` | `rot13` | Encodes a string using ROT13 |
| `101-print_number.c` | `print_number` | Prints an integer using `_putchar` only |

## Function Prototypes

```c
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
```

## Key Concepts Covered

**String Concatenation**
- `_strcat` walks to the end of `dest` first, then appends `src` from there
- `_strncat` does the same but stops after `n` characters from `src`
- Always ensure `dest` has enough space to hold both strings plus `\0`

**String Copying**
- `_strncpy` copies up to `n` characters and pads with `\0` if `src` is shorter than `n`
- If `src` is longer than `n`, `dest` will NOT be null-terminated

**String Comparison**
- `_strcmp` subtracts ASCII values at each position
- Returns `0` if equal, negative if `s1 < s2`, positive if `s1 > s2`
- Only the sign of the return value matters, not the exact number

**Array Reversal**
- `reverse_array` uses the two-pointer technique
- `start` and `end` move toward each other swapping elements until they meet
- Works for both odd and even length arrays without special cases

**String Transformation**
- `string_toupper` subtracts 32 from lowercase letters (ASCII gap between `'a'` and `'A'`)
- `cap_string` uses a `cap_next` flag that turns on after separators
- `leet` substitutes: `a\u21924`, `e\u21923`, `o\u21920`, `t\u21927`, `l\u21921`
- `rot13` shifts each letter by 13 positions using modulo 26 to wrap around

**Printing Numbers**
- `print_number` uses recursion to print digits left to right without `printf`
- Handles negative numbers by printing `-` then converting to positive before recursing

## Notes
- No standard library functions are used in any file
- `_strcmp` return value sign determines ordering, not the exact integer
- `rot13` applied twice returns the original string
- `cap_string` recognises these separators: space, tab, newline, comma,
  semicolon, period, exclamation mark, question mark, double quote, single quote



-11U:---  F1  README2.md     43%   L61
