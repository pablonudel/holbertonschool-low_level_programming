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
	int i, s1_len = 0, s2_len = 0;

	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;

	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;

	return (s1 - s2);
}
