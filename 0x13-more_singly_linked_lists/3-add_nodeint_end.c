#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: the listint_t argument (head)
 * @n: the int inside the new node
 *
 * Return: a pointer to the added node
 */

listint_t	*add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = *head;
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;

		if (!(*head))
			*head = new_node;
		else
		{
			while (node->next)
				node = node->next;
			node->next = new_node;
		}
	}
	return (new_node);
}
