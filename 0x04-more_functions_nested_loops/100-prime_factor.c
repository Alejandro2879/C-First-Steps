#include <stdio.h>
#include <math.h>

/**
 * main - finds the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */

int main(void)
{
	long int num = 612852475143, iter;

	for (iter = 2; iter < sqrt(num); iter++)
		while ((num % iter) == 0)
			num /= iter;
	printf("%ld\n", num);
	return (0);
}
