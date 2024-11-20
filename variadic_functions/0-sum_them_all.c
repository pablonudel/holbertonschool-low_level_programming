#include "variadic_functions.h"
/**
 * sum_them_all - Sum all element
 * @n: the number of element to sum
 *
 * Return: res or 0 if n is equal to 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		res += va_arg(args, int);
	va_end(args);

	return (res);
}
