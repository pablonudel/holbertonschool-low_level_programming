#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: character
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0, len;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i - 1;

	while (len > -1)
	{
		_putchar(s[len]);
		len--;
	}

	_putchar('\n');
}
