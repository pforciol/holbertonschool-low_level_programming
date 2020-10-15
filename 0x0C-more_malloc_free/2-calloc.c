#include "holberton.h"

/**
 * _calloc - allocates memory for an array and set it to 0
 *
 * @nmemb: number of elements in the array
 * @size: size of each elements in bytes
 *
 * Return: a pointer to the allocated memory,
 * or NULL if nmemb or size = 0, or on failure
 */

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	void			*ptr;
	unsigned int	i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
		((char *)ptr)[i++] = 0;
	return (ptr);
}
