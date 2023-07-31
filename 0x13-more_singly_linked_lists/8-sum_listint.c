#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t linked list.
 *
 * @head: Pointer to the head of the linked list.
 *
 * Return: The resulting sum of all the data in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
