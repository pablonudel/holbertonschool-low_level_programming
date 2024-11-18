#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - return result of operation
 * @argc: int
 * @argv: char
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int a, b, calc;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2][0];

	if (op != 43 && op != 45 && op != 42 && op != 47 && op != 37)
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && (op == 47 || op == 37))
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(argv[2])(a, b);

	printf("%d\n", calc);

	return (0);
}
