#include "holberton.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char.
 * @s: Pointer to string to set.
 * @to: String.
 * Return: No return.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
