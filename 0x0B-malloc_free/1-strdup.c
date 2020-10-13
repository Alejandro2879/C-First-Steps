#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a space in memory, which contains copy of str
 * @str: String to duplicate
 * Return: Pointer to the new string.
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
 * _strlen - Return the lenght of a string.
 * @str: String to count.
 * Return: Number of characters in str..
 */

int _strlen(char *str)
{
	int iter = 0;

	while (str[iter])
		iter++;
	return (iter);
}
