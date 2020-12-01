#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - Sets the value of a bit to 1 at a given index..
 * @n: number to check.
 * @index: Index of the bit.
 * Return: Always 0.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cont = 1;

	cont <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(cont);
	return (1);
}
