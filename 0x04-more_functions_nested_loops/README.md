# 0x04. C - More Functions, More Nested Loops

## 📘 Description

This project builds on previous C programming concepts by introducing more functions and deeper use of nested loops. The goal is to strengthen understanding of function decomposition, control flow, and character manipulation using low-level output functions like `_putchar`.

## 🎯 Learning Objectives

At the end of this project, I am able to:

* Use nested loops effectively
* Write and call custom functions
* Understand function prototypes and header files
* Manipulate characters and numbers using ASCII
* Use `_putchar` instead of standard library functions like `printf`
* Break down problems into smaller reusable functions

## ⚙ Requirements

* Allowed editors: `vi`, `vim`, `emacs`

* Compilation:

  gcc -Wall -Werror -Wextra -pedantic -std=gnu89

* All files end with a new line

* Code follows the Betty coding style

* No use of standard library functions unless stated

* `_putchar` is allowed for output

## 📂 Project Structure

| File                     | Description                                    |
| ------------------------ | ---------------------------------------------- |
| `main.h`                 | Header file containing all function prototypes |
| `0-isupper.c`            | Checks for uppercase character                 |
| `1-isdigit.c`            | Checks for a digit (0–9)                       |
| `2-mul.c`                | Multiplies two integers                        |
| `3-print_numbers.c`      | Prints numbers from 0 to 9                     |
| `4-print_most_numbers.c` | Prints numbers excluding 2 and 4               |
| `5-more_numbers.c`       | Prints numbers from 0 to 14, ten times         |
| `6-print_line.c`         | Draws a straight line using `_`                |
| `7-print_diagonal.c`     | Draws a diagonal line                          |
| `8-print_square.c`       | Prints a square using `#`                      |
| `9-fizz_buzz.c`          | Implements the FizzBuzz problem                |
| `10-print_triangle.c`    | Prints a triangle using `#`                    |
| `100-prime_factor.c`     | Finds the largest prime factor                 |
| `101-print_number.c`     | Prints an integer using `_putchar`             |

## 🧠 Key Concepts

### Nested Loops

Used for patterns like squares, triangles, and repeated printing.

### Functions

Functions help break code into reusable blocks.

### ASCII Manipulation

Characters are handled using their ASCII values:

* `'0'` → 48
* `'A'` → 65
* `'a'` → 97

### Recursion (Advanced)

Used in tasks like printing numbers without arrays or standard library functions.

## 🛠 Compilation & Execution

Compile example:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o output

Run:

./output

## 🧪 Testing

Each function is tested using separate `main.c` files to verify correctness and handle edge cases.

## 👨‍💻 Author

Meine Mac-Obegba

## 🚀 Notes

This project reinforces low-level programming skills and prepares for more advanced topics like pointers, memory management, and data structures.

