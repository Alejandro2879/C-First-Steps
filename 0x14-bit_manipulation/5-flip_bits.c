#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - Number of bits you would need to flip to get from one to another
 * @n: Number.
 * @m: number 2.
 * Return: Bit.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits = 0;
	int index = (sizeof(unsigned long int) * 8) - 1;
	unsigned long int number = n ^ m;

	for (; index >= 0; index--)
		if (((number >> index) & 1) == 1)
			bits += 1;
	return (bits);
}
