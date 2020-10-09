#include "holberton.h"

/**
 * _isalpha - Evaluate if a character is lower or uppercase.
 * @c: Character to evaluate.
 * Return: 0 or 1.
 */

int _isalpha(int c)
{
	int ret = 0;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		ret = 1;
	else
		ret = 0;
	return (ret);
}
