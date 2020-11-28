#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *cap_string(char *tx)
{
	int c1;

	for (c1 = 0; tx[iter]; c1++)
	{
		if (tx[c1] == 46 || tx[c1] == 59 || tx[c1] == 44
		    || tx[c1] == 33 || tx[c1] == 63 || tx[c1] == 34
		    || tx[c1] == 40 || tx[c1] == 41 || tx[c1] == 123
		    || tx[c1] == 125 || tx[c1] == 32 || tx[c1] == 9
		    || tx[c1] == 10)
		{}
		if (tx[iter + 1] == 32)
		{
			tx[iter + 2] -= 32;
		}

	
	}
}
