#include "variadic_functions.h"
/**
 * sum_them_all - Sum all element
 * @n: the number of element to sum
 *
 * Return: 0 if n == 0 else the sum of elem
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, 0);
	for (i = 0; i < n; i++)
		s += va_arg(args, int);
	va_end(args);

	return (s);
}
