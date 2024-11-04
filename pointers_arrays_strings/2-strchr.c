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
	for (;; s++)
	{
		if (*s && *s == c)
			return (s);
	}
}
