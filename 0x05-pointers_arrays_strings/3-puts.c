#include "holberton.h"
#include <unistd.h>
/**
 * _puts - Print the string given by main function.
 *  @str: String to print.
 * Return: No return.
 */
void _puts(char *str)
{
	int iter = 0;

	while (*(str + iter))
	{
		_putchar(*(str + iter));
		iter++;
	}
	_putchar('\n');
}
