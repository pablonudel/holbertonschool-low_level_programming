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
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (op == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && (argv[2][0] == 47 || argv[2][0] == 37))
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(argv[2])(a, b);

	printf("%d\n", calc);

	return (0);
}
