#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: string
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, x;

	if (*accept == '\0')
		return ("");

	for  (i = 0; s[i] != '\0' && s[i] != 32; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				return (&s[i]);
			}
		}
	}

	return ('\0');
}
