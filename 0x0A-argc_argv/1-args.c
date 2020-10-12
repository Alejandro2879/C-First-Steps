#include <stdio.h>

/**
 * main - Print number of arguments passed by console exlcuding file name.
 * @argc: Arguments count.
 * @argv: Arguments vector (unused).
 * Return: Always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc <= 1)
		printf("0\n");
	else
		printf("%d\n", argc - 1);
	return (0);
}
