#include "main.h"
/**
 * f_error - print error msg on the POSIX standard error and exit
 * @file: file to open/read/write
 * @code: error code
 *
 * Return: void
 */
void f_error(char *file, int code)
{
	if (code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(code);
	}
	if (code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(code);
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
	char *buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	fr = 1;
	while (fr)
	{
		fr = read(fd_from, buffer, 1024);
		if (fr == -1 || fd_from == -1)
			f_error(file_from, 98);

		if (fr > 0)
		{
			fw = write(fd_to, buffer, fr);
			if (fw != fr || fw == -1 || fd_to == -1)
				f_error(file_to, 99);
		}
	}

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
