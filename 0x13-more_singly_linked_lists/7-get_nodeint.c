#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: the listint_t argument (head)
 * @index: the index to get the node
 *
 * Return: the nth node of the list, or NULL if it doesn't exists
 */

listint_t	*get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i != index && head)
	{
		head = head->next;
		i++;
	}

	if (i == index && head)
		return (head);
	return (NULL);
}
