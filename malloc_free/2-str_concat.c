#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: char - first string
 * @s2: char - second string
 *
 * Return: char or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, s1len = 0, s2len = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1len] != '\0')
		s1len++;
	while (s2[s2len] != '\0')
		s2len++;

	s = malloc((s1len + s2len) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
		s[i] = s1[i];
	for (i = 0; i < s2len; i++)
		s[s1len + i] = s2[i];

	return (s);
}
