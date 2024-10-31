#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string
 *
 * Return: char - the string converted
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (((s[i] < 'A' && s[i] > 'Z') || (s[i] < 'a' && s[i] > 'z')) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
			i++;
		}
		else
		{
			i++;
		}
			
	}

	return (s);
}
