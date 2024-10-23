#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked.
 *
 * Return: 1 if is a letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
