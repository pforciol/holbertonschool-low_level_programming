#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: always 0 (Success)
 */

int	main(void)
{
	unsigned long fac = 2;
	unsigned long res = 612852475143;

	while (res != 1)
	{
		if (res % fac == 0)
			res /= fac;
		else
			fac++;
	}
	printf("%lu\n", fac);
	return (0);
}
