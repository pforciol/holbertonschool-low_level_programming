#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: a pointer to the head of the doubly linked list
 * @idx: the index to add the node
 * @n: the value of the node
 *
 * Return: the new pointer
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new = NULL, *tmp;

	if (h)
	{
		new = malloc(sizeof(dlistint_t));
		if (new)
		{
			new->n = n;
			new->prev = NULL;
			if (idx == 0)
			{
				new->next = *h;
				if (*h)
					(*h)->prev = new;
				*h = new;
			}
			else
			{
				tmp = *h;
				while (i++ != idx - 1 && tmp)
					tmp = tmp->next;
				if (!tmp)
				{
					free(new);
					return (NULL);
				}
				else
				{
					new->prev = tmp;
					new->next = tmp->next;
					tmp->next = new;
					if (tmp->next)
						new->prev->next = new;
				}
			}
		}
	}
	return (new);
}
