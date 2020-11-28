#include <stdio.h>
#include "holberton.h"

/**
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int fd_value, fd_value2, size_r, size_w;
	char buffer[1024];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}

	fd_value = open(argv[1], O_RDONLY);

	size_r = read(fd_value, buffer, 1024);
	if (fd_value == -1 || size_r == -1)
	{
		close(fd_value);
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(99);
	}

	fd_value2 = open(argv[2],  O_RDWR | O_CREAT | O_TRUNC, 0644);

	while (size_r > 0)
	{
		size_w = write(fd_value2, buffer, size_w);
		if (size_w == -1 || fd_value2 == -1)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			close(fd_value2);
			exit(99);
		}

		size_r = read(fd_value, buffer, 1024);
		if (size_r == -1)
		{
			fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	close(fd_value);
	close(fd_value2);

	return(0);
}
