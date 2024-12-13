
# Variadic Functions in C

This project implements and demonstrates the use of **variadic functions** in C, which allow functions to accept a variable number of arguments. The exercises explore how to define, work with, and manage these functions using the `stdarg.h` library, providing practical examples and applications.
# Project requirements & Tasks

- All your files will be compiled on Ubuntu 20.04 LTS using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Code use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- Not allowed to use global variables.
- No more than 5 functions per file.
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `puts`, `calloc`, `realloc` etc… is forbidden.
- You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c)
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called [variadic_functions.h](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/variadic_functions/variadic_functions.h)
## 0. Beauty is variable, ugliness is constant

Function that returns the sum of all its parameters.

- Prototype: `int sum_them_all(const unsigned int n, ...);`
- If `n == 0`, return `0`

File: [0-sum_them_all.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/variadic_functions/0-sum_them_all.c)

## 1. To be is to be the value of a variable

Function that prints numbers, followed by a new line.

- Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
- Where `separator` is the string to be printed between numbers
- And `n` is the number of integers passed to the function
- The use of `printf` is allowed
- If separator is NULL, don’t print it
- Print a new line at the end of your function

File: [1-print_numbers.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/variadic_functions/1-print_numbers.c)

## 2. One woman's constant is another woman's variable

Function that prints strings, followed by a new line.

- Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
- Where `separator` is the string to be printed between the strings
- And `n` is the number of strings passed to the function
- The use of `printf` is allowed
- If separator is NULL, don’t print it
- If one of the string is NULL, print `(nil)` instead
- Print a new line at the end of your function

File: [2-print_strings.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/variadic_functions/2-print_strings.c)

## 3. To be is to be the value of a variable

Function that prints anything.

- Prototype: `void print_all(const char * const format, ...);`
- where `format` is a list of types of arguments passed to the function
    - `c`: `char`
    - `i`: `integer`
    - `f`: `float`
    - `s`: `char *` (if the string is NULL, print `(nil)` instead)
    - any other char should be ignored
- The use `for`, `goto`, ternary operator, `else`, `do ... while` is NOT allowed
- Use a maximum of
    - 2 `while` loops
    - 2 `if`
- Declare a maximum of `9` variables
- The use of `printf` is allowed
- Print a new line at the end of your function

File: [3-print_all.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/variadic_functions/3-print_all.c)
