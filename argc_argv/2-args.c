#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: int, arguments supplied to the program
 * @argv: char, array of pointers to the strings of the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
