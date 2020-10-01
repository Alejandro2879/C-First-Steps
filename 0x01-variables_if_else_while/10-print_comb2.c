#include <stdio.h>
/**
 * main -print numbers from 0 to 99 with putchar funtion.
 * Return: 0 on sucess.
 */
int main(void)
{
	int iter_ext, iter_int;

	for (iter_ext = 48; iter_ext <= 57; iter_ext++)
	{
		for (iter_int = 48; iter_int <= 57; iter_int++)
		{
			putchar(iter_ext);
			putchar(iter_int);
			if (iter_ext < 57 || iter_int < 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
