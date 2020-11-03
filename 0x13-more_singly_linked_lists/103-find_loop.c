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
	listint_t *slow_p = head, *fast_p = head;

	if (head && head->next)
	{
		while (slow_p && fast_p && fast_p->next)
		{
			slow_p = slow_p->next;
			fast_p = fast_p->next->next;

			if (slow_p == fast_p)
			{
				slow_p = head;
				while (slow_p != fast_p)
				{
					slow_p = slow_p->next;
					fast_p = fast_p->next;
				}
				return (slow_p);
			}
		}
	}
	return (NULL);
}
