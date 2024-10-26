#include <stdio.h>
/**
 * main - prints the sum of all the multiplesof 3 and 5
 * bellow 1024, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int n, r1, r2, r3, total;

	r1 = 0;
	r2 = 0;
	r3 = 0;

	for (n = 0; r1 < 1024; n++)
	{
		if (((n * 3) / 5) % 3 != 0)
		{
			r1 = n * 3;
			total += r1;
		}
	}
	
	for (n = 0; r2 < 1024; n++)
	{
		if (((n * 5) / 3) % 5 != 0)
		{
			r2 = n * 5;
			total += r2;
		}
	}

	for (n = 0; r3 < 1024; n++)
	{
		if (((n * 5) / 3) % 5 == 0 && ((n * 3) / 5) % 3 == 0)
		{
			r3 = n * 3;
			total += r3;
			r3 = n * 5;
			total += r3;
		}
	}

	printf("%d\n", total);

	return (0);
}
