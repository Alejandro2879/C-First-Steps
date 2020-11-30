#include "holberton.h"

/**
 * more_numbers - Print numbers from 0 to 14 with _putchar.
 *
 * Return: No return.
 */

void more_numbers(void)
{
	int iter_hei, iter_len;

	for (iter_hei = 0; iter_hei <= 9; iter_hei++)
	{
		for (iter_len = 0; iter_len <= 14; iter_len++)
		{
			if (iter_len >= 10)
				_putchar(iter_len / 10 + '0');
			_putchar(iter_len % 10 + '0');
		}
		_putchar('\n');
	}
}
