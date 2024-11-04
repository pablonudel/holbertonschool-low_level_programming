#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: char
 *
 * Return: pointer to the first occurrence of c or NULL
 */
char *_strchr(char *s, char c)
{
	if (c == '\0')
		return ("");
	while (*s != '\0')
	{
		if (*s && *s == c)
			return (s);
		s++;
	}

	return ('\0');
}
