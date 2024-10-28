#include "main.h"
/**
 * _isdigit - checks for a digit btw 0 and 9
 * @c: integer
 *
 * Return: 1 if is a digit, 0 if not.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
