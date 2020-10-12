#include <stdio.h>
/**
 * main - Print arguments passed by console, 1 per line.
 * @argc: Arguments count.
 * @argv: Arguments vector.
 * Return: Always 0.
 */


int main(int argc, char *argv[])
{
	int iter;

	for (iter = 0; iter < argc; iter++)
	{
		printf("%s\n", argv[iter]);
	}
	return (0);
}
