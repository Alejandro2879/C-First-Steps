#include "holberton.h"

/**
 * print_square - Print squares
 * @size: Size of the square.
 * Return: No return.
 */

void print_square(int size)
{
	int height, width;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
