#include "holberton.h"

/**
 * spec_data_t_delete - frees the structure spec_data_t
 *
 * @data: the structure to free
 *
 * Return: NULL if needed
 */

void *spec_data_t_delete(spec_data_t *data)
{
	if (data)
	{
		if (data->spec_length && _strcmp(data->spec_length, "") != 0)
			free(data->spec_length);
		if (data->spec_flags && _strcmp(data->spec_length, "") != 0)
			free(data->spec_flags);
		free(data);
	}
	return (NULL);
}

/**
 * spec_data_t_new - creates and allocates a new spec_data_t structure
 *
 * Return: a pointer to the newly allocated structure
 */

spec_data_t *spec_data_t_new(void)
{
	spec_data_t *new = NULL;

	new = malloc(sizeof(spec_data_t));

	if (new)
	{
		new->fmt_spec = '\0';
		new->spec_length = NULL;
		new->spec_prec = 0;
		new->spec_width = 0;
		new->spec_flags = NULL;
		new->fmt_len = 0;
		new->status = OK;
	}

	return (new);
}

/**
 * spec_data_t_parse - parses and fill the structure
 *
 * @data: the structure
 * @format: the format string
 *
 * Return: the output status
 */

int spec_data_t_parse(spec_data_t *data, const char *format)
{
	char *str;
	int i = 1, j = 0;

	data->status = INVALID;
	while (format[i])
	{
		j = is_in_format_specifiers(format[i]);
		if (j != -1)
			break;
		i++;
	}
	if (j != -1)
	{
		data->status = OK;
		data->fmt_spec = format[i];
		str = extract_format(format, i);
		if (str)
		{
			data->fmt_len = i;
			if (_strlen(str) != 0)
			{
				data->spec_length = extract_length(str, data);
				if (data->status == INVALID || data->status == ERROR)
					return (spec_data_t_leave(str, data->status));
				data->spec_prec = extract_prec(str, data);
				if (data->status == INVALID || data->status == ERROR)
					return (spec_data_t_leave(str, data->status));
				data->spec_width = extract_width(str, data);
				data->spec_flags = extract_flags(str, data);
				if (data->status == INVALID || data->status == ERROR)
					return (spec_data_t_leave(str, data->status));
				data->status = OK;
			}
			if (_strcmp(str, "") != 0)
				free(str);
		}
		else
			data->status = ERROR;
	}
	return (data->status);
}

/**
 * is_in_format_specifiers - checks if the current character is in specifiers
 *
 * @c: the character to check
 *
 * Return: the index if found, else -1
 */

int is_in_format_specifiers(char c)
{
	char specifiers[SPECIFIERS_SIZE] = "diuxXosScpbrR%";
	int i = 0;

	while (i < SPECIFIERS_SIZE)
	{
		if (c == specifiers[i])
			return (i);
		i++;
	}
	return (-1);
}

/**
 * spec_data_t_leave - frees and return on ERROR or INVALID
 *
 * @str: the string to free
 * @status: the current status
 *
 * Return: the status value
 */

int spec_data_t_leave(char *str, int status)
{
	if (str && _strcmp(str, "") != 0)
		free(str);
	return (status);
}
