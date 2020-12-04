#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13.
 * @s: String to perform.
 * Return: New string.
 */

char *rot13(char *s)
{
	int iter = 0;

	for (; s[iter]; iter++)
	{
		for (; (s[iter] >= 'a' && s[iter] <= 'z') ||
			     (s[iter] >= 'A' && s[iter] <= 'Z'); iter++)
		{
			if ((s[iter] >= 'n' && s[iter] <= 'z') ||
			    (s[iter] >= 'N' && s[iter] <= 'Z'))
				s[iter] -= 13;
			else
				s[iter] += 13;
		}
	}
	return (s);
}
