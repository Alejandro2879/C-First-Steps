#include "holberton.h"
#include <stdio.h>

/**
 * is_sqrt - Exact square of a number or -1 if itsn't a natual square
 * @n: number to compute.
 * @a: Comparison iterator.
 * Return: Natural square of a number or -1 if itsn't natural square.
 */

int is_sqrt(int n, int a)
{
	if (a * a == n)
		return (a);
	if (a * a > n)
		return (-1);
	else
		return (is_sqrt(n, a + 1));

}

/**
 * _sqrt_recursion - returns the natural square of a numbe.
 * @n: number to compute.
 * Return:  Natural square of a number or -1 if itsn't natural square.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	else
		return (is_sqrt(n, 1));
}
