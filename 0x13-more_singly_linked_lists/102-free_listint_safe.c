#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely.
 * @head: A pointer to the head of the linked list to free.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t num_freed = 0;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (0);

	while (*head != NULL)
	{
		current = *head;
		temp = current->next;

		if (current <= temp)
		{
			free(current);
			*head = NULL;
			num_freed++;
			break;
		}
		else
		{
			free(current);
			*head = temp;
			num_freed++;
		}
	}

	return (num_freed);
}
