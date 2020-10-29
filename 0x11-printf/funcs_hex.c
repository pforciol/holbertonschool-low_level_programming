#include "holberton.h"

/**
 * store_lowuhex - returns a string w/ unsigned int in lowercase hex
 *
 * @list: the va_list containing the element to print
 * @data: the struct containing the specifier metadata
 *
 * Return: a pointer to a temp pf_buf_t struct
 */

pf_buf_t *store_lowuhex(va_list list, spec_data_t *data)
{
	int num = va_arg(list, int);
	pf_buf_t *tmp = NULL;
	int length;
	char *str;
	(void)data;

	str = _dectohex(num, 0);

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
 * store_upuhex - returns a string w/ unsigned int in uppercase hex
 *
 * @list: the va_list containing the element to print
 * @data: the struct containing the specifier metadata
 *
 * Return: a pointer to a temp pf_buf_t struct
 */

pf_buf_t *store_upuhex(va_list list, spec_data_t *data)
{
	int num = va_arg(list, int);
	pf_buf_t *tmp = NULL;
	int length;
	char *str;
	(void)data;

	str = _dectohex(num, 1);

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
 * store_ptr - returns a string w/ a pointer address
 *
 * @list: the va_list containing the element to print
 * @data: the struct containing the specifier metadata
 *
 * Return: a pointer to a temp pf_buf_t struct
 */

pf_buf_t *store_ptr(va_list list, spec_data_t *data)
{
	void *ptr = va_arg(list, void*);
	pf_buf_t *tmp = NULL;
	int length;
	char *str = "";
	(void)data;

	str = _ptrtohex(ptr);

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
