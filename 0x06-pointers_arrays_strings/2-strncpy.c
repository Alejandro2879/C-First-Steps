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
	int iter, iter2;

	for (iter = 0; src[iter]; iter++)
	{
		dest[iter] = src[iter];
	}
	if (iter < n)
	{
		iter2 = iter;
		while (iter2 < n)
		{
			dest[iter2] = '\0';
			iter2++;
		}
	}
	return (dest);
}
