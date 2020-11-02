#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 *
 * @head: the listint_t argument (head)
 *
 * Return: the number of nodes in the list
 */

size_t	free_listint_safe(listint_t **head)
{
	size_t count = 0;
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;

		count++;
		if (*head > tmp)
		{
			free(tmp);
			break;
		}
		free(tmp);
	}
	(*head) = NULL;
	return (count);
}
