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
	int i, x = 0;
	char *c;

	if (*needle == 0)
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[x])
		{
			while (haystack[i] == needle[x] && needle[x + 1] != '\0')
			{
				c = &haystack[i];
				return (c);

				x++;
			}
		}
	}

	return ('\0');
}
