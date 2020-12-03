#include "holberton.h"
#include <stdio.h>

/**
 * _strst - that locates a substring..
 * @haystack: String.
 * @needle: Word to locate.
 * Return: Pointer to word.
 */

char *_strstr(char *haystack, char *needle)
{
	int iter1;

	for (;  haystack[iter1];  haystack++)
	{
		for (iter1 = 0; haystack[iter1] && needle[iter1] &&
			     haystack[iter1] == needle[iter1]; iter1++)
		{}
		if (!needle[iter1])
			return (haystack);
	}
	return (0);
}
