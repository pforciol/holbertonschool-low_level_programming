#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters of the function
 *
 * @n: the number of parameters
 *
 * Return: the sum of all the parameters, or 0 is n = 0
 */

int		sum_them_all(const unsigned int n, ...)
{
	va_list			args;
	unsigned int	i = 0;
	int				sum = 0;

	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);

	return (sum);
}
