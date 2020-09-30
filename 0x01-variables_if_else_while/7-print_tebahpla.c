#include <stdio.h>
/**
 * main - print alphabet in reverse with putchar function.
 * Return: 0 on sucess
 */
int main(void)
{
	int iter = 122;

	while (iter >= 97)
	{
		putchar(iter);
		iter--;
	}
	putchar(10);
	return (0);
}
