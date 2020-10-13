#include "holberton.h"

/**
 * exit_free - frees the whole array in case of a malloc error
 *
 * @array: the 2D array to free
 * @nb: the number of int arrays inside array to free
 */

void	exit_free(int **array, int nb)
{
	int	i = 0;

	while (i < nb)
		free(array[i++]);
	free(array);
}

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
			exit_free(array, i);
		while (j < width)
			array[i][j++] = 0;
		i++;
	}
	return (array);
}
