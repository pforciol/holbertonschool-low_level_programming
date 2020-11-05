#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: a pointer to the string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is not correctly formatted or NULL
 */

unsigned int	binary_to_uint(const char *b)
{
	unsigned int res = 0;
	unsigned int pow = 1;
	int i = 0;

	if (b)
	{
		while (b[i])
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
			i++;
		}

		i = i - 1;
		while (i >= 0)
		{
			if (b[i] == '1')
				res += pow;
			i--;
			pow += pow;
		}
	}
	return (res);
}
