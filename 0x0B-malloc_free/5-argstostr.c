#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: Argument count.
 * @av: Argument vector.
 * Return: Pointer to the new string.
 */

char *argstostr(int ac, char **av)
{
	int iter, iter_c, count_c, iter_p = 0;
	char *str = NULL;

	if (ac == 0 || av == NULL)
		return ('\0');

	for (iter = 0; av[iter]; iter++)
		count_c += _strlen(av[iter]);
	count_c = count_c + ac;

	str = malloc(sizeof(char) * count_c);
	if (!str)
		return ('\0');

	for (iter = 0; av[iter]; iter++)
	{
		for (iter_c = 0; av[iter][iter_c]; iter_c++)
		{
			str[iter_p] = av[iter][iter_c];
			iter_p++;
		}
		str[iter_p++] = '\n';
	}
	str[iter_p] = '\0';
	return (str);
}

/**
 * _strlen - Count number of characters in a string.
 * @str: String to count.
 * Return: Number of chars.
 */

int _strlen(char *str)
{
	int iter;

	for (iter = 0; str[iter]; iter++)
	{}
	return (iter);
}
