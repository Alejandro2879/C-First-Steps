#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - Check if there is a digit.
 * @s: String to check.
 * Return: 1 on success, 0 on fail.
 */

int _isdigit(char *s)
{
	int iter;

	for (iter = 0; s[iter]; iter++)
	{
		if (!isdigit(s[iter]))
			return (0);
	}
	return (1);
}

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Total of coins needed.
 */

int main(int argc, char *argv[])
{
	int iter, cash, coin25, coin10, coin5, coin2, coin1, total;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (iter = 1; iter < argc; iter++)
	{
		if (_isdigit(argv[iter]))
		{
			cash = atoi(argv[iter]);
			for (coin25 = 0; cash >= 25; coin25++)
				cash -= 25;
			for (coin10 = 0; cash >= 10; coin10++)
				cash -= 10;
			for (coin5 = 0; cash >= 5; coin5++)
				cash -= 5;
			for (coin2 = 0; cash >= 2; coin2++)
				cash -= 2;
			for (coin1 = 0; cash >= 1; coin1++)
				cash -= 1;
			total = coin25 + coin10 + coin5 + coin2 + coin1;
		}
		else
		{
			printf("0\n");
			return (0);
		}
	}
	printf("%d\n", total);
	return (0);
}
