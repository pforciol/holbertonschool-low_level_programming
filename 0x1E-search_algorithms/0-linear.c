#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 on failure or not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		while (i < size)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
	}

	return (-1);
}
