#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - Check if a letter is upper or lower case.
 * @c: Character to check.
 * Return: 1 if it's upper or 0 if it's lowercase.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
