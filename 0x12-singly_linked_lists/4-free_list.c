#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: the list_t argument (head)
 */

void	free_list(list_t *head)
{
	list_t *node = NULL;

	while (head)
	{
		node = head;
		head = head->next;
		if (node->str)
			free(node->str);
		free(node);
	}
}
