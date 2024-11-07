#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: int, arguments supplied to the program
 * @argv: char, array of pointers to the strings of the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	unsigned int res = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		res += atoi(argv[i]);

	}
	printf("%u\n", res);
	return (0);
}
