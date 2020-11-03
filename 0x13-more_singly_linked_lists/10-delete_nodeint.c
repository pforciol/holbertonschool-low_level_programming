#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position
 *
 * @head: the listint_t argument (head)
 * @index: the index to delete the node
 *
 * Return: 1 if succeeded, -1 if failed
 */

int		delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;
	listint_t *to_del = *head;

	if (*head && head)
	{
		if (index == 0)
			*head = (*head)->next;
		else
		{
			while (i != index - 1 && to_del)
			{
				tmp = to_del;
				to_del = tmp->next;
				i++;
			}
			if (to_del && i == index - 1)
			{
				tmp->next = to_del->next;
				free(to_del);
			}
			else
				return (-1);
		}
		return (1);
	}
	return (-1);
}
