#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: String #1.
 * @s2: String #2.
 * Return: Pointer to the new concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	int iter1, iter2;
	char *concat;

	concat = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (!concat)
		return ('\0');
	for (iter1 = 0; s1[iter1]; iter1++)
		concat[iter1] = s1[iter1];

	for (iter2 = 0; s2[iter2]; iter2++, iter1++)
		concat[iter1] = s2[iter2];
	concat[iter1] = '\0';
	return (concat);
}

/**
 * _strlen - Return the lenght of a string.
 * @str: String to count.
 * Return: Number of characters in str..
 */

int _strlen(char *str)
{
	int iter = 0;

	while (str[iter])
		iter++;
	return (iter);
}
