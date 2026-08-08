# 0x08 - Recursion

## Author
Meine Mac-Obegba
WinMingle Community Software Engineering Program

## Repository
winmingle-low_level_programming

## Description
This project covers the fundamentals of recursion in C. Every function
is implemented using recursion — no loops, no static variables, and no
standard library functions are used. Each function calls itself with a
smaller version of the problem until a base case is reached.

## Compilation
All files are compiled with:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Rules
- No loops of any kind (`for`, `while`, `do...while`)
- No global variables
- No static variables
- No standard library functions (`printf`, `puts`, etc.)
- No more than 5 functions per file
- All files end with a new line
- Only `_putchar` is allowed for output

## Files

| File | Function | Description |
|---|---|---|
| `main.h` | — | Header file containing all function prototypes |
| `_putchar.c` | `_putchar` | Writes a character to stdout using `write` |
| `0-puts_recursion.c` | `_puts_recursion` | Prints a string followed by a newline |
| `1-print_rev_recursion.c` | `_print_rev_recursion` | Prints a string in reverse |
| `2-strlen_recursion.c` | `_strlen_recursion` | Returns the length of a string |
| `3-factorial.c` | `factorial` | Returns the factorial of a number |
| `4-pow_recursion.c` | `_pow_recursion` | Returns x raised to the power of y |
| `5-sqrt_recursion.c` | `_sqrt_recursion` | Returns the square root of a number |
| `6-is_prime_number.c` | `is_prime_number` | Checks if a number is prime |
| `100-is_palindrome.c` | `is_palindrome` | Checks if a string is a palindrome |
| `101-wildcmp.c` | `wildcmp` | Compares two strings with wildcard support |

## Function Prototypes

```c
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
```

## Key Concepts Covered

**What is Recursion?**
Every recursive function has two parts:
- **Base case** — the condition that stops the recursion
- **Recursive case** — the function calling itself with a smaller problem

Without a base case, recursion never stops and causes a stack overflow.

**Print vs Reverse Print**
The order of `_putchar` relative to the recursive call controls direction:
```c
/* prints forward - putchar BEFORE recursion */
_putchar(*s);
_puts_recursion(s + 1);

/* prints in reverse - putchar AFTER recursion */
_print_rev_recursion(s + 1);
_putchar(*s);
```

**Factorial and Power**
Both follow the same pattern of multiplying on the way back up:
```
factorial(4) = 4 * factorial(3) = 4 * 3 * 2 * 1 * 1 = 24
_pow(2, 3)   = 2 * _pow(2, 2)  = 2 * 2 * 2 * 1     = 8
```

**Square Root and Prime — Helper Functions**
Both need an extra parameter (a counter) that the caller should not provide.
A private helper function carries this extra state:
```c
int sqrt_helper(int n, int guess);    /* private - not in main.h */
int prime_helper(int n, int divisor); /* private - not in main.h */
```

**Palindrome — Two Pointer Technique via Recursion**
Instead of modifying the string, index positions move inward on each call:
```
"racecar": compare index 0 and 6 → match → compare 1 and 5 → match → ...
```

**Wildcmp — Wildcard Matching**
`*` in `s2` can match any sequence of characters including empty string.
Two options are tried at every `*`:
- Match `*` with nothing → skip `*`, keep `s1`
- Match `*` with one character → advance `s1`, keep `*`

The `||` operator ensures either path leading to a match returns 1.

## Return Values

| Function | Returns |
|---|---|
| `factorial(n)` | `-1` if n is negative |
| `_pow_recursion(x, y)` | `-1` if y is negative |
| `_sqrt_recursion(n)` | `-1` if n is negative or not a perfect square |
| `is_prime_number(n)` | `1` if prime, `0` if not |
| `is_palindrome(s)` | `1` if palindrome, `0` if not |
| `wildcmp(s1, s2)` | `1` if match, `0` if not |

## Notes
- Helper functions (`sqrt_helper`, `prime_helper`, `palindrome_helper`)
  are private and not declared in `main.h`
- `is_palindrome` uses a helper to avoid modifying the original string
- `wildcmp` uses `||` to explore both wildcard possibilities simultaneously
- Applying `rot13` twice always returns the original string
