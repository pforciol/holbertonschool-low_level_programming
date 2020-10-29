#include "holberton.h"

/**
 * store_char - returns a temp buffer containing the string
 *
 * @list: the va_list containing the element to print
 * @data: the struct containing the specifier metadata
 *
 * Return: a pointer to a temp pf_buf_t struct
 */

pf_buf_t *store_char(va_list list, spec_data_t *data)
{
	pf_buf_t *tmp = pf_buf_t_new(1);
	(void)data;

	if (tmp)
		tmp->buf[0] = va_arg(list, int);
	return (tmp);
}

/**
 * store_string - returns a temp buffer containing the string
 *
 * @list: the va_list containing the element to print
 * @data: the struct containing the specifier metadata
 *
 * Return: a pointer to a temp pf_buf_t struct
 */

pf_buf_t *store_string(va_list list, spec_data_t *data)
{
	char *str = va_arg(list, char*);
	pf_buf_t *tmp = NULL;
	int length;
	(void)data;

	if (str == NULL)
		str = "(null)";

	length = _strlen(str);
	if (length)
	{
		tmp = pf_buf_t_new(length);
		if (tmp)
			_strcpy(tmp->buf, str);
	}

	return (tmp);
}

/**
 * store_rev - returns a temp buffer containing the reversed string
 *
 * @list: the va_list containing the element to print
 * @data: the struct containing the specifier metadata
 *
 * Return: a pointer to a temp pf_buf_t struct
 */

pf_buf_t *store_rev(va_list list, spec_data_t *data)
{
	char *str = va_arg(list, char*);
	char *cpy;
	pf_buf_t *tmp = NULL;
	int length;
	(void)data;

	cpy = _strdup(str);
	if (cpy == NULL)
		cpy = "(null)";
	else
		rev_string(cpy);

	length = _strlen(cpy);
	if (length)
	{
		tmp = pf_buf_t_new(length);
		if (tmp)
			_strcpy(tmp->buf, cpy);
	}

	free(cpy);

	return (tmp);
}

/**
 * store_rot13 - returns a temp buffer containing the ROT13'd string
 *
 * @list: the va_list containing the element to print
 * @data: the struct containing the specifier metadata
 *
 * Return: a pointer to a temp pf_buf_t struct
 */

pf_buf_t *store_rot13(va_list list, spec_data_t *data)
{
	char *str = va_arg(list, char*);
	char *cpy;
	pf_buf_t *tmp = NULL;
	int length, i, j;
	char *src = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *dst = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	(void)data;

	cpy = _strdup(str);

	if (cpy == NULL)
		cpy = "(null)";
	else
	{
		for (i = 0; cpy[i]; i++)
		{
			for (j = 0; src[j]; j++)
			{
				if (cpy[i] == src[j])
				{
					cpy[i] = dst[j];
					break;
				}
			}
		}
	}

	length = _strlen(cpy);

	if (length)
	{
		tmp = pf_buf_t_new(length);
		if (tmp)
			_strcpy(tmp->buf, cpy);
	}

	free(cpy);

	return (tmp);
}

/**
 * store_strnop - returns a temp buffer containing a string with
 * all non printable chars as \x<ASCII code>
 *
 * @list: the va_list containing the element to print
 * @data: the struct containing the specifier metadata
 *
 * Return: a pointer to a temp pf_buf_t struct
 */

pf_buf_t *store_strnop(va_list list, spec_data_t *data)
{
	char *str = va_arg(list, char*);
	char *cpy, *hex;
	pf_buf_t *tmp = NULL;
	int length = 0, i = 0, j = 0;
	(void)data;

	cpy = malloc(sizeof(char) * (_strlen(str) + 1));
	if (str == NULL)
		cpy = "(null)";
	else
	{
		while (str[i])
		{
			if ((str[i] > 0 && str[i] < 32) || str[i] == 127)
			{
				hex = _chartohex(str[i++]);
				cpy = _realloc(cpy, sizeof(cpy), sizeof(cpy) + (sizeof(char) * 4));
				if (!cpy)
					free(cpy);
				cpy[j++] = '\\';
				cpy[j++] = 'x';
				cpy[j++] = hex[0];
				cpy[j++] = hex[1];
				free(hex);
			}
			else
				cpy[j++] = str[i++];
		}
		cpy[j] = '\0';
	}
	length = _strlen(cpy);
	if (length)
	{
		tmp = pf_buf_t_new(length);
		if (tmp)
			_strcpy(tmp->buf, cpy);
	}
	free(cpy);

	return (tmp);
}
