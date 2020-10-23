#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -Execute function given as parameter on each element of array
 * @array: Array of elements to print.
 * @size: Size of the array.
 * @action: Funtion to call.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t iter;

	if (array && action)
		for (iter = 0; iter < size; iter++)
		{
			(*action)(array[iter]);
		}
}
