#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: character
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, len;

	while (str[i] != '\0')
	{
		i++;
	}

	len = i;

	if (len % 2 != 0)
		i = len - ((len - 1) / 2);
	else
		i = len / 2 + 1;

	while (i < len + 1)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');


}
