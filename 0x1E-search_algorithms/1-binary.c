#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Print an array.
 * @array: Array to print.
 * @left: Initial point to print into the array.
 * @right: End point to print into the array.
 * Return: No return.
 */

void print_array(int *array, int left, int right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		printf("%d", array[left]);
		if (left < right)
			printf(", ");
		left++;
	}
	printf("\n");
}

/**
 * binary_search - Binary search algorithm.
 * @array: Array.
 * @size: Size of the array.
 * @value: Value to search.
 * Return: Index of the found value or -1 on fail.
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;
	int mid = 0;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		print_array(array, left, right);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
