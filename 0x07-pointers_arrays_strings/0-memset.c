#include "holberton.h"
#include <stdio.h>

/**
 * _memset - Function fills memory with constant byte.
 * @s: Buffer filled.
 * @b: Char to fill.
 * @n: the size of the memory to fill.
 * Return: Memory filled.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int iter;

	for (iter = 0; iter < n; iter++)
	{
		s[iter] = b;
	}
	return (s);
}
