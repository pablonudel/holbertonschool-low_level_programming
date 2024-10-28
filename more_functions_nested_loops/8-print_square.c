#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j, r;

	r = size * size;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < r / size; j++)
		{
			_putchar('#');
			if (j == r / size - 1)
				_putchar('\n');
		}
	}
}
