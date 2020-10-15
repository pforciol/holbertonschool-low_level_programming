#include "holberton.h"

/**
 * _realloc - reallocates a memory block
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: the old size value in bytes of ptr
 * @new_size: the new size value in bytes of ptr
 *
 * Return: a pointer to the newly allocated memory,
 * or NULL if new_size = 0 and ptr != NULL, or on failure
 */

void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char			*new_ptr;
	unsigned int	i = 0;

	if (!ptr)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
	{
		free(ptr);
		return (NULL);
	}

	while (i < new_size)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (new_ptr);
}
