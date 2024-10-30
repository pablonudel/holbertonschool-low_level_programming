#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string
 *
 * Return: int - the string converted
 */
int _atoi(char *s)
{
	int i = 0, rest = 1;
	unsigned int n = 0;

	while ((s[i] > 0 && s[i] <= 47) || (s[i] >= 58 && s[i] < 127))
	{
		if (s[i] == '-')
			rest = (rest * -1);
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		n = (n * 10) + (s[i] - '0');
		i++;
	}

	return (n * rest);
}
