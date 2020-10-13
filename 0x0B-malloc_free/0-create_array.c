#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Create space memory using malloc
 * @size: Size of the memory to allocate.
 * @c: Character to fill the allocated memory.
 * Return: pointer to allocated memory or NULL on fail.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int iter;
	char *str;

	if (size == 0)
		return ('\0');
	str = malloc(sizeof(c) * size);
	if (!str)
		return ('\0');

	for (iter = 0; iter < size; iter++)
	{
		*(str + iter) = c;
	}
	return (str);
}
