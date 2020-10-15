#include "holberton.h"

/**
 * array_range - creates an array of integers
 *
 * @min: the min value of the int
 * @max: the max value of the int
 *
 * Return: a pointer to the newly created array,
 * or NULL if min > max, or on failure
 */

int		*array_range(int min, int max)
{
	int	*array;
	int	len = max - min + 1;
	int	i = 0;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * len);
	if (!array)
		return (NULL);

	while (min <= max)
		array[i++] = min++;
	return (array);
}
