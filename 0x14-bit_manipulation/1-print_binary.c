#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number to print in binary
 */

void	print_binary(unsigned long int n)
{
	unsigned int pow = 1;

	while (pow < n)
		pow = pow << 1;

	if (pow != n && n != 0)
		pow = pow >> 1;
	while (pow > 0)
	{
		if ((n - pow > 0 || n - pow == 0) && n - pow < n)
		{
			n = n - pow;
			write(1, "1", 1);
		}
		else
			write(1, "0", 1);
		pow = pow >> 1;
	}
}
