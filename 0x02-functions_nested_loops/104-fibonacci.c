#include <stdio.h>

/**
 * main - Finds the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	int num1 = 1, num2 = 2, iter;
	long int fibo = 0;

	for (iter = 0; iter < 98; iter++)
	{
		fibo = num1 + num2;
		num1 = num2;
		num2 = fibo;
		printf("%ld", fibo);
		if (iter < 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
