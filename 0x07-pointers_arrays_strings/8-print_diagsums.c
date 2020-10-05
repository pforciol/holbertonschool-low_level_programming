#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: square matrix of ints
 * @size: size of the square
 */

void	print_diagsums(int *a, int size)
{
	int nb_val = size * size;
	int	i = 0;
	int sum1 = 0, sum2 = 0;

	while (i < nb_val)
	{
		sum1 = sum1 + a[i];
		i = i + size + 1;
	}
	i = size - 1;
	while (i < nb_val - size + 1)
	{
		sum2 = sum2 + a[i];
		i = i + size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
