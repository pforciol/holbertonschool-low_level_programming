#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: the array to search in
 * @size: the number of elements in the array
 * @cmp: pointer to the comparison function
 *
 * Return: index of the first element for which the comparison don't return 0
 * or -1 if no element matches or if size <= 0
 */

int		int_index(int *array, int size, int (*cmp)(int))
{
	int	i = 0;
	
	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
