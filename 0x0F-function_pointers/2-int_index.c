#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: Array of elements to check.
 * @size: Size of the array.
 * @cmp: Function to call.
 * Return: Index of the first element on sucess or -1 on fail.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int iter;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (iter = 0; iter < size; iter++)
		{
			if ((*cmp)(array[iter]))
				return (iter);
		}
	}
	return (-1);
}
