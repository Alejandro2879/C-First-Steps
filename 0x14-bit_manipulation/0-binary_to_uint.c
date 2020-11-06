#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: Is pointing to a string of 0 and 1 chars.
 * Return: Decimal number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int iter = 0, base = 1;

	if (!b)
		return ('\0');

	while (b[iter])
	{
		if (b[iter] != '0' && b[iter] != '1')
			return ('\0');
		iter++;
	}

	iter = iter - 1;
	while (iter >= 0)
	{
		if (b[iter] == '1')
		{
			number += base;
		}
		base *= 2;
		iter--;
	}
	return (number);
}
