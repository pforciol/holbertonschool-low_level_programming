#include "holberton.h"

/**
 * print_number - prints number on the standard output
 * @n: the number to be printed
 */

void	print_number(int n)
{
	if (n < 0)
		_putchar('-');

	if (n >= 10 || n <= -10)
		print_number(_abs(n / 10));
	_putchar(_abs(n % 10) + '0');
}

/**
 * _abs - returns absolute value of given int
 * @n: number for which we want to get the absolute value
 *
 * Return: absolute value of number n
 */

int		_abs(int n)
{
	return ((n < 0) ? -n : n);
}
