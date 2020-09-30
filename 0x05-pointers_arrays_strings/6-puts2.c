#include "holberton.h"

/**
 * puts2 - Print some characters of a string.
 * @str: String.
 * Return: No return.
 */
void puts2(char *str)
{
	int iter = 0;

	while (str[iter])
	{
		if ((iter % 2) == 0)
		{
			_putchar(str[iter]);
		}
		iter++;
	}
	_putchar('\n');
}
