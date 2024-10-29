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
	{
		for (i = len - ((len - 1) / 2); i < len + 1; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');


}
