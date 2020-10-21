#include "function_pointers.h"

/**
 * print_name - prints the name given to parameter
 *
 * @name: the name to print
 * @f: the function to print the name
 */

void	print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		exit(98);
	(*f)(name);
}
