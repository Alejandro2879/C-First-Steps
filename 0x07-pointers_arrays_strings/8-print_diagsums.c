#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals of square matrix of integer
 * @a: Pointer to array.
 * @size: size.
 * Return: No return.
 */

void print_diagsums(int *a, int size)
{
	int iter, sum1 = 0, sum2 = 0;

	for (iter = 0; iter < size; iter++)
	{
		sum1 += a[iter * (size + 1)];
		sum2 += a[(iter + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
