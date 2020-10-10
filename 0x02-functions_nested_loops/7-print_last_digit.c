#include "holberton.h"

/**
 * print_last_digit - Print last digit of a number.
 * @n: number to compute.
 * Return: module.
 */

int print_last_digit(int n)
{
	int mod = 0;

	if (n >= 0)
		mod = n % 10;
	else
		mod = -1 * (n % 10);
	_putchar('0' + mod);
	return (mod);
}
