# 0x07 - Pointers, Arrays and Strings

**Author:** Meine Mac-Obegba
**Program:** WinMingle Community Software Engineering Program
**Repository:** winmingle-low_level_programming
**Directory:** 0x07-pointers_arrays_strings
**Compilation:** `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`

---

## Description

This project is a continuation of the low-level programming series in C, focusing on advanced use of pointers, arrays, and strings. It covers memory manipulation, string searching, and working with multi-dimensional arrays and pointer-to-pointer constructs.

---

## Header File

`main.h` — Contains all function prototypes used across the project.

---

## Function Prototypes

| Prototype | Description |
|---|---|
| `int _putchar(char c)` | Writes a character to stdout |
| `char *_memset(char *s, char b, unsigned int n)` | Fills memory with a constant byte |
| `char *_memcpy(char *dest, char *src, unsigned int n)` | Copies memory area |
| `char *_strchr(char *s, char c)` | Locates character in string, returns a pointer to the first occurrence or NULL |
| `unsigned int _strspn(char *s, char *accept)` | Returns length of prefix substring matching bytes from accept. |
| `char *_strpbrk(char *s, char *accept)` | Finds first occurrence in s of any bytes in accept. |
| `char *_strstr(char *haystack, char *needle)` | Locates a substring `needle` in string `haystack` |
| `void print_chessboard(char (*a)[8])` | Prints an 8x8 chessboard |
| `void print_diagsums(int *a, int size)` | Prints the sum of the two diagonals of a square  matrix |
| `void set_string(char **s, char *to)` | Sets the value of a pointer to a char |

---

## Files

| File | Description |
|---|---|
| `main.h` | Header file with all function prototypes |
| `0-memset.c` | Implementation of `_memset` |
| `1-memcpy.c` | Implementation of `_memcpy` |
| `2-strchr.c` | Implementation of `_strchr` |
| `3-strspn.c` | Implementation of `_strspn` |
| `4_strpbrk.c` | Implementation of `_strpbrk` |
| `5_strstr.c` | Implementation of `_strstr` |
| `6_print_chessboard.c` | Implementation of `print_chessboard` |
| `7_print_diagsums.c` | Implementation of `print_diagsums` |
| `8_set_string.c` | Implementation of `set_string` |

---

## Compilation Example

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c 5-strstr.c -o strstr
./strstr
```

---

## Environment

- Language: C (gnu89 standard)
- OS: Ubuntu
- Compiler: GCC

---

