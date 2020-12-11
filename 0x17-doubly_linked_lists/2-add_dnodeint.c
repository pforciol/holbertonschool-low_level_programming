#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: the head of the doubly linked list
 * @n: the value of the node to add
 *
 * Return: the new pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->prev = NULL;
		if (*head)
			(*head)->prev = new;
		new->next = *head;
		*head = new;
	}

	return (new);
}
