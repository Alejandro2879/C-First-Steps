#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - Function like strncat in C.
 * @dest: Destination string.
 * @src: Source string.
 * @n: number of characters to concatenate.
 * Return: The resultant string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int counter, iter;

	for (counter = 0; dest[counter]; counter++)
	{}
	for (iter = 0; iter < n; iter++)
	{
		dest[counter + iter] = src[iter];
	}
	return (dest);
}
