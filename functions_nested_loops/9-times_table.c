#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int num1, num2, r, fd, ld;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			r = num1 * num2;
			ld = r % 10;
			fd = r / 10;
			if (num2 != 0)
			{
				_putchar(',');
				if (fd)
				{
					_putchar(' ');
					_putchar('0' + fd);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('0' + ld);
			if (num2 == 9)
			{
				_putchar('\n');
			}
		}
	}
}
