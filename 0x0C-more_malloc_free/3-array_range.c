#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Print number from min to max.
 * @min: First number.
 * @max: Last number.
 * Return: Pointer to new array or NULL on fail.
 */

int *array_range(int min, int max)
{
	int *array, iter, size = (max - min) + 1;

	if (min > max)
		return ('\0');
	array = (int *) malloc(size * sizeof(int));
	if (!array)
		return ('\0');

	for (iter = 0; iter <= size; iter++)
	{
		array[iter] = min;
			min += 1;
	}
	return (array);
}
