#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - Return the length of a prefix substring.
 * @s: string.
 * @accept: characters to compare.
 * Return: Length.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int iter, counter = 0, dev = 0;

	for (iter = 0; s[iter] != 32; iter++)
	{
		if (iter != dev)
			break;
		for (counter = 0; accept[counter]; counter++)
		{
			if (s[iter] == accept[counter])
				dev += 1;
		}
	}
	return (dev);
}
