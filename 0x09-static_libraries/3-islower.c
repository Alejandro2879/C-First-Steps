#include "holberton.h"

/**
 * _islower - Print 1 on lowercase or 0 on uppercase.
 * @c: Character to evaluate.
 * Return: 0 or 1.
 */

int _islower(int c)
{
	int ret = 0;

	if (c > 65 && c < 90)
		ret = 0;
	else if (c > 97 && c < 122)
		ret = 1;
	return (ret);
}
