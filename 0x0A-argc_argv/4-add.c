#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int _isdigit(char *s);
/**
 * main - program that adds positive numbers.
 * @argc: Arguments count.
 * @argv: Arguments vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int iter;
	unsigned int result;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (iter = 1; iter < argc; iter++)
	{
		if (_isdigit(argv[iter]))
			result += atoi(argv[iter]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}

/**
 * _isdigit - Check if there is a digit.
 * @s: String to check.
 * Return: 1 on success, 0 on fail.
 */

int _isdigit(char *s)
{
	int iter;

	for (iter = 0; s[iter]; iter++)
	{
		if (!isdigit(s[iter]))
			return (0);
	}
	return (1);
}
