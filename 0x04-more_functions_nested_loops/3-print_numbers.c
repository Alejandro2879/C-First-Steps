#include "holberton.h"

/**
 *  print_numbers - Print numbers from 0 to 9.
 *
 * Return: No return.
 */

void print_numbers(void)
{
	int iter;

	for (iter = 48; iter <= 57; iter++)
		_putchar(iter);
	_putchar('\n');
}
