#include "lists.h"

/**
 * nsert_nodeint_at_index - inserts a new node in a linked list
 * @head: Pointer to a pointer to the head of the linked list.
 * @idx: Index where the new node should be inserted.
 * @n: Value to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL if the operation fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	for (i = 0; temp != NULL && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
	}

	free(new_node);
	return (NULL);
}
