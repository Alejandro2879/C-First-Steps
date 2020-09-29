#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swap a and b in the main function.
 * @a: Is the first number
 * @b: is the second number
 * Return: No return.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;

}
