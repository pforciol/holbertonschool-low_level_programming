#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: a pointer to the head of the list to search in
 * @value: the value to search for
 *
 * Return: a pointer to the first node where value is located or NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp = NULL;

	if (list)
	{
		while (list->next)
		{
			tmp = list;
			if (list->express)
				list = list->express;

			printf("Value checked at index [%lu] = [%d]\n",
					list->index, list->n);

			if (value <= list->n || (!list->express && tmp->next))
			{
				if (!list->express && value > list->n)
				{
					tmp = list;
					while (list->next)
						list = list->next;
				}

				printf("Value found between indexes [%lu] and [%lu]\n",
						tmp->index, list->index);
				while (tmp && tmp->index <= list->index)
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
