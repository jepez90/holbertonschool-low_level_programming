#include "lists.h"

/**
 * get_dnodeint_at_index - searcha the node with the gived index in the list.
 * @head: pointer to the head of the double linked list.
 * @index: node to be returned
 *
 * Return: node at index or NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head)
	{
		if (index-- == 0)
			return (head);

		head = head->next;
	}

	return (NULL);
}
