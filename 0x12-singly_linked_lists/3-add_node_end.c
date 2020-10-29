#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: the list_t argument (head)
 * @str: the string inside the new nod
 *
 * Return: a pointer to the added node
 */

list_t	*add_node_end(list_t **head, const char *str)
{
	list_t *node = *head;
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (new_node)
	{
		new_node->str = strdup((char *)str);
		new_node->len = 0;
		while (str[new_node->len])
			new_node->len++;
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
