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
	int fd_from, fd_to, fw, fc, tmp_len = 1024;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
		exit(98);
	}

	while (tmp_len == 1024)
	{
		tmp_len = read(fd_from, buffer, 1024);
		if (tmp_len == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		fw = write(fd_to, buffer, tmp_len);
		if (fw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
			exit(98);
		}
	}

	fc = close(fd_from);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %i\n", fd_from);
		exit(100);
	}
	fc = close(fd_to);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %i\n", fd_to);
		exit(100);
	}
	return (1);
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
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	copy_file(av[1], av[2]);
	return (0);
}
