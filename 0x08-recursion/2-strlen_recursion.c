#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String.
 * Return: Length of the string.
 */

int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s)
	{
		counter += 1;
		counter = counter + _strlen_recursion(s + 1);
	}
	return (counter);
}
