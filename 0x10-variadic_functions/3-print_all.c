#include "variadic_functions.h"

/**
 * print_all - Print arguments passed to the function.
 * @format:  Fomart of the argument to print.
 * Return: No return.
 */


void print_all(const char * const format, ...)
{
	unsigned int iter1 = 0, iter2 = 0;
	va_list list;
	char *comma = "";
	check_form form[] = {
		{"c", print_char},
		{"f", print_float},
		{"i", print_int},
		{"s", print_str},
	};

	va_start(list, format);
	while (format &&  format[iter1 / 4])
	{
		iter2 = iter1 % 4;
		if (form[iter2].type[0] == format[iter1 / 4])
		{
			printf("%s", comma);
			form[iter2].function(list);
			comma = ", ";
		}
		iter1++;
	}
	printf("\n");
	va_end(list);
}

/**
 * print_char - Print characters when formar == c.
 * @list: List of argments to print.
 *
 * Return: No return
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_float - Print float numbers when format == e.
 * @list: List of argments to print
 *
 * Return: No return.
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_int - Print integers when format == i.
 *  @list: List of argments to print.
 *
 * Return: No return.
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_str - Print strings when format == s.
 * @list: List of argments to print
 *
 * Return: No return.
 */

void print_str(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (!str)
		str = "nil";
	printf("%s", str);
}
