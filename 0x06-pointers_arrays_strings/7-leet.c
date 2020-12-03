#include "holberton.h"
#include <stdio.h>

/**
 * leet - that encodes a string into 1337.
 * @s: String to perform.
 * Return: New string.
 */

char *leet(char *str)
{
	int i = 0;
	int j;
	char let1[] = "AEOTL";
	char numbers[] = "43071";
	char let2[] = "aeotl";

	while (str[i] != '\0')
	{
		j = 0;
		while (numbers[j] != '\0')
		{
			if (str[i] == let1[j] || str[i] == let2[j])
			{
				str[i] = numbers[j];
			}
			j++;
		}
		i++;
	}
	return (str);

}
