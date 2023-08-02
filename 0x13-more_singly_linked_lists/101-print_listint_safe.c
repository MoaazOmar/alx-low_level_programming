#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
*looped_listint_len - Counts the number of distinct nodes in a linked list
*that may contain a loop.
*@head: A pointer to the head of the linked list to check.
*Return: If the linked list does not contain a loop - 0.
*Otherwise - the number of distinct nodes in the linked list.
*/
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head;
	size_t nodes = 0;

	if (head == NULL || head->next == NULL)
		return (0);

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			do {
				nodes++;
				tortoise = tortoise->next;
			} while (tortoise != hare);

			tortoise = head;
			hare = hare->next;

			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (nodes);
		}
	}

	return (nodes);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0, i;
	const listint_t *temp = head;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		while (temp != NULL)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
			nodes++;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
		}

		printf("-> [%p] %d\n", (void *)temp, temp->n);
		nodes++;
	}

	return (nodes);
}
