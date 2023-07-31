#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in a linked list
 * @head: pointer to the first node in the list
 * @idx: index of the list where the new node should be added, starting at 0
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp_node;
	unsigned int i;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	tmp_node = *head;
	for (i = 0; i < idx - 1 && tmp_node; i++)
		tmp_node = tmp_node->next;

	if (!tmp_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = tmp_node->next;
	tmp_node->next = new_node;

	return (new_node);
}
