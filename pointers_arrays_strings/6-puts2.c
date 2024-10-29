#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: character
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, index = -1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
		}

		if (str[i] != ' ')
		{
			index++;
			if (index % 2 == 0)
				_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
