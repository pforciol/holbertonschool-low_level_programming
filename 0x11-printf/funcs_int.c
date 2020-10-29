#include "holberton.h"

/**
 * store_int - returns a temp buffer containing an int in string form
 *
 * @list: the va_list containing the element to print
 * @data: the struct containing the specifier metadata
 *
 * Return: a pointer to a temp pf_buf_t struct
 */

pf_buf_t *store_int(va_list list, spec_data_t *data)
{
	int num = va_arg(list, int);
	pf_buf_t *tmp = NULL;
	int length;
	char *str;
	(void)data;

	str = _itoa(num);

	if (str == NULL)
		str = "(null)";

	length = _strlen(str);
	if (length)
	{
		tmp = pf_buf_t_new(length);
		if (tmp)
			_strcpy(tmp->buf, str);
	}

	free(str);
	return (tmp);
}

/**
 * store_binary - returns a int converted in binary in string form
 *
 * @list: the va_list containing the element to print
 * @data: the struct containing the specifier metadata
 *
 * Return: a pointer to a temp pf_buf_t struct
 */

pf_buf_t *store_binary(va_list list, spec_data_t *data)
{
	unsigned int nbr = va_arg(list, unsigned int);
	pf_buf_t *tmp = NULL;
	int length;
	unsigned int i = 0, j = 0;
	char *binary = malloc(sizeof(char *) * 32);
	(void)data;

	if (binary)
	{
		for (i = 1 << 31; i > 0; i = i / 2)
		{
			binary[j] = (nbr & i) ? '1' : '0';
			j++;
		}

		i = 0;
		while (binary[i] == '0' && i < j - 1)
			i++;
		length = _strlen(binary + i);
		if (length)
		{
			tmp = pf_buf_t_new(length);
			if (tmp)
				_strcpy(tmp->buf, binary + i);
		}
	}
	free(binary);
	return (tmp);
}

/**
 * store_uint - returns a temp buffer containing an unsigned int
 *
 * @list: the va_list containing the element to print
 * @data: the struct containing the specifier metadata
 *
 * Return: a pointer to a temp pf_buf_t struct
 */

pf_buf_t *store_uint(va_list list, spec_data_t *data)
{
	int num = va_arg(list, int);
	pf_buf_t *tmp = NULL;
	int length;
	char *str;
	(void)data;

	str = _uitoa(num);

	if (str == NULL)
		str = "(null)";

	length = _strlen(str);
	if (length)
	{
		tmp = pf_buf_t_new(length);
		if (tmp)
			_strcpy(tmp->buf, str);
	}

	free(str);
	return (tmp);
}


/**
 * store_uoct - returns a buffer containing  an unsigned int in octal
 *
 * @list: the va_list containing the element to print
 * @data: the struct containing the specifier metadata
 *
 * Return: a pointer to a temp pf_buf_t struct
 */

pf_buf_t *store_uoct(va_list list, spec_data_t *data)
{
	int num = va_arg(list, int);
	pf_buf_t *tmp = NULL;
	int length;
	char *str;
	(void)data;

	str = _dectooct(num);

	if (str == NULL)
		str = "(null)";

	length = _strlen(str);
	if (length)
	{
		tmp = pf_buf_t_new(length);
		if (tmp)
			_strcpy(tmp->buf, str);
	}

	free(str);
	return (tmp);
}
