#include <stdio.h>
/**
 * main - print the alphabet.
 *
 * Return: Always zero.
 */
int main(void)
{
	int iter;

	for (iter = 97; iter <= 122; iter++)
	{
		putchar(iter);
	}
	putchar(10);
	return (0);
}
