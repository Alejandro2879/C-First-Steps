#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n:Tthe number of times the character \ should be printed
 * Return: No return.
 */

void print_diagonal(int n)
{
	int iter, iter2;

	if (n > 0)
	{
		for (iter = 0; iter < n; iter++)
		{
			for (iter2 = 0; iter2 < iter; iter2++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
		return;
	}
	_putchar('\n');
}
