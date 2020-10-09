#include "holberton.h"
/**
 * main - Print a string using _putchar.
 * Return: Always 0.
 */
int main(void)
{
	int iter = 0;
	char str[] = "Holberton";

	while (str[iter])
	{
		_putchar(str[iter]);
		iter++;
	}
	_putchar('\n');
	return (0);
}
