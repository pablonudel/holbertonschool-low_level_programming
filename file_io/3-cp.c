#include "main.h"
/**
 * f_error - print error msg on the POSIX standard error and exit
 * @err_msg: string with error msg
 * @file_name: file
 * @code: error code
 * @buffer: buffer to free
 *
 * Return: void
 */
void f_error(char *err_msg, char *file_name, int code, char *buffer)
{
	dprintf(STDERR_FILENO, err_msg, file_name);
	if (buffer)
		free(buffer);
	exit(code);
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
 * main - copies the content of a file to another file
 * @argc: number of args
 * @argv: array with the args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, fr, fw;
	char *buffer = NULL;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		f_error("Error: Can't read from file %s\n", argv[1], 98, buffer);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		f_error("Error: Can't write to file %s\n", argv[2], 99, buffer);
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		f_error("Error: Can't write to file %s\n", argv[2], 99, buffer);
	fr = read(fd_from, buffer, 1024);
	do {
		if (fr == -1 || fd_from == -1)
			f_error("Error: Can't read from file %s\n", argv[1], 98, buffer);
		fw = write(fd_to, buffer, fr);
		if (fw == -1 || fd_to == -1)
			f_error("Error: Can't write to file %s\n", argv[2], 99, buffer);
		fr = read(fd_from, buffer, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (fr > 0);

	free(buffer);
	if (close(fd_from) == -1)
		c_error(fd_from);
	if (close(fd_to) == -1)
		c_error(fd_to);
	return (0);
}
