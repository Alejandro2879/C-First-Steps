#include "holberton.h"

/**
 * print_binary - Print a number in base 2.
 *
 * Return: No return.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
