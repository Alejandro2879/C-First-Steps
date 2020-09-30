#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Print al positions of an array.
 * @a: Is the array.
 * @n: Number of elements in the array.
 * Return: No return.
 */
void print_array(int *a, int n)
{
	int iter = 0;

	while (iter < n)
	{
		printf("%d", a[iter]);
		if (iter < (n - 1))
			printf(", ");
		iter++;
	}
	printf("\n");
}
