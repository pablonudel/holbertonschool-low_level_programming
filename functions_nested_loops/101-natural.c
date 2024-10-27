#include <stdio.h>
/**
 * main - prints the sum of all the multiplesof 3 and 5
 * bellow 1024, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int n, total;

	n = 0;
	total = 0;

	for (n = 0; n * 3 < 1024; n++)
	{
		total += n * 3;
		if ((n * 5) % 3 != 0 && n * 5 < 1024)
		{
			total += n * 5;
		}
	}
	printf("%d\n", total);

	return (0);
}
