#include "holberton.h"

/**
 * append_text_to_file - that appends text at the end of a file.
 * @filename: Pointer to the file name.
 * @text_content: is the NULL terminated string to add at the end of the file.
 * Return: 1 on sucess or -1 on fail.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, size_w, counter = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	file_d = open(filename, O_RDWR | O_APPEND);
	if (file_d == -1)
	{
		close(file_d);
		return (-1);
	}
	while (text_content[counter])
		counter++;

	size_w = write(file_d, text_content, counter);
	close(file_d);
	if (size_w == -1)
		return (-1);

	return (1);
}
