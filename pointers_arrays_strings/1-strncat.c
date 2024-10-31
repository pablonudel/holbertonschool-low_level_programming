#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: first string and destination
 * @src: second string
 * @n: size
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
