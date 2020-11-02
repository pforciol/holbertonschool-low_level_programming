#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: the listint_t argument (head)
 * @n: the int to store inside new node
 *
 * Return: a pointer to the new node
 */

listint_t	*add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;

	node = malloc(sizeof(listint_t));
	if (node)
	{
		node->n = n;
		node->next = *head;
		*head = node;
	}
	return (node);
}
