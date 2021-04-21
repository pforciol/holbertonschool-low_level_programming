#include "search_algos.h"

/**
 * print_array - prints the array of ints, separated with commas
 *
 * @array: a pointer to the array to print
 * @first: the first index to print
 * @last: the last index to print
 */

void print_array(int *array, size_t first, size_t last)
{
	size_t i;

	printf("Searching in array: ");
	for (i = first; i <= last; i++)
	{
		if (i != first)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_rec - searches for a value in an array of integers recursively
 *
 * @array: a pointer to the first element of the array to search in
 * @first: the minimum index of the array
 * @last: the maximum index of the array
 * @value: the value to search for
 *
 * Return: the index where value is located or -1 on failure or not found
 */

int binary_rec(int *array, size_t first, size_t last, int value)
{
	size_t i = 0;

	if (array)
	{
		if (first <= last)
		{
			print_array(array, first, last);
			i = (first + last) / 2;

			if (array[first] == value)
				return (first);

			if (value == array[i] && array[i - 1] != value)
				return (i);
			if (value > array[i])
				return (binary_rec(array, i + 1, last, value));
			if (value <= array[i])
				return (binary_rec(array, first, i, value));
		}
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in an array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located or -1 on failure or not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array)
		return (binary_rec(array, 0, size - 1, value));

	return (-1);
}
