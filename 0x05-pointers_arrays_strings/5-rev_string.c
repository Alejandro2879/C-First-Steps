#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - Reverse a string given by main function.
 * @s: string to reverse.
 * Return: no return.
 */
void rev_string(char *s)
{
	int iter, iter_rev, cont;

	for (iter = 0; s[iter]; iter++)
	{}
	iter = iter - 1;
	for (iter_rev = 0; iter > iter_rev; iter--)
	{
		cont = s[iter];
		s[iter] = s[iter_rev];
		s[iter_rev] = cont;
		iter_rev++;
	}
}
