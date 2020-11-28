#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	unsigned long int num1, num2, res = 0;

	while (num1 > 0)
	{
		num1 = n;
		num2 = num1;
		num1 = num1 >> 1;
		res = num2 - (num1 * 2);
		printf("%lu", res);
	}
	printf("%lu  %lu", num1, num2);
}
