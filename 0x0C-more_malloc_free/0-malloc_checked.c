#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory with malloc.
 * @b: Size of the memory to allocate.
 * Return: Pointer to allocated memory or exit 98 on fail.
 */

void *malloc_checked(unsigned int b)
{
	char *mall;

	mall = malloc(b);
	if (!mall)
		exit(98);
	else
		return (mall);
}
