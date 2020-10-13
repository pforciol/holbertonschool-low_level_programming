#include "holberton.h"

/**
 * alloc_grid - allocates a 2 dimensional array of integers
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the 2D array,
 * or NULL if width or height is less or equal to 0 or on failure
 */

int		**alloc_grid(int width, int height)
{
	int	**array;
	int	i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (!array)
		return (NULL);
	while (i < height)
	{
		j = 0;
		array[i] = malloc(sizeof(int) * width);
		if (!array[i])
			return (0);
		while (j < width)
			array[i][j++] = 0;
		i++;
	}
	return (array);
}
