#include "main.h"
/**
 * error_msg - print error msgs on the POSIX standard error and exit
 * @code: exit code number
 * @file: name of the file
 * @op: option (r/w)
 * @fd: file descriptor res to close
 *
 * Return: void
 */
void error_msg(int code, char *file, char op, int fd)
{
	if (file && op)
	{
		if (op == 'r')
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (op == 'w')
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file);
	}
	else
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", fd);

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
	int fd_from, fd_to, fw, fc, tmp_len = 1024;
	char *buffer;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_msg(98, file_from, 'r', 0);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_msg(99, file_to, 'w', 0);

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		error_msg(99, file_to, 'w', 0);

	while (tmp_len == 1024)
	{
		tmp_len = read(fd_from, buffer, 1024);
		if (tmp_len == -1)
		{
			free(buffer);
			error_msg(98, file_from, 'r', 0);
		}
		fw = write(fd_to, buffer, tmp_len);
		if (fw == -1)
		{
			free(buffer);
			error_msg(99, file_to, 'w', 0);
		}
	}

	fc = close(fd_from);
	if (fc == -1)
		error_msg(100, NULL, 0, fd_from);
	fc = close(fd_to);
	if (fc == -1)
		error_msg(100, NULL, 0, fd_to);
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
