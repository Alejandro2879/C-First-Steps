#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - Convert string to integer.
 * @s: String to convert.
 * Return: Number.
 */

int _atoi(char *s)
{
	int value, iter, negative;

	iter = 0;
	value = 0;
	negative = -1;
	while (s[iter] != '\0' && (s[iter] < '0' || s[iter] > '9'))
	{
		if (s[iter] == '-')
			negative *= -1;
		iter++;
	}
	while (s[iter] != '\0' && (s[iter] >= '0' && s[iter] <= '9'))
		value = (value * 10) - (s[iter++] - '0');
	return (value * negative);
}
