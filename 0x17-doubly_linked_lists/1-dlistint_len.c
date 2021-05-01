#include "lists.h"

/**
 * dlistint_len - Returns the length of the a double linked list.
 * @h: pointer to the head of the double linked list.
 *
 * Return: number of nodes od the dlistint_t.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
