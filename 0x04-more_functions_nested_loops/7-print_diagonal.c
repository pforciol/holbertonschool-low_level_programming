#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of "\" character to be printed
 */

void	print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n > 0)
	{
		while (n > 0)
		{
			i = j;
			while (i > 0)
			{
				_putchar(' ');
				i--;
			}
			_putchar('\\');
			_putchar('\n');
			n--;
			j++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
