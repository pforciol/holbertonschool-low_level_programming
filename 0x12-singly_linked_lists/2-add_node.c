#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: the list_t argument (head)
 * @str: the string to store inside new node
 *
 * Return: a pointer to the new node
 */

list_t	*add_node(list_t **head, const char *str)
{
	list_t *node = NULL;

	node = malloc(sizeof(list_t));
	if (node)
	{
		node->str = strdup((char *)str);
		node->len = 0;
		while (str[node->len])
			node->len++;
		node->next = *head;
		*head = node;
	}
	return (node);
}
