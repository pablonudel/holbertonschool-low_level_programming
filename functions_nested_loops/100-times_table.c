#include "main.h"
#include <stdio.h>
/**
 * print_sequence - prints the r number.
 * @r: the number.
 *
 * Return: void
 */
void print_sequence(int r)
{
	_putchar(',');
	_putchar(' ');
	if (r / 100)
	{
		_putchar('0' + (r / 100));
		_putchar('0' + ((r / 10) % 10));
		_putchar('0' + (r % 10));
	}
	else if (r / 10 && r < 100)
	{
		_putchar(' ');
		_putchar('0' + (r / 10));
		_putchar('0' + (r % 10));
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + (r % 10));
	}
}
/**
 * print_times_table - prints the n times table, starting with 0.
 * If n is greater than 15 or less than 0
 * the function should not print anything
 * @n: n tables.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int l, c, r;

	if (n > -1 && n < 16)
	{
		for (l = 0; l < n + 1; l++)
		{
			for (c = 0; c < n + 1; c++)
			{
				r = l * c;
				if (c != 0)
				{
					print_sequence(r);
				}
				else
				{
					_putchar('0' + (r % 10));
				}
			}
			_putchar('\n');
		}
	}
}
