#include "lists.h"

/**
 * free_listint_safe - Frees a linked list.
 * @h: A pointer to the head of the linked list to check.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
        size_t len = 0;
        listint_t *p1, *p2;

        if (h == NULL || *h == NULL)
                return (0);

        while (*h != NULL)
        {
                p1 = *h;
                p2 = (*h)->next;

                if (p1 > p2)
                {
                        free(p1);
                        *h = p2;
                        len++;
                }
                else
                {
                        free(p1);
                        *h = NULL;
                        len++;
                        break;
                }
        }

        return (len);
}
