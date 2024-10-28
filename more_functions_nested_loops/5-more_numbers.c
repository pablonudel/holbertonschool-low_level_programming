#include "main.h"
/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14,
 * followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n / 10)
				_putchar('0' + (n / 10));

			_putchar('0' + (n % 10));

			if (n == 14)
				_putchar('\n');
		}
	}
}
