#include "holberton.h"

/**
 * main - prints "Holberton"
 *
 * Return: always 0 (Success)
 */

int	main(void)
{
	int		i = 0;
	char	*str = "Holberton\n";

	while (str[i])
		_putchar(str[i++]);
	return (0);
}
