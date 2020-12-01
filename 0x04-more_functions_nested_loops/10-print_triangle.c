#include "holberton.h"

/**
 * print_triangle - Print a triangle with the # char.
 * @size: Size of the triangle.
 * Return: No return.
 */

void print_triangle(int size)
{
	int height, width, rev;

	if (size <= 0)
		_putchar('\n');
	else
		for (height = 0, rev = size - 1; height < size; height++, rev--)
		{
			for (width = 0; width < size; width++)
			{
				if (width < rev)
					_putchar(32);
				else
					_putchar(35);
			}
			_putchar('\n');
		}
}
