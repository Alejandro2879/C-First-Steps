#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print last digit of random number.
 *
 * Return: Always zero.
 */

int main(void)
{
	int n, numb = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	numb = (n % 10);
	if (numb == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if (numb < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, numb);
	}
	else if (numb > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, numb);
	}
	return (0);
}
