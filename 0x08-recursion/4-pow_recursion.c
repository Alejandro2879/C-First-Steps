#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: Number.
 * @y: Exponent.
 * Return: Raised number or -1 on fail.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x *= _pow_recursion(x, y - 1));
}
