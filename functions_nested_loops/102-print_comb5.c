#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int a, b;
	
	for (a = 0; a < 100; ++a)
	{
		for (b = a + 1; b < 100; ++b)
		{
			putchar('0' + (a /  10));
			putchar('0' + (a % 10));
			putchar(' ');
			putchar('0' + (b / 10));
			putchar('0' + (b % 10));
			
			if (b == 99 && a == b - 1)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
