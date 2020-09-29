#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - return the length of a string.
 * @s: String given by main function.
 * Return: length of the string.
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter])
	{
		counter++;
	}
	return (counter);
}
