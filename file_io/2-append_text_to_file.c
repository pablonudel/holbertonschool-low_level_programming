#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of file
 * @text_content: text_content is a NULL terminated string
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fw, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	fw = write(fd, text_content, i);
	if (fw == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
