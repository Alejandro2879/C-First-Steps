#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day.
 *
 * Return: No return.
 */

void jack_bauer(void)
{
	int hour1, hour2, minute1, minute2;

	for (hour1 = 0; hour1 <= 2; hour1++)
	{
		for (hour2 = 0; hour2 <= 9; hour2++)
		{
			for (minute1 = 0; minute1 <= 5; minute1++)
			{
				for (minute2 = 0; minute2 <= 9; minute2++)
				{
					if (hour1 == 2 && hour2 >= 4)
						break;
					_putchar('0' + hour1);
					_putchar('0' + hour2);
					_putchar(58);
					_putchar('0' + minute1);
					_putchar('0' + minute2);
					_putchar('\n');
				}
			}
		}
	}
}
