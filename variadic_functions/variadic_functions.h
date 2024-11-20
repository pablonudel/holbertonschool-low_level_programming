#ifndef variadic_functions_h
#define variadic_functions_h

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct op - Struct op
 * @op: The type option
 * @f: The function associated
 *
 * Holds a char that is associated to a type
 * and the function pointer to print an element.
 */
typedef struct op
{
	char *op;
	void (*f)(va_list args);
} op_t;
#endif
