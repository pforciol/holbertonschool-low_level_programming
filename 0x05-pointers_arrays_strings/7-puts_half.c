#include "holberton.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string
 */

void	puts_half(char *str)
{
	int n = _strlen(str);

	n = ((n % 2 == 0) ? n : n + 1) / 2;
	while (str[n])
		_putchar(str[n++]);
	_putchar('\n');
}

/**
 * _strlen - returns the length of the string
 * @s: the string
 *
 * Return: the length of the s string
 */

int	_strlen(char *s	)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
