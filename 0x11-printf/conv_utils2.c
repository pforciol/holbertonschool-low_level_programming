#include "holberton.h"

/**
 * _uitoa - converts an unsigned int to an ascii string
 *
 * @i: int to convert
 *
 * Return: a string containing the number in ascii chars
 */

char *_uitoa(unsigned int i)
{
	char *str = NULL;
	unsigned int n = i;
	int j = 0;

	str = malloc(sizeof(char) * 11);
	if (!str)
	{
		free(str);
		return (NULL);
	}

	while (n / 10)
	{
		str[j++] = (n % 10) + '0';
		n /= 10;
	}
	str[j++] = (n % 10) + '0';
	str[j] = '\0';

	rev_string(str);

	return (str);
}

/**
 * _ptrtohex - converts pointer address to hex and stores in string
 *
 * @ptr: the pointer to convert
 *
 * Return: a string containing the number in hexadecimal
 */

char *_ptrtohex(void *ptr)
{
	unsigned long quo, rem;
	int j = 0;
	char res[10] = "(nil)";
	char *ret;

	quo = (unsigned long)ptr;
	while (quo != 0)
	{
		rem = quo % 16;
		if (rem < 10)
			res[j++] = 48 + rem;
		else
		{
			res[j++] = 87 + rem;
		}
		quo /= 16;
	}

	if (ptr != NULL)
	{
		res[j++] = 'x';
		res[j++] = '0';
		res[j++] = '\0';
		rev_string(res);
	}

	ret = _strdup(res);

	return (ret);
}
