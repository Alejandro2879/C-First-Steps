#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - funtion is like strchr C function.
 * @s: String
 * @c: Character to locate in the string.
 * Return: Pointer to firts coincidence or null on non match.
 */
char *_strchr(char *s, char c)
{
	int iter;

	for (iter = 0; s[iter]; iter++)
	{
		if (s[iter] == c)
		{
			return (&s[iter]);
		}
	}
	return ('\0');
}
