#include "lists.h"

/**
 * find_listint_loop - search for the loop in a linked list.
 * @head: A pointer to the head of the linked list to check.
 *
 * Return: If the linked list does not contain a loop - 0 , But if found equal1
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (head == NULL)
		return (NULL);

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (fast);
		}
	}

	return (NULL);
}
