#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: string to encode
 *
 * Return: char - string encoded
 */
char *leet(char *s)
{
	int chars[] = {'a', 'e', 'o', 't', 'l'};
	int leet[] = {'4', '3', '0', '7', '1'};
	int i, ichars;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (ichars < 5)
		{
			if (i >= 0 && (s[i] == chars[ichars] || s[i] == (chars[ichars] - 32)))
			{
				s[i] = leet[ichars];
			}
			ichars++;
		}
		ichars = 0;
	}

	return (s);
}
