#include "calc.h"

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	char *ops[5] = {"+", "-", "*", "/", "%"};
	int (*funcs[5])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};

	while (i < 5 && *s != *ops[i])
	{
		i++;
	}
	return (i < 5) ? funcs[i] : NULL;
}
