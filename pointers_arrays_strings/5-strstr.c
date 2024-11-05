#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: char
 *
 * Return: *char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x;
	char *c;

	if (*needle == '\0')
		return ("");

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (x = 0; haystack[x] != '\0'; x++)
		{
			if (needle[i] == haystack[x])
			{
				c = &haystack[x];
				return (c);
			}
		}
	}

	return ('\0');
}
