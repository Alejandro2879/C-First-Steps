#include <stdio.h>
/**
 * main - Print alphabet without print the e and q letters.
 * Return: No return.
 */
int main(void)
{
	int iter = 97;

	while (iter <= 122)
	{
		if (iter != 101 && iter != 113)
			putchar(iter);
		iter++;
	}
	putchar('\n');
	return (0);
}
