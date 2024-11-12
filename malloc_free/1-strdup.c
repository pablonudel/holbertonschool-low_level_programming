#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char
 *
 * Return: pointer char or NULL
 */
char *_strdup(char *str)
{
	char *s;
	int i, strlen = 0;

	if (str == NULL)
		return (NULL);

	while (str[strlen] != '\0')
		strlen++;

	s = (char *)malloc((strlen + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= strlen; i++)
		s[i] = str[i];

	return (s);
}
