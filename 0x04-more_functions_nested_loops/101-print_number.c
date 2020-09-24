#include "holberton.h"

/**
 * print_number - prints number on the standard output
 * @n: the number to be printed
 */

void	print_number(int n)
{
	long nbr = n;

	if (nbr < 0)
	{
		_putchar('-');
		nbr = -nbr;
	}

	if (nbr >= 10)
		print_number(nbr / 10);
	_putchar((nbr % 10) + '0');
}
