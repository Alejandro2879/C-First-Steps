#include <stdio.h>
/**
 * main - Print hexadecimal numbers from ascii table only with putchar funct.
 * Return: 0 on sucess
 */
int main(void)
{
	int iter_num = 48, iter_lett = 97;

	while (iter_num <= 57)
	{
		putchar(iter_num);
		iter_num++;
	}
	while (iter_lett <= 102)
	{
		putchar(iter_lett);
		iter_lett++;
	}
	putchar(10);
	return (0);
}
