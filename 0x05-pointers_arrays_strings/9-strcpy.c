#include "holberton.h"

/**
 * _strcpy - Copy all elements in src to dest.
 * @dest: Destiny array.
 * @src: Origin array.
 * Return: The destiny array.
 */

char *_strcpy(char *dest, char *src)
{
	int iter = 0;

	while (src[iter])
	{
		*(dest + iter) = *(src + iter);
		iter++;
	}
	dest[iter] = '\0';
	return (dest);
}
