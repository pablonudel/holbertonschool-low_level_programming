#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: text_content is a NULL terminated string
 * to write to the file
 *
 * Return: Returns: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fw;
	char *buffer;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";


	buffer = malloc(sizeof(text_content));
	if (!buffer)
	{
		close(fd);
		return (-1);
	}

	fw = write(fd, buffer, sizeof(text_content));
	if (fw == -1)
	{
		close(fd);
		free(buffer);
		return (-1);
	}
	free(buffer);
	close(fd);
	return (1);
}
