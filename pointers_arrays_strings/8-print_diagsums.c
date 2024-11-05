#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: int
 * @size: int
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, x = 0, y = size - 1;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + x);
		x += size + 1;
	}

	for (i = 0; i < size; i++)
	{
		sum2 += *(a + y);
		y += size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
