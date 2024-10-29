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
	int i = 0, n = 0;

	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
		{
			n = n * 10 + (str[i] - 48);
			if (n % 2 == 0)
				_putchar(str[i]);
		}
		else
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
