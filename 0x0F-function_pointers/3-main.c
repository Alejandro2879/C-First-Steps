#include "calc.h"

/**
 *
 *
 *
 *
 */

int main(int argc(), char **argv)
{
	int num1, num2;
	char operator;

	if (argc != 4)
	{
		print("Error\n");
		exit(98);
	}

	operator = argv(2);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = get_op_func(char operator, int num1, int num2);

	return (0);
}
