#include "holberton.h"

/**
 * create_file - Creates a file using open and write.
 * @filename: Pointer to the file name.
 * @text_content: Text to write into the file.
 * Return: 1 on sucess or -1 on fail.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, counter, size_w;

	if (!filename)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	while (text_content[counter])
		counter++;

	size_w = write(fd, text_content, counter);
	close(fd);

	if (size_w == -1)
		return (-1);

	return (1);
}
