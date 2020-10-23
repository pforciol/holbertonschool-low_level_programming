#include "variadic_functions.h"

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
	void		*arg;
	specs_t		specs[] = {
		{"c", "%c"},
		{"i", "%d"},
		{"f", "%f"},
		{"s", "%s"},
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
				arg = va_arg(args, void *);
				if (!arg && specs[j].spec[0] == 's')
					arg = "(nil)";
				printf(specs[j].pf_spec, arg);
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
