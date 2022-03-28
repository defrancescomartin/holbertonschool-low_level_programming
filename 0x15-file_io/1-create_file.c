#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_context: text to be written
 * Return: 1 on succes -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, writefile;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_context == NULL)
		return (1);
	writefile = write(fd, text_context, strlen(text_context));
	close(fd);
	if (writefile == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
