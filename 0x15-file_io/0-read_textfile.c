#include "main.h"

/**
 * read_textfile - code
 * @filename: code
 * @letters: code
 *
 * Return: code
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t num_read = 0, num_write = 0;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	num_read = read(fd, buffer, letters);
	if (num_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	num_write = write(STDOUT_FILENO, buffer, num_read);
	if (num_write == -1 || num_write < num_read)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (num_write);
}
