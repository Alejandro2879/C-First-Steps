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

	for (iter_rev = 0; iter_rev < n; iter_rev++)
	{}
	iter_rev = iter_rev - 1;
	for (iter = 0; iter != iter_rev; iter++, iter_rev--)
	{
		cont = a[iter];
		a[iter] = a[iter_rev];
		a[iter_rev] = cont;
	}
}
