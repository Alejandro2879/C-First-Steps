#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - Fuction == to memcpy C function.
 * @dest: Destination memory.
 * @src: Source memory.
 * @n: Number of bytes to copy.
 * Return: The resultant array.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int iter;

	for (iter = 0; iter < n; iter++)
	{
		dest[iter] = src[iter];
	}
	return (dest);
}
