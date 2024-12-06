#include "main.h"
/**
 * error_msgs - print error msgs on the POSIX standard error and exit
 * @res: res of operation (open/read/close)
 * @close: res of file to be closed
 * @file: name of the file
 * @op: char with the error option (r/w/c)
 *
 * Return: void
 */
void error_msgs(int res, int close, char *file, char op)
{
	if (res == -1)
	{
		if (op == 'r')
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
			exit(98);
		}
		if (op == 'w')
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file);
			exit(99);
		}
		if (op == 'c')
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", close);
			exit(100);
		}
	}
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
	int fd_from, fd_to, fw, fc, tmp_len = 1024;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	error_msgs(fd_from, 0, file_from, 'r');
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_msgs(fd_to, 0, file_to, 'w');

	while (tmp_len == 1024)
	{
		tmp_len = read(fd_from, buffer, 1024);
		error_msgs(tmp_len, 0, file_from, 'r');
		fw = write(fd_to, buffer, tmp_len);
		error_msgs(fw, 0, file_to, 'w');
	}

	fc = close(fd_from);
	error_msgs(fc, fd_from, NULL, 'c');
	fc = close(fd_to);
	error_msgs(fc, fd_to, NULL, 'c');
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
