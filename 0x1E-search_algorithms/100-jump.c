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
	size_t strt = 0, jmp, end = 0;

	if (!array || size == 0)
		return (-1);

	jmp = sqrt(size);

	while (end < size && array[end] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		end += jmp;
	}

	strt = end - jmp;
	printf("Value found between indexes [%lu] and [%lu]\n", strt, end);

	end = end >= size ? size - 1 : end;

	while  (strt <= end)
	{
		printf("Value checked array[%lu] = [%d]\n", strt, array[strt]);
		if (array[strt] == value)
			return ((int)strt);
		strt++;
	}

	return (-1);
}
