#include "calc.h"

/**
 *
 *
 *
 *
 *
 */

int (*get_op_func(char *s))(int num1, int num2)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};


}
