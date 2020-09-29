#include "holberton.h"

/**
 * print_rev - Print a string in reverse.
 * @s: string to reverse.
 * Return: No return.
 */
void print_rev(char *s)
{
	int iter, iter_rev;

	for (iter = 0; *(s + iter); iter++)
	{}
	for (iter_rev = iter; iter_rev >= 0; iter_rev--)
	{
		_putchar(s[iter_rev]);
	}
	_putchar('\n');
}
