#include <stdio.h>

/**
 * main - Print first 50 fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int iter, num1 = 1, num2 = 2, fib;

	printf("%ld, ", num1);
	printf("%ld, ", num2);
	for (iter = 0; iter < 48; iter++)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		printf("%ld", fib);
		if (iter < 48 - 1)
			printf(", ");
	}
	printf("\n");
	return (0);
}
