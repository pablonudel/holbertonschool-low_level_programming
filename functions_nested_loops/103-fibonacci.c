#include <stdio.h>
/**
 * main - Print the sum of even-valued terms
 * for Fibonacci seq with value less than 4,000,000,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	unsigned int a, b, x, r, total;

	x = 0;
	a = 1;
	b = 2;
	r = 0;
	total = 2;

	while (r < 4000001)
	{
		r = a + b;
		if (r % 2 == 0)
			total += r;

		x = a;
		a = b;
		b = x + b;
	}
	printf("%u\n", total);
	return (0);
}
