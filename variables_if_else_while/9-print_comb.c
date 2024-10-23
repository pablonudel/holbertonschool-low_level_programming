#include <stdio.h>
/**
 * main - prints single-digit numbers
 * separated by , and followed by a space,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
