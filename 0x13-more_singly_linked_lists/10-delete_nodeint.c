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
		{
			to_del = *head;
			*head = (*head)->next;
		}
		else
		{
			while (to_del)
			{
				if (i == index)
				{
					tmp->next = to_del->next;
					break;
				}
				else
				{
					tmp = to_del;
					to_del = to_del->next;
					i++;

				}
			}
		}
		free(to_del);
		return (1);
	}
	return (-1);
}
