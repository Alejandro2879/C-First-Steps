#include <stdio.h>
/**
 * main - print numbers from 0 to 9 only with putchar function.
 * Return: 0 un sucess.
 */
int main(void)
{
	int iter = 48;

	while (iter <= 57)
	{
		putchar(iter);
		iter++;
	}
	putchar(10);
	return (0);
}
