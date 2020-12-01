#include "holberton.h"
/**
 * wildcmp - function to compare if two strings are identical or not
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if they are identical and 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	int len1 = _strlen_recursion(s1);
	int len2 = _strlen_recursion(s2);

	if (ast(s2))
		return (1);
	return (check(s1, s2, len1, len2, 0, 0));
}
/**
 * check - check character by character if they are identicals or not
 * @s1: string 1
 * @s2: string 2
 * @len1: length of string 1
 * @len2: length of string 2
 * @c1: position string 1
 * @c2: position string 2
 * Return: 1 if the strings are indentical and 0 if not
 */
int check(char *s1, char *s2, int len1, int len2, int c1, int c2)
{
	if (c1 > len1 && c2 > len2)
		return (1);
	if (*(s1 + c1) == *(s2 + c2))
		return (check(s1, s2, len1, len2, c1 + 1, c2 + 1));
	if (*s1 == '\0' && *(s2 + c2) == 42)
		return (0);
	if (*(s2 + c2) == 42)
	{
		if (*(s2 + (c2 + 1)) == 42)
			return (check(s1, s2, len1, len2, c1, c2 + 1));
		else
			return (check(s1, s2, len1, len2, c1 + 1, c2)
				|| check(s1, s2, len1, len2, c1, c2 + 1));
	}
	return (0);
}
/**
 * _strlen_recursion - prints the length of string
 * @s: The string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	a = 1 + _strlen_recursion(s + 1);
	return (a);
}
/**
 * ast - check if the second string are only asterisks
 * @s2: string to check
 * Return: 1 if there are only asterisks and 0 if not
 */
int ast(char *s2)
{
	if (*s2 == '\0')
		return (1);
	if (*s2 == 42)
		return (ast(s2 + 1));
	else
		return (0);
}
