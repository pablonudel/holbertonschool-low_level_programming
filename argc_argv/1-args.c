#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: int, arguments supplied to the program
 * @argv: char, array of pointers to the strings of the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv[1])
		printf("%d\n", argc - 1);
	else
		printf("0\n");

	return (0);
}
