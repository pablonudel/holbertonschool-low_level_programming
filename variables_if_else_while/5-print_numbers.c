#include <stdio.h>
/**
 * main - prints single digits of base zero
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
	{
		printf("%d", dig);
	}
	printf("\n");
	return (0);
}
