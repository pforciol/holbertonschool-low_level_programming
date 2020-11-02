#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: the listint_t argument (head)
 *
 * Return: the number of nodes in the list
 */

size_t	print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *curr = head, *tmp;

	while (curr)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);

		tmp = curr;
		curr = curr->next;

		count++;
		if (curr > tmp)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			break;
		}
	}
	return (count);
}
