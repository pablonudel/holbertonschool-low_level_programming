#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: the number to be computed.
 *
 * Return: the absolute value of an integrer.
 */
int _abs(int n)
{
	if (n < 0 && n != 0)
	{
		n = -n;
		return (n);
	}
	else
	{
		return (n);
	}

}
