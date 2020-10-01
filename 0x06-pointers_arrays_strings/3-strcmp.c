#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - Compare 2 strings like srtcmp function in C
 * @s1: First string.
 * @s2: Second string.
 * Return: 0, 15 or -15 depends of case.
 */

int _strcmp(char *s1, char *s2)
{
	int iter, result;

	for (iter = 0; s1[iter] || s2[iter]; iter++)
	{
		if (s1[iter] > s2[iter])
		{
			result = 15;
		}
		else if (s1[iter] < s2[iter])
		{
			result = -15;
		}
		else
			result = 0;
	}
	return (result);
}
