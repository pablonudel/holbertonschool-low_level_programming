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

	if (*needle == 0)
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (x = 0; needle[x] != '\0'; x++)
		{
			if (needle[x] == haystack[i])
			{
				while (needle[x] == haystack[i])
				{
					c = &haystack[i];
					return (c);
				}
			}
		}
	}

	return ('\0');
}
