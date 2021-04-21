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
	skiplist_t *cur, *prev;

	if (!list)
		return (NULL);

	cur = list;
	while (cur->next && cur->n < value)
	{
		prev = cur;
		if (cur->express)
			cur = cur->express;
		else
		{
			while (cur->next)
				cur = cur->next;
		}
		if (cur->next)
			printf("Value checked at index [%lu] = [%i]\n", cur->index, cur->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index,
	       cur->index);

	cur = prev;
	while (cur && cur->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n", cur->index, cur->n);
		if (cur->next)
			cur = cur->next;
		else
			return (NULL);
	}

	if (cur && cur->n == value)
	{
		printf("Value checked at index [%lu] = [%i]\n", cur->index, cur->n);
		return (cur);
	}

	return (NULL);
}
