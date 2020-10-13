#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int iter;
	char *new_str;

	if (str == '\0')
		return ('\0');

	new_str = malloc(sizeof(str) * _strlen(str));
	if (!new_str)
		return ('\0');
	for (iter = 0; str[iter]; iter++)
	{
		*(new_str + iter) = *(str + iter);
	}
	return (new_str);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int _strlen(char *str)
{
	int iter = 0;

	while (str[iter])
		iter++;
	return (iter);
}
