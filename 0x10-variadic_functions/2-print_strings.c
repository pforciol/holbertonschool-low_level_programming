#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void	print_strings(const char *separator, const unsigned int n, ...)
{
	va_list			args;
	unsigned int	i = 0;
	char			*tmp;

	va_start(args, n);
	while (i < n)
	{
		tmp = va_arg(args, char*);
		if (i != 0)
			printf("%s", separator ? separator : "");
		printf("%s", tmp ? tmp : "(nil)");
		i++;
	}
	va_end(args);
	printf("\n");
}
