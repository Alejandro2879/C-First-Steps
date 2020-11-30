#include <stdio.h>

/**
 * main - Fizz Buzz print test.
 *
 * Return: No return.
 */

int main(void)
{
	int iter;

	for (iter = 1; iter <= 100; iter++)
	{
		if (iter % 3 == 0 && iter % 5 == 0)
			printf("FizzBuzz");
		else if (iter % 3 == 0)
			printf("Fizz");
		else if (iter % 5 == 0)
			printf("Buzz");
		else
			printf("%d", iter);

		if (iter < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
