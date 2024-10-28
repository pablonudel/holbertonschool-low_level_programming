#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: integer
 *
 * Return: 1 if is uppercase, 0 if not.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
