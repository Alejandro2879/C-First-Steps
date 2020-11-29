#include <stdio.h>

/**
 * main - Fibonacci.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int num1, num2, num3, fibonacci, lim, res;

	num2 = 0;
	num3 = 1;
	lim = 4000000;
	res = 0;
	for (num1 = 0; res < lim; num1++)
	{
		fibonacci = num2 + num3;
		num2 = num3;
		num3 = fibonacci;
		if (fibonacci >= 1 && fibonacci % 2 == 0)
		res = fibonacci + res;
	}
	printf("%ld\n", res);
	return (0);
}
