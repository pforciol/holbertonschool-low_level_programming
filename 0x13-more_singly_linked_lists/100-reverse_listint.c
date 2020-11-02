#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: the listint_t argument (head)
 *
 * Return: a pointer to the first node of the reversed list;
 */

listint_t	*reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;

	if (*head)
	{
		while (curr)
		{
			*head = (*head)->next;
			curr->next = prev;
			prev = curr;
			curr = *head;
		}
		*head = prev;
	}
	return (*head);
}
