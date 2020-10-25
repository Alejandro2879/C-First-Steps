#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings using variadic functions.
 * @separator: Comma to separate strings.
 * @n: Number of elements.
 * Return: No return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int iter;
	va_list list;
	char *container;

	va_start(list, n);

	for (iter = 0; iter < n; iter++)
	{
		container = va_arg(list, char *);
		printf("%s", container ? container : "(nil)");
		printf("%s", (separator && iter < n - 1) ? separator : "");
	}
	printf("\n");
	va_end(list);
}
