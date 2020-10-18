#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - Check for a digit from 0 to 9.
 * @c: Character to check.
 * Return: 1 if it's digit, 0 if doesn't.
 */

int _isdigit(int c)
{
	if (c >= 48  && c <= 57)
		return (1);
	else
		return (0);
}
