#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Number to check
 * @index: Index of the bit to change.
 * Return: Always 0.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cont = 1;

	cont <<= index;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | cont;
	return (1);
}
