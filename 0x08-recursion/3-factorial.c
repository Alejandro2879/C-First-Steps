#include "holberton.h"
#include <stdio.h>

/**
 * factorial - Return the factorial of a number.
 * @n: Number to compute.
 * Return: Factorial of the number or -1 on fail.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
