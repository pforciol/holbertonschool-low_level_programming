#include <stdio.h>
#include "holberton.h"

/**
 * _atoi - converts a string into an integer
 * @s: the string to be converted
 *
 * Return: the value of the int
 */

int	_atoi(char *s)
{
	int i = 0, sign = 0;
	int begin, end;

	while (s[i] && (!(s[i] >= '0') || !(s[i] <= '9')))
	{
		if (s[i] == '-')
			sign++;
		i++;
	}
	sign = (sign % 2) ? -1 : 1;
	begin = i;
	while (s[i] && ((s[i] >= '0') && (s[i] <= '9')))
		i++;
	end = i - 1;
	return (_atoi_conv(s, begin, end, sign));
}

/**
 * _atoi_conv - converts parsed string into unsigned int
 * @s: the original string
 * @begin: begin index
 * @end: end index
 * @sign: the sign of the int
 *
 * Return: the unsigned int
 */

int	_atoi_conv(char *s, int begin, int end, int sign)
{
	int	res = 0;

	while (begin <= end)
	{
		if (sign > 0)
			res = res * 10 + (s[begin] - '0');
		else
			res = res * 10 - (s[begin] - '0');
		begin++;
	}
	return (res);
}
