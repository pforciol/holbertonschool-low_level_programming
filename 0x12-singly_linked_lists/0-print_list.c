#include "lists.h"

/**
 * print_node - prints teh given node of a list_t list
 *
 * @n: the list_t argument (node)
 */

static void print_node(const list_t *n)
{
	if (n->str)
		printf("[%d] %s\n", n->len, n->str);
	else
		printf("[0] (nil)\n");
}

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: the list_t argument (head)
 *
 * Return: the number of nodes
 */

size_t		print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		print_node(h);
		h = h->next;
		count++;
	}
	return (count);
}
