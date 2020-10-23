#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
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
				return(iter);
		}
	}
	return (-1);
}
