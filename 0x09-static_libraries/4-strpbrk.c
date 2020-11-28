#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: First string.
 * @accept: Second string
 * Return: pointer to first coincidence.
 */

char *_strpbrk(char *s, char *accept)
{
	int iter1, iter2;
	char *str = '\0';

	for (iter1 = 0; s[iter1]; iter1++)
	{
		for (iter2 = 0; accept[iter2]; iter2++)
		{
			if (accept[iter2] == s[iter1])
			{
				return (str = &s[iter1]);
			}
		}
	}
	return (str);
}
