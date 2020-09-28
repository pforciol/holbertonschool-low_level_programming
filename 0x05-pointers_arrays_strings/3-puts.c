#include "holberton.h"

/**
 * _puts - prints a string, followed by a newline, to sdtout
 * @str: the string to be printed
 */

void	_puts(char *str)
{
	int i = 0;

	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
