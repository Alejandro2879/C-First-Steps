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
	int **bi_dim, fill, iter, iter2;

	if (width <= 0 || height <= 0)
		return ('\0');

	bi_dim = (int **) malloc(height * sizeof(int *));
	if (!bi_dim)
		return ('\0');

	for (iter = 0; iter < height; iter++)
	{
		bi_dim[iter] = malloc(width * sizeof(int));
		if (!bi_dim[iter])
		{
			free(bi_dim);
			for (iter2 = 0; iter2 < width; iter2++)
				free(bi_dim[iter2]);
			return ('\0');
		}
		for (fill = 0; fill < width; fill++)
			bi_dim[iter][fill] = 0;
	}
	return (bi_dim);
}
