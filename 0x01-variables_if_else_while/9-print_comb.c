#include <stdio.h>
/**
 * main - Print numbers from 0 to 9 separated by space and comas
 * Return: 0 on sucess.
 */
int main(void)
{
	int iter = 48;

	while (iter <= 57)
	{
		putchar(iter);
		if (iter < 57)
		{
			putchar(44);
			putchar(32);
		}
		iter++;
	}
	putchar(10);
	return (0);
}
