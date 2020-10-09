#include "holberton.h"

/**
 * print_alphabet_x1 - Print alphabet 10 times using _putchar.
 *
 * Return: No return.
 */

void print_alphabet_x10(void)
{
	int iter, counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (iter = 97; iter <= 122; iter++)
			_putchar(iter);
		_putchar('\n');
	}
}
