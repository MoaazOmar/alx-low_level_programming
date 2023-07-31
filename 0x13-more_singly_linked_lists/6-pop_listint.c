#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 *
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Return: The value of the deleted node's data, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
