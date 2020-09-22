#include "holberton.h"

/**
 * print_times_table - prints the n times tables starting from 0
 * @n: maximum multiplicator
 */

void	print_times_table(int n)
{
	int	o = 0, m, res;

	if (n <= 15 && n > 0)
	{
		while (o <= n)
		{
			m = 0;
			res = 0;
			while (m <= n)
			{
				res = o * m;
				if (m != 0)
					_putchar(' ');
				if (res < 10 && m != 0)
					_putchar(' ');
				if (res < 100 && m != 0)
					_putchar(' ');
				if (res >= 100)
					_putchar((res / 100) + '0');
				if (res >= 10)
					_putchar((res / 10) % 10 + '0');
				_putchar((res % 10) + '0');
				if (m < n)
					_putchar(',');
				m++;
			}
			o++;
			_putchar('\n');
		}
	}
}
