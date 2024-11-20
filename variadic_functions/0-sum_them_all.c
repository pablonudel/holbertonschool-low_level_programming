#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: unsigned int for count
 * @...: multiples args
 *
 * Return: int - result or 0 if n is 0.
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
