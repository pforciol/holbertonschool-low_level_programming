#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a newline
 *
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */

void	print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list			args;
	unsigned int	i = 0;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1)
			printf("%s", separator ? separator : "");
		i++;
	}
	va_end(args);
	printf("\n");
}
