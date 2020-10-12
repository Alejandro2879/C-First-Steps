#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print multiplication of arguments 1 & 2.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int first_num = atoi(argv[1]);
		int second_num = atoi(argv[2]);
		int result = first_num * second_num;

		printf("%d\n", result);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
