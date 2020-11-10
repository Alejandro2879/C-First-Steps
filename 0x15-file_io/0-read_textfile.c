#include "holberton.h"
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t size;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	size = read(fd, buffer, letters);
	close(fd);
	if (size == -1)
	{
		free(buffer);
		return (0);
	}

	size = write(STDOUT_FILENO, buffer, size);

	free(buffer);

	return (size);
}
