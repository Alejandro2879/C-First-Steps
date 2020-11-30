#include "holberton.h"

/**
 * print_number - print number with _putchar function.
 * @n: Number to print.
 *
 * Return: No return.
 */

void print_number(int n)
{
	unsigned int container = 0;
	int num_a = 10, num_b;

	if (n >= 0 && n < 10)
		_putchar(n + 48);
	else if (n < 0 && n > -10)
	{
		n = n * -1;
		_putchar('-');
		_putchar(n + 48);
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar('-');
		}
		container = n;
		while (container / num_a > 9)
		{
			num_a = num_a * 10;
		}
		while (num_a > 0)
		{
			num_b = container / num_a;
			container = container % num_a;
			_putchar(num_b + 48);
			num_a = num_a / 10;
		}
	}
}
