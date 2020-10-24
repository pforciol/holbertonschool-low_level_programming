#include "variadic_functions.h"

/**
 * print_char - prints a char
 *
 * @list: valist
 */

void	print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - prints an int
 *
 * @list: valist
 */

void	print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - prints a float
 *
 * @list: valist
 */

void	print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - prints a string
 *
 * @list: valist
 */

void	print_string(va_list list)
{
	char *tmp = va_arg(list, char*);

	if (!tmp)
		tmp = "(nil)";
	printf("%s", tmp);
}


/**
 * print_all - prints anything
 *
 * @format: the list of types of arguments passed to the function
 */

void	print_all(const char * const format, ...)
{
	va_list		args;
	int			i = 0, j = 0;
	char		*sep = "";
	specs_t		specs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (specs[j].spec)
		{
			if (specs[j].spec[0] == format[i])
			{
				printf("%s", sep);
				sep = ", ";
				specs[j].func(args);
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
