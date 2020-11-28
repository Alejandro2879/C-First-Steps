#include <stdio.h>

/**
 * main - Fibonacci.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int sum = 0, fib = 0;
	int num1 = 1, num2 = 2, iter;

	for (iter = 0; sum < 4000000; iter++)
	{
		if (sum < 4000000)
		{
			fib = num1 + num2;
			num1 = num2;
			num2 = fib;
			sum += fib;
			printf("%ld, ", sum);
		}
	}
	printf("%ld\n", sum);
	return (0);
}
