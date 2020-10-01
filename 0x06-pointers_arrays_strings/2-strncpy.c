#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - Copy the string src on the dest array.
 * @dest: destination array.
 * @src: Source string.
 * @n: Number of characters to copy.
 * Return: Destination array.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int iter;

	for (iter = 0; iter < n && src[iter]; iter++)
	{
		dest[iter] = src[iter];
	}
	return (dest);
}
