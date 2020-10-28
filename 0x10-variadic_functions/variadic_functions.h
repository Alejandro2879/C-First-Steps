#ifndef VARIADIC_FUNCCTIONS_H
#define VARIADIC_FUNCCTIONS_H
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list list);
void print_float(va_list list);
void print_int(va_list list);
void print_str(va_list list);

/**
 * struct formato - Call a function.
 * @type: Character
 * @function: Function to call
 *
 * Description: Structure to call a function depends the format to print.
 */

typedef struct formato
{
	char *type;
	void (*function)();
} check_form;


#endif /* VARIADIC_FUNCCTIONS_H */
