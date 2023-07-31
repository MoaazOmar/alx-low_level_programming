#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at index in a listint_t linked list.
 *
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to return.
 *
 * Return: Pointer to the node, or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp != NULL ? temp : NULL);
}
