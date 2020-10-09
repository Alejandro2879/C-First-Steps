#include "holberton.h"

/**
 * print_sing - function that prints the sign of a number.
 * @n: number to evaluate.
 * Return: 1, 0 or -1.
 */

int print_sign(int n)
{
	int ret = 0;

	if (n > 0)
	{
		ret = 1;
		_putchar(43);
	}
	else if (n < 0)
	{
		_putchar(45);
		ret = -1;
	}
	else
	{
		_putchar(48);
		ret = 0;
	}
	return (ret);
}
