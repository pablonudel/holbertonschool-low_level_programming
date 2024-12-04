#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * 0 if the file can not be opened | filename is null | write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, len_r, len_w;
	char buffer[1024];

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	len_r = read(fd, buffer, letters);
	if (len_r == -1)
	{
		close(fd);
		return (0);
	}

	len_w = write(STDOUT_FILENO, buffer, len_r);
	if (len_w == -1 || len_w != len_r)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (len_w);
}
