#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - Convert string in uppercase to lowercase
 * @s: String in lowercase.
 * Return: String in uppercase.
 */
char *string_toupper(char *s)
{
	char *str = s;

	for (; *s; s++)
		if (*s > 'a' && *s < 'z')
			*s += 'A' - 'a';
	return (str);
}
