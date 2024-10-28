#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed.
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
		if (j == i)
			j = 0;

		_putchar('\\');
		_putchar('\n');
	}
}
