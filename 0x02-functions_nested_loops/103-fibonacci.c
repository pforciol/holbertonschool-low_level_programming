#include <stdio.h>

/**
 * main - prints the sum of even-valued terms of fibonacci sequence
 *
 * Return: always 0 (Success)
 */

int	main(void)
{
	unsigned long n_minus1 = 2;
	unsigned long n_minus2 = 1;
	unsigned long n = 0;
	unsigned long counter = 2;

	while (n < 4000000)
	{
		if (n % 2 == 0)
			counter = counter + n;
		n = n_minus1 + n_minus2;
		n_minus2 = n_minus1;
		n_minus1 = n;
	}
	printf("%lu\n", counter);
	return (0);
}
