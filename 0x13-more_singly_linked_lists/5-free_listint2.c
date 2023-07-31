#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list and sets the head to NULL.
 *
 * @head: Pointer to a pointer to the head of the linked list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
