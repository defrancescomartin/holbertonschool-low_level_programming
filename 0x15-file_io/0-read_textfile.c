#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fd = open (filename, O_RDONLY);
	size = write(STDOUT_FILENO, buff, read(fd, buff, letters));
	if (fd == -1 || size == -1)
		return (0);

	close(fd);
	free(buff);
	return (size);
}
