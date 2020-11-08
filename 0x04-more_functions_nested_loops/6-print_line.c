#include "holberton.h"

/**
 * print_line -  draws a straight line in the terminal
 * @n: Number of underscores to print.
 * Return: No return.
 */

void print_line(int n)
{
	int iter = 0;

	while (iter < n)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar(95);
		iter++;
	}
	_putchar('\n');

}
