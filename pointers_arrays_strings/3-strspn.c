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
	unsigned int sum = 0, len = 0, i, x;

	while (s[len] != '\0')
		len++;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
				sum += 1;
		}
	}

	return (len - sum);
}
