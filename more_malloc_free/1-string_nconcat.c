#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: int
 *
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1len = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1len] != '\0')
		s1len++;

	str = malloc(sizeof(char) * (s1len + n + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < s1len; i++)
		str[i] = s1[i];

	for (i = 0; i <= n; i++)
		str[s1len + i] = s2[i];

	return (str);
}
