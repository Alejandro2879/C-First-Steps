#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocate memory for a bi-dimensional array.
 * @width: width of the array
 * @height: height of the array
 * Return: Pointer to bidimensional array.
 */

int **alloc_grid(int width, int height)
{
	int **bi_dim, rows, iter, iter2;

	if (width <= 0 || width == '\0')
		return ('\0');
	if (height <= 0 || height == '\0')
		return ('\0');

	bi_dim = (int **) malloc(width * sizeof(int *));
	if (!bi_dim)
		return ('\0');

	for (rows = 0; rows < width; rows++)
	{
		bi_dim[rows] = malloc(height * sizeof(int *));
		if (!bi_dim[rows])
			return ('\0');
	}

	for (iter = 0; iter < height; iter++)
	{
		for (iter2 = 0; iter2 < width; iter2++)
		{
			bi_dim[iter][iter2] = 0;
		}
	}
	return (bi_dim);
}
