#include <stdio.h>
#include <stdlib.h>
/**
* linear_search - Linear search algorithm.
* @array: Pointer to the first element in the array.
* @size: Size of the array.
* @value: Value to find.
* Return: Index of the found number or -1 on fail.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)index,
		       array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
