#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: first string and destination
 * @src: second string
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}


	dest[dest_len] = '\0';

	return (dest);
}
