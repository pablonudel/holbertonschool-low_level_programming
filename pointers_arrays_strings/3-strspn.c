#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: char
 *
 * Return: int - length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 1;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (s != accept)
			{
				len += 1;
			}
			accept++;
		}
		s++;
	}

	return (len);
}
