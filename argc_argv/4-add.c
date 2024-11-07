#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: int, arguments supplied to the program
 * @argv: char, array of pointers to the strings of the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int res = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		if (atoi(argv[i]) > 0)
			res += atoi(argv[i]);

	}
	printf("%u\n", res);
	return (0);
}
