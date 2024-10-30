#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte,
 * to the buffer pointed to by dest.
 * @dest: character
 * @src: character
 *
 * Return: char, pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	if (dest[i + 1] != '\0')
		dest[i + 1] = '\0';

	return (dest);
}
