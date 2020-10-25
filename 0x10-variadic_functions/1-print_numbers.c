#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - check the code for Holberton School students.
 * @separator: Comma to separate the numbers.
 * @n: Number of arguments.
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int iter = 0;

	va_start(list, n);
	for (iter = 0; iter < n; iter++)
	{
		printf("%d", va_arg(list, int));
		printf("%s", (iter < n - 1 && separator) ? separator : " ");
	}
	printf("\n");
	va_end(list);
}
