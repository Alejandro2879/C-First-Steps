#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int iter1, iter2;
	char *str = '\0';

	for (iter1 = 0; haystack[iter1]; iter1++)
	{
		for (iter2 = 0; needle[iter2]; iter2++ )
		{
			if (needle[iter2] == haystack[iter1])
			{
				str = &haystack[iter1];
				break;
			}
		}
	}
	return (str);
}
