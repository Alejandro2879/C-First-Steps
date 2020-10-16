#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Allocate memory to concatenate 2 strings
 * @s1: String 1.
 * @s2: String 2.
 * @n: Number of bytes on string 2, to concatenate.
 * Return: Pointer to concatenated string or '\0' on fail.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int iter, iter2, space = n;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (space > _strlen(s2))
		space = _strlen(s2);

	concat = (char *) malloc((_strlen(s1) + n + 1) * sizeof(char));
	if (!concat)
		return ('\0');

	for (iter = 0; s1[iter]; iter++)
	{
		concat[iter] = s1[iter];
	}

	for (iter2 = 0; iter2 < space; iter++, iter2++)
	{
		concat[iter] = s2[iter2];
	}
	concat[iter] = '\0';
	return (concat);
}

/**
 * _strlen - Return the length of a string.
 * @string: String to count.
 * Return: Length of the string.
 */

int _strlen(char *string)
{
	int iter;

	for (iter = 0; string[iter]; iter++)
	{}
	return (iter);
}
