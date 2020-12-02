#include "holberton.h"

/**
 * print_number - Print numbers digit to digit.
 * @n: number to print.
 * Return: No return.
 */

void print_number(int n)
{
	int num_d = 10, mod;

	if (n >=  0 && n <= 9)
		_putchar(n + '0');
	else if (n < 0 && n > -10)
	{
		_putchar('-');
		_putchar(n + '0');
	}
	else
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
		}
		while (n / num_d > 9)
		{
			num_d = num_d * 10;
		}
		while (num_d > 0)
		{
			mod = n / num_d;
			n = n % num_d;
			_putchar(mod + 48);
			num_d = num_d / 10;
		}
	}
}
