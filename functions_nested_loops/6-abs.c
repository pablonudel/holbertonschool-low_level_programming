#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: the number to be computed.
 *
 * Return: the absolute value of an integrer.
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
