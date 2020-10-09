#include "holberton.h"
#include <stdio.h>

int prime(int n, int a);

/**
 * is_prime_number - returns 1 if an integer is prime, otherwise return 0.
 * @n: number to compute.
 * Return: 1 if it's prime, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime(n, n - 1));
}

/**
 * prime - returns 1 if an integer is prime, otherwise return 0.
 * @n: number to compute.
 * @a: comparison number.
 * Return: 1 if it's prime, otherwise return 0.
 */

int prime(int n, int a)
{
	if (a == 1)
		return (a);
	if (n % a == 0)
		return (0);
	else
		return (prime(n, a - 1));
}
