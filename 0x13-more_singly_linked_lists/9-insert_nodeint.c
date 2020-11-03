#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: the listint_t argument (head)
 * @idx: the index to insert the node
 * @n: the int data of the node
 *
 * Return: the new node, or NULL if it doesn't exists
 */

listint_t	*insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->n = n;
		tmp = *head;

		if (idx == 0)
		{
			new->next = *head;
			*head = new;
		}
		else
		{
			while (i != idx - 1 && tmp)
			{
				tmp = tmp->next;
				i++;
			}
			new->next = tmp->next;
			tmp->next = new;
		}
	}
	return (new);
}
