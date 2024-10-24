#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: first printed number.
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98 && n != 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	if (n > 97 && n != 98)
	{
		for (; n > 97; n--)
		{
			printf("%d, ", n);
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
