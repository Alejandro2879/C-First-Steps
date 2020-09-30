#include <stdio.h>
/**
 * main - print numbers from 0 to 9.
 * Return: Return 0 on sucess
 */
int main(void)
{
	int iter = 0;

	while (iter < 10)
	{
		printf("%d", iter);
		iter++;
	}
	putchar(10);
	return (0);
}
