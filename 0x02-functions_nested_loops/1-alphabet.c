#include "holberton.h"

/**
 * print_alphabet - prints the alphabet with a newline
 */

void	print_alphabet(void)
{
	char	c = 'a';

	while (c <= 'z')
		_putchar(c++);
	_putchar('\n');
}
