#include "holberton.h"
/**
 * puts_half - Print the second half of a string.
 * @str: string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int iter1, iter2;

	for (iter1 = 0; str[iter1]; iter1++)
	{}
	iter1 = iter1 / 2;
	for (iter2 = iter1; str[iter2]; iter2++)
	{
		_putchar(str[iter2]);
	}
	_putchar('\n');
}
