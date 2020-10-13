#include "holberton.h"

/**
 * free_grid - frees a 2 dimensional array of integers
 *
 * @grid: the grid to free
 * @height: the height of the grid
 */

void	free_grid(int **grid, int height)
{
	int	i = 0;

	while (i < height)
		free(grid[i++]);
	free(grid);
}
