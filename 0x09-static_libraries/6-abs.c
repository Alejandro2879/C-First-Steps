#include "holberton.h"
#include <stdio.h>

/**
 * _abs - function computes the absolute value of an integer.
 * @n: Number to compute.
 * Return: Absolute number of n.
 */

int _abs(int n)
{
	int abs = 0;

	if (n < 0)
		abs = (n * -1);
	else
		abs = n;
	return (abs);
}
