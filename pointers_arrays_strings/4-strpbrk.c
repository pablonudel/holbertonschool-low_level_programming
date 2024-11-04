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
	int i, x;
	char *res = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				res[i] = accept[x];
				break;
			}
		}
	}

	return (res);
}
