#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: the head of the doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = NULL;

	while (head)
	{
		cur = head;
		head = head->next;
		free(cur);
	}
}
