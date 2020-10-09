#include "holberton.h"
#include <stdio.h>

int _len_recursion(char *s);
int palindrome(char *s, int a, int b);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string to check.
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int length;

	length = _len_recursion(s);
	return (palindrome(s, 0, length - 1));
}

/**
 * _len_recursion - Caculate the of a string
 * @s: string to count.
 * Return: Length of the string.
 */

int _len_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len += 1;
		len = len + _len_recursion(s + 1);
	}
	return (len);
}

/**
 * palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string to check.
 * @a: Start of the iterator.
 * @b: length of the string.
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */

int palindrome(char *s, int a, int b)
{
	if (a >= b)
		return (1);
	if (*(s + a) != *(s + b))
		return (0);
	else
		return (palindrome(s, a + 1, b - 1));
}
