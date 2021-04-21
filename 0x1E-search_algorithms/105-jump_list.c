#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 *
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 *
 * Return: a pointer to the first node where value is located or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t m = 0;
	listint_t *tmp = NULL;

	if (list)
	{
		while (list->index <= size)
		{
			m = list->index + sqrt(size);
			tmp = list;
			while (list->index < m && list->next)
				list = list->next;

			printf("Value checked at index [%lu] = [%d]\n",
					list->index, list->n);

			if (value <= list->n || m >= size)
			{
				printf("Value found between indexes [%lu] and [%lu]\n",
						tmp->index, list->index);
				while (tmp->index <= m && tmp->index < size)
				{
					printf("Value checked array[%lu] = [%d]\n",
							tmp->index, tmp->n);
					if (tmp->n == value)
						return (tmp);
					if (tmp->next)
						tmp = tmp->next;
					else
						break;
				}
				return (NULL);
			}
		}
	}

	return (NULL);
}
