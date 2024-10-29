#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: character
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, len;
	char clast, cfirst;


	while (s[i] != '\0')
	{
		i++;
	}

	len = i - 1;
	i = 0;

	while (i < len)
	{
		clast = s[len];
		cfirst = s[i];
		s[i] = clast;
		s[len] = cfirst;

		len--;
		i++;
	}
}
