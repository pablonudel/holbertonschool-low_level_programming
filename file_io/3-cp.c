#include "main.h"
/**
 * buff - create a buffer
 * @file_name: file where buffer content is going to be copied
 *
 * Return: allocated memory
 */
char *buff(char *file_name)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(99);
	}

	return (buffer);
}
/**
 * f_error - print error msgs on the POSIX standard error and exit
 * @code: exit code number
 * @fd_from: return of open/rean file_from
 * @fd_to: return of open/rean file_to
 * @file_name: file name
 * @buffer: buffer
 *
 * Return: void
 */
void f_error(int code, int fd_from, int fd_to, char *file_name, char *buffer)
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		free(buffer);
		exit(code);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		free(buffer);
		exit(code);
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
	int fd_from, fd_to, fc, fr, fw;
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
		f_error(98, fd_from, 0, av[1], buffer);
		fw = write(fd_to, buffer, fr);
		f_error(99, 0, fd_to, av[2], buffer);
		fr = read(fd_from, buffer, 1024);
		fd_to = open(av[2], O_WRONLY | O_APPEND);
	} while (fr > 0);

	free(buffer);
	fc = close(fd_from);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", fd_from);
		exit(100);
	}
	fc = close(fd_to);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", fd_to);
		exit(100);
	}
	return (0);
}
