#include "holberton.h"

/**
 * print_most_numbers - Print numbers from 0 to 9 except 2 & 4.
 *
 * Return: Numbers.
 */

void print_most_numbers(void)
{
	int iter;

	for (iter = 48; iter <= 57; iter++)
	{
		if (iter != 50 && iter != 52)
			_putchar(iter);
	}
	_putchar('\n');
}
