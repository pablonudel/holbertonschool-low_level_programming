#include "main.h"
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
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
	}
	if (buffer)
		free(buffer);
	exit(code);
}
/**
 * copy_file - copies the content of a file to another file
 * @file_from: string with name of the file to copy from.
 * @file_to: string with the name of the file to copy to.
 *
 * Return: void
 */
void copy_file(char *file_from, char *file_to)
{
	int fd_from, fd_to, fw, fc, fr;
	char *buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	fr = read(fd_from, buffer, 1024);

	do {
		if (fd_from == -1 || fr == -1)
			f_error(98, fd_from, 0, file_from, buffer);
		fw = write(fd_to, buffer, fr);
		if (fd_to == -1 || fw == -1)
			f_error(99, 0, fd_to, file_to, buffer);

		fr = read(fd_from, buffer, 1024);
		fd_to = open(file_to, O_WRONLY | O_APPEND);
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
