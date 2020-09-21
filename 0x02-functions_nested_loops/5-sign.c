#include "holberton.h"

/**
 * print_sign - prints the sign of the number
 * @n: number for which we want to print the sign
 *
 * Return: 1 if n is positive, 0 if n is 0, -1 if n is negative
 */

int	print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
