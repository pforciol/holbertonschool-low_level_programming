#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: always 0 (Success)
 */

int	main(void)
{
	int i = 1;
	int counter = 0;

	while (i < 1024)
	{
		if (i % 5 == 0 || i % 3 == 0)
			counter += i;
		i++;
	}
	printf("%d\n", counter);
	return (0);
}
