#!/bin/bash
# Author: Meine Mac-Obegba
# Department: WinMingle Community Software Engineering Program
# Project Directory: 0x09-static_libraries
# Repository: winmingle-low_level_programming
# Description: create_static_lib.sh - compiles all .c files into liball.a
# Date: 1st September, 2026

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
ar rcs liball.a *.o
