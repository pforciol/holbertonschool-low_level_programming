#include "holberton.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * (without 2 and 4) with a newline
 */

void	print_most_numbers(void)
{
	char	c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
