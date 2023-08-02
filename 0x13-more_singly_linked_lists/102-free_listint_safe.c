#include "lists.h"

/**
 * free_listint_safe - Frees a linked list.
 * @h: A pointer to the head of the linked list to check.
 *
 * Return: If the linked list does not contain a loop - 0.
 */
size_t free_listint_safe(listint_t **h)
{
        size_t len = 0;
        listint_t *temp;

        if (h == NULL || *h == NULL)
                return (0);

        while (*h != NULL && (*h)->next > *h)
        {
                temp = (*h)->next;
                free(*h);
                *h = temp;
                len++;
        }

        if (*h != NULL)
        {
                len++;
                free(*h);
                *h = NULL;
        }

        return (len);
}
