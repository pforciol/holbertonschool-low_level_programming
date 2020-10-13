#include "holberton.h"

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 *
 * @size: the size of the array
 * @c: the character to initialize with
 *
 * Return: pointer to the array, or NULL if size = 0 or fail
 */

char	*create_array(unsigned int size, char c)
{
	char			*array;
	unsigned int	i = 0;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	while (i < size)
		array[i++] = c;
	return (array);
}
