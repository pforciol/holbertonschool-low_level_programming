#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */

void	rev_string(char *s)
{
	int		i = 0;
	int		j = _strlen(s) - 1, max = j / 2;
	char	tmp;

	while (j > max)
	{
		tmp = s[i];
		s[i++] = s[j];
		s[j--] = tmp;
	}
}

/**
 * _strlen - returns the length of the string
 * @s: the string
 *
 * Return: the length of the s string
 */

int		_strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
