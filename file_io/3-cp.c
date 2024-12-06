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
	int fd, fr, fw, fc, i = 0;
	char buffer[1024];

	if (!file_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd = open(file_from, O_RDONLY);
	if (fd == -1)
		return (-1);
	fr = read(fd, buffer, sizeof(buffer));
	if (fr == -1)
		return (-1);
	while (buffer[i])
		i++;
	fc = close(fd);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %i\n", fd);
		exit(100);
	}
	fd = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	fw = write(fd, buffer, i);
	if (fd == -1 || fw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	fc = close(fd);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %i\n", fd);
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
