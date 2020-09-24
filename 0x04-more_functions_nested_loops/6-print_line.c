#include "holberton.h"

/**
 * print_line - draws a straight line
 * @n: number of "_" character to be printed
 */

void	print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}
