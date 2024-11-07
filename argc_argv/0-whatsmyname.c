#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: int, arguments supplied to the program
 * @argv: char, array of pointers to the strings of the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);

	return (0);
}
