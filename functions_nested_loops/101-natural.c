#include <stdio.h>
/**
 * main - prints the sum of all the multiplesof 3 and 5
 * bellow 1024, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int n, r;
	r = 0;

	for (n = 1; n < 1024; n++)
	{
		r += n * 3;
		r += n * 5;
	}
	printf("%d\n", r);
	return (0);
}
