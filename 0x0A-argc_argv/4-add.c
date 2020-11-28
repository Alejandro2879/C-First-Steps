#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 * @argc: Arguments count.
 * @argv: Arguments vector.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int iter, contain, numb = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (iter = 1; iter < argc; iter++)
	{
		if (isdigit(argv[iter]) != 0)
		{
			contain = atoi(argv[iter]);
			numb += contain;
		}
		else
		{
			printf("Error");
			return (1);
		}
	}
	printf("%d\n", numb);
	return (0);
}
