#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Call a function with name as parameter.
 * @name: name of the person.
 * @f: Pointer to the function to call.
 * @name: Name of the person passed as parameter to the function.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
