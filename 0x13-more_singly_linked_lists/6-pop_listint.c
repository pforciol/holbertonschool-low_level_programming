#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n)
 *
 * @head: the listint_t argument (head)
 *
 * Return: the head node's data, or 0 if likned list is empty
 */

int	pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *tmp = NULL;

	if (*head)
	{
		tmp = *head;
		data = (*head)->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (data);
}
