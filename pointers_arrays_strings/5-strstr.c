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
		x = 0;

		if (haystack[i] == needle[x])
		{
			while (haystack[i] == needle[x])
			{
				if (needle[x + 1] != '\0')
				{
					c = &haystack[i];
					return (c);
				}
				x++;
			}
		}
	}

	return ('\0');
}
