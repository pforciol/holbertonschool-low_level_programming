#include "holberton.h"

/**
 * print_binary_rec - the recursive function to handle the print binary
 *
 * @n: the number to print in binary
 */

void	print_binary_rec(unsigned long int n)
{
	if (n != 0)
	{
		print_binary_rec(n >> 1);
		_putchar((n & 1) ? '1' : '0');
	}
}

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number to print in binary
 */

void	print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_binary_rec(n);
}
