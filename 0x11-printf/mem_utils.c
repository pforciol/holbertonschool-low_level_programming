#include "holberton.h"

/**
 * _realloc - Reallocates mem block to a new size
 *
 * @ptr: Pointer to existing array
 * @old_size: Size of existing array
 * @new_size: Size of new array
 *
 * Return: a pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i, lim;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);

	if (ptr == NULL)
		return (new);

	if (new_size > old_size)
		lim = old_size;
	else if (new_size < old_size)
		lim = new_size;

	for (i = 0; i < lim; i++)
	{
		((char *)new)[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (new);
}
