#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 *
 * @array: the array
 * @size: the size of the array
 * @action: the action to do on the array element
 */

void	array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t		i = 0;

	if (array && action)
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	exit(98);
}
