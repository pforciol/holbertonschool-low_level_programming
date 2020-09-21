#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet with a newline
 */

void	print_alphabet_x10(void)
{
	char	c;
	int		i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
		i++;
	}
}
