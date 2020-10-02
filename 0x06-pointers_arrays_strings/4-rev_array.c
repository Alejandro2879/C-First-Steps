#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array.
 * @a: an array of integers
 * @n: the number of elements to swap.
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int iter, iter_rev, cont;

	iter_rev = n - 1;
	for (iter = 0; iter < iter_rev; iter++, iter_rev--)
	{
		cont = a[iter];
		a[iter] = a[iter_rev];
		a[iter_rev] = cont;
	}
}
