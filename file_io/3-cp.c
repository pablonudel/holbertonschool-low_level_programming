#include "main.h"
/**
 * f_error - print error msg on the POSIX standard error and exit
 * @file_from: origin file name
 * @file_to: destination file name
 *
 * Return: void
 */
void f_error(char *file_from, char *file_to)
{
	if (file_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (file_to)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
}
/**
 * c_error - print error msg on the POSIX standard error and exit
 * @fd: res of file descritor to be closed
 *
 * Return: void
 */
void c_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * copy_file - copies the content of a file to another file
 * @file_from: origin file name
 * @file_to: destination file name
 *
 * Return: void
 */
void copy_file(char *file_from, char *file_to)
{
	int fd_from, fd_to, fr, fw;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		f_error(file_from, NULL);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		f_error(NULL, file_to);

	fr = 1;
	while (fr)
	{
		fr = read(fd_from, buffer, 1024);
		if (fr == -1 || fd_from == -1)
			f_error(fd_from, NULL);

		if (fr > 0)
		{
			fw = write(fd_to, buffer, fr);
			if (fw != fr || fw == -1 || fd_to == -1)
				f_error(NULL, file_to);
		}
	}

	free(buffer);
	if (close(fd_from) == -1)
		c_error(fd_from);
	if (close(fd_to) == -1)
		c_error(fd_to);
}
/**
 * main - call copy file function
 * @argc: number of args
 * @argv: array with the args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}
