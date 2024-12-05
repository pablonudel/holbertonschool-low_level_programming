#include "main.h"
/**
 * copy_file - copies the content of a file to another file
 * @file_from: string with name of the file to copy from.
 * @file_to: string with the name of the file to copy to.
 *
 * Return: 1 on success and -1 on failure
 */
int copy_file(char *file_from, char *file_to)
{
	int fd;

	if (!file_from)
	{
		dprintf(2, "Error: Can't read from file %s", file_from);
		exit(98);
	}
}
/**
 * main - check the code
 * @ac: number of args
 * @av: array with the args
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	copy_file(av[1], av[2]);
	return (0);
}
