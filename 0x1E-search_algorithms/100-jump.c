#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located or -1 on failure or not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, m = 0;
	(void)value;

	if (array)
	{
		while (i <= size)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);

			m = i + sqrt(size);
			if (value <= array[m] || m >= size)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", i, m);
				while (i <= m && i < size)
				{
					printf("Value checked array[%lu] = [%d]\n", i, array[i]);
					if (value == array[i])
						return (i);
					i++;
				}
				return (-1);
			}
			i = m;
		}
	}

	return (-1);
}
