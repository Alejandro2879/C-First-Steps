#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocate memory for an array with malloc.
 * @nmemb: Quantity of memory to allocate.
 * @size: Size of the data type.
 * Return: Pointer to the new array or NULL on fail.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int fill;

	if (nmemb == 0 || size == 0)
		return ('\0');

	array =  malloc(size * nmemb);
	if (!array)
		return ('\0');

	for (fill = 0; fill < nmemb * size; fill++)
	{
		array[fill] = 0;
	}
	return (array);
}
