#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: Starting point of the linked list, which is the first node.
 *
 * Return: Address of the first element in the new linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
