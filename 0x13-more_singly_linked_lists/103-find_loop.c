#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: the listint_t argument (head)
 *
 * Return: the address of the node where the loop starts, or NULL if no loop
 */

listint_t	*find_listint_loop(listint_t *head)
{
	listint_t *curr = head, *tmp;

	while (curr)
	{
		tmp = curr;
		curr = curr->next;

		if (curr > tmp)
			return (curr);
	}
	return (NULL);
}
