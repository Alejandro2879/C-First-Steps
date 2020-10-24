#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int iter = 0;

	va_start(list, n);
	for (iter = 0; iter < n; iter++)
	{
		printf("%d", va_arg(list, int));
		if (iter < n -1 && separator)
			printf("%s", separator);
		else if (iter < n - 1 && !separator)
			printf(" ");
	}
	printf("\n");
	va_end(list);
}
