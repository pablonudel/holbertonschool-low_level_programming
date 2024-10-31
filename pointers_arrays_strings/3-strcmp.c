#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: int - 0 if s1 and s2 are equals
 * negative value if s1 is less than s2
 * positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int res = 0, s1_len = 0, s2_len = 0;

	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}

	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}

	if (s1_len == s2_len)
		res = 0;
	else
		res = s1_len + s2_len + 4;

	if (s1_len < s2_len)
		res = res * -1;

	return (res);
}
