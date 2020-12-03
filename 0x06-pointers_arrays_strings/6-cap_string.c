#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string..
 * @tx: String
 * Return: Always 0.
 */
char *cap_string(char *tx)
{
	int c1, c2 = 1;

	for (c1 = 0; tx[c1] != '\0'; c1++)
	{
		if (tx[c1] >= 'A' &&  tx[c1] <= 'Z')
			c2 = 0;
		else if (tx[c1] >= '0' &&  tx[c1] <= '9')
			c2 = 0;
		else if
			((tx[c1] >= 'a' && tx[c1] <= 'z') && c2 == 1)
			{
			     tx[c1] -= 32;
			     c2 = 0;
			}
		if (tx[c1] == 46 || tx[c1] == 59 || tx[c1] == 44
		    || tx[c1] == 33 || tx[c1] == 63 || tx[c1] == 34
		    || tx[c1] == 40 || tx[c1] == 41 || tx[c1] == 123
		    || tx[c1] == 125 || tx[c1] == 32 || tx[c1] == 9
		    || tx[c1] == 10)
			c2 = 1;
	}
	return (tx);
}
