#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: Number of parameters.
 * Return: The sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int iter, add = 0;
	va_list list;

	va_start(list, n);
	for (iter = 0; iter < n; iter++)
	{
		add += va_arg(list, int);
	}
	va_end(list);
	return (add);
}
