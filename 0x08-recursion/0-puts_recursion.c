#include "holberton.h"

/**
 * _puts_recursion - print string using recursion.
 * @s: String to print
 * Return: No return.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
