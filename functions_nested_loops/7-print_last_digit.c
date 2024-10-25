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

	if (n < 0)
		n = n * -1;

	p = n % 10;

	if (p < 0)
		p = p * -1;

	_putchar('0' + p);
	return (p);
}
