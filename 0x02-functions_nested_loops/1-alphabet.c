#include "holberton.h"

/**
 * print_alphabet - Print alphabet in lowercase using _putchar.
 *
 * Return: No return.
 */

void print_alphabet(void)
{
	int iter = 97;

	while (iter <= 122)
	{
		_putchar(iter);
		iter++;
	}
	_putchar('\n');
}
