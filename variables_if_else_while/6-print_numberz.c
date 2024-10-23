#include <stdio.h>
/**
 * main - prints single digits of base 10,
 * using putchar,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
