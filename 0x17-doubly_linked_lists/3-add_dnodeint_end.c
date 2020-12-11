#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: the head of the doubly linked list
 * @n: the value of the node to add
 *
 * Return: the new pointer
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *cur = *head;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->next = NULL;

		if (!(*head))
			*head = new;
		else
		{
			while (cur->next)
			{
				new->prev = cur;
				cur = cur->next;
			}
			cur->next = new;
		}
	}
	return (new);
}
