#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number for which we want to print the last digit
 *
 * Return: value of the last digit of n
 */

int	print_last_digit(int n)
{
	_putchar(_abs(n % 10) + '0');
	return (_abs(n % 10));
}

/**
 * _abs - returns absolute value of given int
 * @n: number for which we want to get the absolute value
 *
 * Return: absolute value of number n
 */

int	_abs(int n)
{
	return ((n < 0) ? -n : n);
}
