#include "holberton.h"

/**
 * malloc_checked - allocates the memory using malloc
 *
 * @b: size to allocate in bytes
 *
 * Return: a pointer to the allocated memory, or 98 on malloc failure
 */

void	*malloc_checked(unsigned int b)
{
	void	*ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
