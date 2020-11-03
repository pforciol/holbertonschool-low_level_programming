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
	size_t count = 0;
	listint_t *begin = head;

	if (head)
	{
		while (head && interval(begin, head, count))
		{
			head = head->next;
			count++;
		}
		if (head)
			return (head);
	}
	return (NULL);
}
