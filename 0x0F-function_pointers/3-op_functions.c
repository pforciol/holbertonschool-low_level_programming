#include "3-calc.h"

/**
 * op_add - a + b
 *
 * @a: the first int
 * @b: the second int
 *
 * Return: sum of a + b
 */

int		op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a - b
 *
 * @a: the first int
 * @b: the second int
 *
 * Return: difference of a - b
 */

int		op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a * b
 *
 * @a: the first int
 * @b: the second int
 *
 * Return: product of a * b
 */

int		op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a / b
 *
 * @a: the first int
 * @b: the second int
 *
 * Return: division of a / b
 */

int		op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a % b
 *
 * @a: the first int
 * @b: the second int
 *
 * Return: remainder of a % b
 */

int		op_mod(int a, int b)
{
	return (a % b);
}
