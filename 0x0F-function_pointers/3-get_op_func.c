#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 *
 * @s: operator passed as argument to the program
 *
 * Return: pointer to the correct function, or NULL if operator doesn't exist
 */

int		(*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0] && strlen(s) == 1)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
