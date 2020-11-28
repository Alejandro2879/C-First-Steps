#include "holberton.h"

/**
 * print_times_table - function that prints the n times table
 * @n: n times table of the n number
 * Return: nothing
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n && a <= 15; a++)
		{
			for (b = 0; b <= n && b <= 15; b++)
			{
				c = a * b;
				if (b > 0 && b <= n)
				{
					if (c < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					if (c > 9 && c < 100)
					{
						_putchar(' ');
						_putchar(' ');
					}
					if (c >= 100)
						_putchar(' ');
				}
				if (c >= 100)
					_putchar((c / 100) + '0');
				if (c >= 10)
					_putchar(((c / 10) % 10) + '0');
				_putchar((c % 10) + '0');
				if (b != 15 && b != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
