#include "holberton.h"

/**
 * more_numbers - prints 10 times the nunbers from 0 to 14
 */

void	more_numbers(void)
{
	int		c;
	int		i = 0;

	while (i < 10)
	{
		c = 0;
		while (c <= 14)
		{
			if (c >= 10)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			c++;
		}
		_putchar('\n');
		i++;
	}
}
