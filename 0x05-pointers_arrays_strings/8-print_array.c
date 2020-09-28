#include <stdio.h>

/**
 * print_array - prints n elements of an a array of integer
 * @a: the array of integers
 * @n: the number of elements to be printed
 */

void	print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
