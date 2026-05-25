# C - Pointers, Arrays, and Strings

## Author
Meine Mac-Obegba
WinMingle Community Software Engineering Program

## Repository
winmingle-low_level_programming

## Directory
pointers_arrays_strings

## Description
This project covers the fundamentals of pointers, arrays, and strings in C.
Each function is implemented without the use of standard library functions
(except where explicitly stated), using only `_putchar` which wraps the
`write` system call.

## Compilation
All files are compiled with:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Files

| File | Function | Description |
|---|---|---|
| `main.h` | — | Header file containing all function prototypes |
| `_putchar.c` | `_putchar` | Writes a character to stdout using `write` |
| `0-reset_to_98.c` | `reset_to_98` | Sets the value at a pointer's address to 98 |
| `1-swap.c` | `swap_int` | Swaps the values of two integers using pointers |
| `2-strlen.c` | `_strlen` | Returns the length of a string |
| `3-puts.c` | `_puts` | Prints a string followed by a newline |
| `4-print_rev.c` | `print_rev` | Prints a string in reverse followed by a newline |
| `5-rev_string.c` | `rev_string` | Reverses a string in place |
| `6-puts2.c` | `puts2` | Prints every other character of a string |
| `7-puts_half.c` | `puts_half` | Prints the second half of a string |
| `8-print_array.c` | `print_array` | Prints n elements of an integer array |
| `9-stripy.c` | `_strcpy` | Copies a string from src to dest |
| `10-atoi.c` | `_atoi` | Converts a string to an integer |
| `101-keygen.c` | `main` | Generates a random valid password for crackme |
| `crackme.c` | `main` | Sample crackme style C program used with the 101-kengen.c |
## Function Prototypes

```c
int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
```

## Key Concepts Covered

**Pointers**
- Dereferencing pointers to read and modify values
- Passing pointers to functions to modify original variables
- Saving pointer addresses before walking through memory

**Arrays and Strings**
- Strings in C are arrays of characters terminated by `\0`
- The difference between `char *s = "text"` (read-only) and `char s[] = "text"` (writable)
- Always allocate `_strlen(src) + 1` bytes for a destination buffer to account for `\0`

**String Manipulation**
- Walking strings with pointer arithmetic
- Two-pointer technique for in-place reversal
- Printing subsets of strings using index calculations

**Integer Conversion**
- Converting integers to characters using ASCII arithmetic (`'0' + digit`)
- Recursive digit printing to preserve left-to-right order
- Handling signs, leading non-digits, and stopping at non-digit characters

## Notes
- No standard library functions are used except in `101-keygen.c`
- `101-keygen.c` uses `srand()`, `rand()`, `time()`, and `printf()` as permitted
- `print_int` is a private helper in `8-print_array.c` and is not declared in `main.h`
