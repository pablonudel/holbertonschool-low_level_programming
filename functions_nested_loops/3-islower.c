#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: - number to be checked.
 *
 * Return: 1 if c is lowercase
 * 0 otherwise.
 */
int _islower(int c)
{
	if (c > 95 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}	
}
