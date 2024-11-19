#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: unsigned int for count
 * @...: multiples args
 *
 * Return: int - result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, res = 0;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
			res += va_arg(args, unsigned int);
		va_end(args);
	}

	return (res);
}
