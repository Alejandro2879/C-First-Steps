#include <stdio.h>
/**
 * main - print alphabet in upper and lowercase.
 *
 * Return: Always zero
 */
int main(void)
{
	int minus, mayus;

	for (minus = 97; minus <= 122; minus++)
		putchar(minus);
	for (mayus = 65; mayus <= 90; mayus++)
		putchar(mayus);
	putchar(10);
	return (0);
}
