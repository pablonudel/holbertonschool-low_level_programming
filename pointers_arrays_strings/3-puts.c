#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: character
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;
	char *s;
	int length;

	for (s = str; *s; ++s)
	{
		length = s - str;
	}

	for (i = 0; str && i < length + 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
