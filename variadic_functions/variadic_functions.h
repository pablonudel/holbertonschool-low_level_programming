#ifndef variadic_functions_h
#define variadic_functions_h
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
 * struct op - Struct op
 *
 * @op: The type option
 * @f: The function associated
 */
typedef struct op
{
        char *op;
        void (*f)(va_list args);
} op_t;
#endif
