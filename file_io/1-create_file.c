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
	int fd, fw, i = 0;
	char *buffer;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
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

	while (text_content[i])
	{
		buffer[i] = text_content[i];
		i++;
	}
	buffer[i] = '\0';

	fw = write(fd, buffer, sizeof(buffer));
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
