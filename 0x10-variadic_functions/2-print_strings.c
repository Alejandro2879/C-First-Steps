#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int iter;
	va_list list;

	va_start(list, n);
	for (iter = 0; iter < n; iter++)
	{
			printf("%s", va_arg(list, char *));
		if (iter < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
