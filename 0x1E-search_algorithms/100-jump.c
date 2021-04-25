#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - Jump search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Size of the array.
 * @value: Value to search.
 * Return: Index of the found value or -1 on fail.
 */

int jump_search(int *array, size_t size, int value)
{
	int jump = (int)sqrt(size);
	int iter = 0, right = 0;

	if (array == NULL)
		return (-1);

	while (array[iter] < value && iter < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", iter, array[iter]);
		iter += jump;
	}

	right = iter;
	iter =  iter - jump;
	printf("Value found between indexes [%d] and [%d]\n", iter, right);

	for (; iter < right; iter++)
	{
		printf("Value checked array[%d] = [%d]\n", iter, array[iter]);
		if (array[iter] == value)
			return (iter);
		break;
	}
	return (-1);
}
