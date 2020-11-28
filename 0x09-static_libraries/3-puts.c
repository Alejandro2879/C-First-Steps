#include "holberton.h"
#include <unistd.h>
/**
 * _puts - Print the string given by main function.
 *  @str: String to print.
 * Return: No return.
 */
void _puts(char *s)
{
	int iter = 0;

	while (*(s + iter))
	{
		_putchar(*(s + iter));
		iter++;
	}
	_putchar('\n');
}
