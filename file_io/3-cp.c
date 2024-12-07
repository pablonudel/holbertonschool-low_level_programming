#include "main.h"
/**
 * buff - create a buffer
 * @file_name: file the buffer will paste the content
 *
 * Return: the buffer
 */
char *buff(char *file_name)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write fd_to %s\n", file_name);
		exit(99);
	}

	return (buffer);
}
/**
 * file_close - close file descriptors
 * @fd: res of file descriptor to be closed
 *
 * Return: void
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
 * main - Copies the content of a file to another file.
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, fr, fw;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = buff(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	fr = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd_from == -1 || fr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read fd_from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		fw = write(fd_to, buffer, fr);
		if (fd_to == -1 || fw == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write fd_to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		fr = read(fd_from, buffer, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (fr > 0);

	free(buffer);
	file_close(fd_from);
	file_close(fd_to);
	return (0);
}
