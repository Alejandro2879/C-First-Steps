#include "holberton.h"

/**
 * _print_rev_recursion - Print string in reverse using recursion.
 * @s: String to print.
 * Return: No return.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
