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
	int fd, len;
	ssize_t nchars;
	char buffer[1024];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	len = read(fd, buffer, letters);
	if (len == -1)
	{
		close(fd);
		return (0);
	}

	nchars = write(STDOUT_FILENO, buffer, len);
	if (nchars == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);

	return (nchars);
}
