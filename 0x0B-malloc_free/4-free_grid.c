#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Free memory.
 * @grid: 2 dimensional array to free.
 * @height: height of the grid.
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int iter;

	for (iter = 0; iter < height; iter++)
		free(grid[height]);
	free(grid);
}
