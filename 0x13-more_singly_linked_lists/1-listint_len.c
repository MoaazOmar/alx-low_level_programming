#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: the head of the linked list of type listint_t to traverse
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
