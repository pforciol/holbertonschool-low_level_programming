#include "holberton.h"

/**
 * print_triangle - draws a triangle
 * @size: size of the triangle
 */

void	print_triangle(int size)
{
	int i = size, j = 0, n = size;

	if (i > 0)
	{
		while (i > 0)
		{
			j = 0;
			while (j < n - 1)
			{
				_putchar(' ');
				j++;
			}
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i--;
			n--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
