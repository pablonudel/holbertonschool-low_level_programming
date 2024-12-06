#include "main.h"
/**
 * buff - generate buffer
 * @file_name: file where the buffer content will be copied
 *
 * Return: the buffer
 */
char *buff(char *file_name)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(99);
	}

	return (buffer);
}
/**
 * file_close - Close files
 * @fd: file descriptor to be closed
 */
void file_close(int fd)
{
	int fc = close(fd);

	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file
 * @ac: number of args
 * @av: array with the args
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, fr, fw;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = buff(av[2]);
	fd_from = open(av[1], O_RDONLY);
	fr = read(fd_from, buffer, 1024);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd_from == -1 || fr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", av[1]);
			free(buffer);
			exit(98);
		}
		fw = write(fd_to, buffer, fw);
		if (fd_to == -1 || fw == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", av[2]);
			free(buffer);
			exit(99);
		}
		fr = read(fd_from, buffer, 1024);
		fd_to = open(av[2], O_WRONLY | O_APPEND);

	} while (fr > 0);

	free(buffer);
	file_close(fd_from);
	file_close(fd_to);
	return (0);
}
