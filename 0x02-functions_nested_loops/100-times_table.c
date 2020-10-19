#include "holberton.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: Table of.
 * Return: No return.
 */

void print_times_table(int n)
{
	int iter, iter2, mult = 0;

	if (n >= 0 && n <= 15)
	{
		for (iter = 0; iter <= n; iter++)
		{
			for (iter2 = 0; iter2 <= n; iter2++)
			{
				mult = iter * iter2;
				if (mult == 0)
				{
					printf("%d", mult);
					if (iter == 0 && iter2 < n)
						printf(",   ");
				}
				else if (mult <= 9)
				{
					printf(",   ");
					printf("%d", mult);
				}
				else if (mult >= 10 && mult < 100)
				{
					printf(",  ");
					printf("%d", mult);
				}
				else if (mult >= 100)
				{
					printf(", ");
					printf("%d", mult);
				}
			}
			printf("\n");
		}
	}
}
