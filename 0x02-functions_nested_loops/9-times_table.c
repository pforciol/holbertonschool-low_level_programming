#include "holberton.h"

/**
 * times_table - prints the times table from 0 to 9
 */

void	times_table(void)
{
	int	o = 0, m, res;

	while (o < 10)
	{
		m = 0;
		res = 0;
		while (m < 10)
		{
			res = o * m;
			if (m != 0)
				_putchar(' ');
			if (res < 10 && m != 0)
				_putchar(' ');
			if (res >= 10)
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
			if (m < 9)
				_putchar(',');
			m++;
		}
		_putchar('\n');
		o++;
	}
}
