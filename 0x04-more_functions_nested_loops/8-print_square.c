#include "holberton.h"

/**
 * print_square - prints a square
 * @size: size of the square
 */

void	print_square(int size)
{
	int i = size, j;

	if (i > 0)
	{
		while (i > 0)
		{
			j = size;
			while (j > 0)
			{
				_putchar('#');
				j--;
			}
			_putchar('\n');
			j++;
			i--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
