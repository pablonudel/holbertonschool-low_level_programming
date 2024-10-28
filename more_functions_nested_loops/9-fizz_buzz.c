#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * for multiples of three print Fizz instead
 * for the multiples of five print Buzz
 * for multiples of both three and five print FizzBuzz.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf(" Fizz");
		if (i % 3 != 0 && i % 5 == 0)
			printf(" Buzz");
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		if (i % 3 != 0 && i % 5 != 0)
		{
			if (i == 1)
				printf("%d", i);
			else
				printf(" %d", i);
		}
		if (i == 100)
			printf("\n");
	}

	return (0);
}
