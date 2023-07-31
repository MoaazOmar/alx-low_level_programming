#include "lists.h"

/**
 * count_listint - returns the number of elements in a linked list
 * @head: the head of the linked list of type listint_t to traverse
 *
 * Return: the number of nodes in the list
 */
size_t count_listint(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}

	return (count);
}
