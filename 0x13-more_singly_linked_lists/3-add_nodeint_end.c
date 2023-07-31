#include "lists.h"

/**
 * add_nodeint_end - Adds a new node with the given data at the end
 *                  of a singly linked list.
 *
 * @head: A pointer to the pointer to the first node of the list.
 * @n: The integer data to be stored in the new node.
 *
 * Return: If memory allocation fails or head is NULL, returns NULL.
 *         Otherwise, returns a pointer to the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	listint_t *last_node = *head;
	while (last_node->next)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
