#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int a, b, x;

	a = 1;
	b = 2;

	printf("1, 2, ");
	for (i = 1; i < 97; ++i)
	{
		if (i == 96)
			printf("%lu\n", i, a + b);
		else
			printf("%lu, ", a + b);

		x = a;
		a = b;
		b = x + a;
	}

	return (0);
}
