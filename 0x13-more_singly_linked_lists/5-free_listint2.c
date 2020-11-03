#include "lists.h"

/**
 * free_listint2 - frees a listint_t list ans sets the head to NULL
 *
 * @head: the listint_t argument (head)
 */

void	free_listint2(listint_t **head)
{
	listint_t *node = NULL;

	if (head && *head)
	{
		while (head && *head)
		{
			node = *head;
			*head = (*head)->next;
			free(node);
		}
		*head = NULL;
	}
}
