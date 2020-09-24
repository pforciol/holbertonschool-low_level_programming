#include "holberton.h"

/**
 * print_numbers - prints the numbers from 0 to 9 with a newline
 */

void	print_numbers(void)
{
	char	c = '0';

	while (c <= '9')
		_putchar(c++);
	_putchar('\n');
}
