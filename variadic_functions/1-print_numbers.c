#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: char pointer
 * @n: unsigned int - count
 * @...: args
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", va_arg(args, unsigned int));
		else
			printf("%s%d", separator ? separator : "", va_arg(args, unsigned int));
	}

	printf("\n");
	va_end(args);
}
