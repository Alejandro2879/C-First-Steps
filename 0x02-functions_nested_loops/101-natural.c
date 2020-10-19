#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024.
 *
 * Return: Always 0.
 */

int main(void)
{
	int iter, acum = 0;

	for (iter = 0; iter < 1024; iter++)
	{
		if (iter % 3 == 0 || iter % 5 == 0)
			acum += iter;
	}
	printf("%d\n", acum);
	return (0);
}
