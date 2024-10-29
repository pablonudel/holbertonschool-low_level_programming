#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: character
 *
 * Return: void
 */
void _puts(char *str)
{
	char *s;
	int i;
	int length;

	for (s = str; *s; ++s)
	{
		length = s - str;
	}

	if (length > 0)
	{
		for (i = 0; i < length + 1; i++)
		{
			_putchar(str[i]);
		}
	}
	if (i == length + 1)
		_putchar('\n');
}
