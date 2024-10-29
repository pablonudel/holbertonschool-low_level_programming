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
	int i = 0, index = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
			index = 0;
		}

		if (str[i] != ' ')
		{
			if (index % 2 == 0)
				_putchar(str[i]);

			index++;
		}

		i++;
	}
	_putchar('\n');
}
