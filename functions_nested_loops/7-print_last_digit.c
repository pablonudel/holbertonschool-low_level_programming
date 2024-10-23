#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: the number to be checked.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	if (n < 0 && n != 0)
	{
		n = ((n * -1) % 10);
		_putchar('0' + n);
	}
	else
	{
		n = n % 10;
		_putchar('0' + n);
	}
	
	return (n);
}
