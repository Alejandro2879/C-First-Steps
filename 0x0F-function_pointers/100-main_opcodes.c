#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print opcode.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int iter = 0;
	unsigned char *point = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
			exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (iter < atoi(argv[1]) - 1)
	{
		printf("%02x ", *point);
		iter++;
		point++;
	}
	printf("%02x\n", *point);
	return (0);
}
