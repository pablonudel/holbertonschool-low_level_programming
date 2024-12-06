#include "main.h"
/**
 * f_error - print error msg on the POSIX standard error and exit
 * @fd_from: return of open/rean file_from
 * @fd_to: return of open/rean file_to
 * @argv: command arguments
 * @buffer: buffer
 *
 * Return: void
 */
void f_error(int fd_from, int fd_to, char *argv[], char *buffer)
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
}
/**
 * c_error - print error msg on the POSIX standard error and exit
 * @fc: res of close file
 * @fd: res of file descritor to be closed
 *
 * Return: void
 */
void c_error(int fc, int fd)
{
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: number of args
 * @argv: array with the args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, fc, fr, fw;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fr = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	f_error(fd_from, fd_to, argv, buffer);

	do {
		if (fr == -1)
			f_error(-1, 0, argv, buffer);
		fw = write(fd_to, buffer, fr);
		if (fw == -1)
			f_error(0, -1, argv, buffer);
		fr = read(fd_from, buffer, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (fr > 0);

	free(buffer);
	fc = close(fd_from);
	c_error(fc, fd_from);
	fc = close(fd_to);
	c_error(fc, fd_to);
	return (0);
}
