#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase,
 * followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int l;

	for (l = 0; l < 10; l++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
