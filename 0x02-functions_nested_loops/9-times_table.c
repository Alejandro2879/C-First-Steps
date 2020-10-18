#include "holberton.h"

/**
 * times_table - function prints the 9 times table, starting with 0
 *
 * Return: No return.
 */

void times_table(void)
{
	int iter1, iter2, first_dig, second_dig, contain, numb;

	for (iter1 = 0; iter1 <= 9; iter1++)
	{
		for (iter2 = 0; iter2 <= 9; iter2++)
		{
			numb = iter2 * iter1;
			if (iter2 == 0)
				_putchar(numb + '0');
			else if (numb < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar('0' + numb);
			}
			else if (numb >= 10)
			{
				_putchar(44);
				_putchar(32);
				first_dig = numb % 10;
				contain = numb - first_dig;
				second_dig = contain / 10;
				_putchar('0' + second_dig);
				_putchar('0' + first_dig);
			}
		}
		_putchar('\n');
	}
}
