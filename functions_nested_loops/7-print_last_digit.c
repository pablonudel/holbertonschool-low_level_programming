#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: the number to be checked.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	int p;
	if (n < 0 && n != 0)
	{
		n = -n;
	}
	
	p = n % 10;
	_putchar('0' + p);
	return (p);
}
