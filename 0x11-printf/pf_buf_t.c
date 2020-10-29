#include "holberton.h"

/**
 * pf_buf_t_new - allocates a pf_but_t
 *
 * @size: the size (in bytes) of the string to allocate in the buffer
 *
 * Return: a pointer to the new pf_buf_t
 */

pf_buf_t *pf_buf_t_new(size_t size)
{
	pf_buf_t *buffer = NULL;

	if (size > 0)
	{
		buffer = malloc(sizeof(pf_buf_t));
		if (buffer)
		{
			buffer->buf = malloc(sizeof(char) * (size + 1));
			if (!buffer->buf)
				return (pf_buf_t_delete(buffer));
			buffer->index = 0;
			buffer->len = size;
		}
	}

	return (buffer);
}

/**
 * pf_buf_t_delete - frees a pf_buf_t
 *
 * @buffer: the buffer to free
 *
 * Return: NULL (always, call if needed)
 */

void *pf_buf_t_delete(pf_buf_t *buffer)
{
	if (buffer)
	{
		if (buffer->buf)
			free(buffer->buf);
		free(buffer);
	}
	return (NULL);
}

/**
 * pf_buf_t_add_char - adds a char into the buffer
 *
 * @buffer: the buffer to store the char inside
 * @to_add: the char to add
 */

void pf_buf_t_add_char(pf_buf_t *buffer, char to_add)
{
	if (buffer->index < buffer->len)
	{
		buffer->buf[buffer->index] = to_add;
		buffer->index += 1;
	}
	if (buffer->index == buffer->len)
		pf_buf_t_flush(buffer);
}

/**
 * pf_buf_t_flush - prints and flush the filled buffer
 *
 * @buffer: the buffer to print and flush
 */

void pf_buf_t_flush(pf_buf_t *buffer)
{
	write(1, buffer->buf, buffer->len);
	buffer->index = 0;
}

/**
 * pf_buf_t_print - prints the buffer from index 0 to current index
 *
 * @buffer: the buffer to print
 */

void pf_buf_t_print(pf_buf_t *buffer)
{
	if (buffer->index > 0)
		write(1, buffer->buf, buffer->index);
}
