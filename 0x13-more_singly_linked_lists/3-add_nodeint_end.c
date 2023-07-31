#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list
 *
 * This function takes pointer to the head of  linked list, creates a new node
 * with the given integer value, and adds it the end of the list. If the list
 * is empty, the new node becomes the head of the list.
 *
 * @head: A pointer to the head of the linked list.
 * @n: The integer value to insert in the new node.
 *
 * Return: A pointer to the new node on success, or NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Allocate memory for the new node */
	listint_t *new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	/* Set the value of the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* Check if the list is empty */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the last node */
	listint_t *current_node = *head;

	while (current_node->next)
		current_node = current_node->next;

	/* Add the new node to the end of the list */
	current_node->next = new_node;

	return (new_node);
}
