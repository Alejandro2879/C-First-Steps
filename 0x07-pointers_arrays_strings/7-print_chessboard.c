#include "holberton.h"

/**
 * print_chessboard - prints the chessboard..
 * @a: Pointer to array.
 * Return: No return.
 */

void print_chessboard(char (*a)[8])
{
	int iter1, iter2;

	for (iter1 = 0; iter1 < 8; iter1++)
	{
		for (iter2 = 0; iter2 < 8; iter2++)
			_putchar(a[iter1][iter2]);
		if (iter2 != 7)
			_putchar(10);
	}
}
