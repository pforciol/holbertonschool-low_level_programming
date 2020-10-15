#include "holberton.h"

/**
 * _putstr - prints a string
 *
 * @str: the string to print
 */

void	_putstr(char *str)
{
	while (*str)
		_putchar(*str++);
}


/**
 * exit_error - exits the program with error message
 */

void	exit_error(void)
{
	_putstr("Error\n");
	exit(98);
}

/**
 * check_digits_len - check if string contains only digits
 *
 * @str: the string to test
 *
 * Return: length if only digits, exit if false
 */

int		check_digits_len(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			exit_error();
	}
	return (i);
}

/**
 * main - multiplies two positive numbers
 *
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: 0
 */

int		main(int argc, char **argv)
{
	int		*res, len1, len2, i1, i2, i = 0;
	int		a = 0, b = 0, ret, tmp, i_res1, i_res2;

	if (argc != 3)
		exit_error();
	len1 = check_digits_len(argv[1]);
	len2 = check_digits_len(argv[2]);
	res = malloc(sizeof(int) * (len1 + len2));
	if (!res)
		return (-1);
	i1 = len1 - 1;
	i_res1 = 0;
	while (i1 >= 0)
	{
		ret = 0;
		a = argv[1][i1] - '0';
		i2 = len2 - 1;
		i_res2 = 0;
		while (i2 >= 0)
		{
			b = argv[2][i2] - '0';
			tmp = a * b + res[i_res1 + i_res2] + ret;
			ret = tmp / 10;
			res[i_res1 + i_res2] = tmp % 10;
			i2--;
			i_res2++;
		}
		if (ret > 0)
			res[i_res1 + i_res2] += ret;
		i1--;
		i_res1++;
	}
	i = i_res1 + i_res2 - 1;
	while (res[i] == 0)
		i--;
	while (i >= 0)
		_putchar(res[i--] + '0');
	_putchar('\n');
	free(res);
	return (0);
}
